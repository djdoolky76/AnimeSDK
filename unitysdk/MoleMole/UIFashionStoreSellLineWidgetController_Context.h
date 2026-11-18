#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class AMNHFJOBPKL;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIFASHIONSTORESELLLINEWIDGETCONTROLLER_CONTEXT_ADDPRODUCT_OFFSET UNITYSDK_OFFSET(0x1669FF00)
#define MOLEMOLE_UIFASHIONSTORESELLLINEWIDGETCONTROLLER_CONTEXT_FILLWITHNULL_OFFSET UNITYSDK_OFFSET(0x166A0030)
#define MOLEMOLE_UIFASHIONSTORESELLLINEWIDGETCONTROLLER_CONTEXT_GETPRODUCTARRAY_OFFSET UNITYSDK_OFFSET(0x166A0150)
#define MOLEMOLE_UIFASHIONSTORESELLLINEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1669FE60)

namespace MoleMole
{
	inline static constexpr unsigned int UIFashionStoreSellLineWidgetController_Context_TypeDefinitionIndex = 43646;

	class UIFashionStoreSellLineWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Il2CppArray<::AMNHFJOBPKL*>* _productArray; // 0x28
		::System::Func_2<::System::Int32, ::System::Int32>* GetSelectedColByRow; // 0x30
		::System::Action_2<::System::Int32, ::System::Int32>* OnClickProduct; // 0x38
		::System::Int32 row; // 0x40
		::System::Int32 currIdx; // 0x44

		::System::Void _ctor(::System::Int32 rowIndex, ::System::Action_2<::System::Int32, ::System::Int32>* onClick, ::System::Func_2<::System::Int32, ::System::Int32>* getSelectedColByRow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_2<::System::Int32, ::System::Int32>*, ::System::Func_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORESELLLINEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this, rowIndex, onClick, getSelectedColByRow);
		}

		::System::Void AddProduct(::AMNHFJOBPKL* newProduct)
		{
			return ((::System::Void(*)(::PVOID, ::AMNHFJOBPKL*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORESELLLINEWIDGETCONTROLLER_CONTEXT_ADDPRODUCT_OFFSET))(this, newProduct);
		}

		::System::Void FillWithNull()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORESELLLINEWIDGETCONTROLLER_CONTEXT_FILLWITHNULL_OFFSET))(this);
		}

		::Il2CppArray<::AMNHFJOBPKL*>* GetProductArray()
		{
			return ((::Il2CppArray<::AMNHFJOBPKL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORESELLLINEWIDGETCONTROLLER_CONTEXT_GETPRODUCTARRAY_OFFSET))(this);
		}
	};
}
