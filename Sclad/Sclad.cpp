#include <iostream>
using namespace std;

class IEmployee abstract
{
public:
    virtual void Work() abstract;
    virtual void GainSalary() abstract;
    virtual void QuitJob() abstract;
};

class IWorker
{
public:
    virtual void AddProduct() abstract;
    virtual void RemoveProduct() abstract;
    virtual void EditProduct() abstract;
};

class IWarehouseManager
{
public:
    virtual void BrowseProducts()abstract;
    virtual void ManageInventory() abstract;
};

class IWarehouseProducts
{
public:
    virtual void BrowseProducts() abstract;
    virtual void MarkProducts() abstract;
};

class IWarehouseLoader {
public:
    virtual void LoadProducts() abstract;
    virtual void UnloadProducts() abstract;
};


class IWarehouseQualityControl {
public:
    virtual void InspectProducts() abstract;
    virtual void SortProducts() abstract;
};


class WarehouseOperator : public IWorker, public IEmployee {
public:

    void Work() override
    {
        cout << "Warehouse operator is working \n";
    }

    void AddProduct() override {
        cout << "Warehouse operator is adding a product\n";
    }

    void RemoveProduct() override {
        cout << "Warehouse operator is deleting a product\n";
    }

    void EditProduct() override {
        cout << "Warehouse operator is editing a product\n";
    }
};

class WarehouseManager : public IWarehouseManager, public IEmployee {
public:
    void Work() override {
        cout << "Warehouse manager is working\n";
    }

    void GainSalary() override {
        cout << "Warehouse manager is gaining salary\n";
    }

    void QuitJob() override {
        cout << "Warehouse manager is quitting the job\n";
    }

    void BrowseProducts() override {
        cout << "Warehouse manager is browsing products\n";
    }

    void ManageInventory() override {
        cout << "Warehouse manager is managing inventory\n";
    }
};

class WarehouseProducts : public IWarehouseProducts, public IEmployee {
public:
    void Work() override {
        cout << "Warehouse products specialist is working\n";
    }

    void GainSalary() override {
        cout << "Warehouse products specialist is gaining salary\n";
    }

    void QuitJob() override {
        cout << "Warehouse products specialist is quitting the job\n";
    }

    void BrowseProducts() override {
        cout << "Warehouse products specialist is browsing products\n";
    }

    void MarkProducts() override {
        cout << "Warehouse products specialist is marking products\n";
    }
};

class WarehouseLoader : public IWarehouseLoader, public IEmployee {
public:
    void Work() override {
        cout << "Warehouse loader is working\n";
    }

    void GainSalary() override {
        cout << "Warehouse loader is gaining salary\n";
    }

    void QuitJob() override {
        cout << "Warehouse loader is quitting the job\n";
    }

    void LoadProducts() override {
        cout << "Warehouse loader is loading products\n";
    }

    void UnloadProducts() override {
        cout << "Warehouse loader is unloading products\n";
    }
};

class WarehouseQualityControl : public IWarehouseQualityControl, public IEmployee {
public:
    void Work() override {
        cout << "Warehouse quality control specialist is working\n";
    }

    void GainSalary() override {
        cout << "Warehouse quality control specialist is gaining salary\n";
    }

    void QuitJob() override {
        cout << "Warehouse quality control specialist is quitting the job\n";
    }

    void InspectProducts() override {
        cout << "Warehouse quality control specialist is inspecting products\n";
    }

    void SortProducts() override {
        cout << "Warehouse quality control specialist is sorting products\n";
    }
};

int main()
{
    IWarehouseLoader* loader = new WarehouseLoader;
    loader->LoadProducts();
}