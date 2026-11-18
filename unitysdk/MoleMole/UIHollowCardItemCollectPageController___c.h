#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MLILBAKCGJA;
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x199DAA90)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x199DAAD0)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__GOTOMAINCITY_B__33_0_OFFSET UNITYSDK_OFFSET(0x199DACB0)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__ONCLOSEREFRESHHALLDATA_B__22_0_OFFSET UNITYSDK_OFFSET(0x199DAAE0)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__SORTCFGS_B__29_0_OFFSET UNITYSDK_OFFSET(0x199DABA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardItemCollectPageController___c_TypeDefinitionIndex = 88079;

	class UIHollowCardItemCollectPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__33_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHollowCardItemCollectPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C2A0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIHollowCardItemCollectPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C2A8);
		}
		static ::System::Comparison_1<::MLILBAKCGJA*>** StaticGet___9__29_0()
		{
			return (::System::Comparison_1<::MLILBAKCGJA*>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowCardItemCollectPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C2B0);
		}
		static ::System::Action** StaticGet___9__22_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHollowCardItemCollectPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C2B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnCloseRefreshHallData_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__ONCLOSEREFRESHHALLDATA_B__22_0_OFFSET))(this);
		}

		::System::Int32 _SortCfgs_b__29_0(::MLILBAKCGJA* x, ::MLILBAKCGJA* y)
		{
			return ((::System::Int32(*)(::PVOID, ::MLILBAKCGJA*, ::MLILBAKCGJA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__SORTCFGS_B__29_0_OFFSET))(this, x, y);
		}

		::System::Void _GoToMainCity_b__33_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__GOTOMAINCITY_B__33_0_OFFSET))(this);
		}
	};
}
