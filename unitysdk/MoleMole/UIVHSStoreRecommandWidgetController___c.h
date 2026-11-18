#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17196290)
#define MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x171962D0)
#define MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER___C___CCTOR_B__27_0_OFFSET UNITYSDK_OFFSET(0x171962E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSStoreRecommandWidgetController___c_TypeDefinitionIndex = 43309;

	class UIVHSStoreRecommandWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIVHSStoreRecommandWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3C790);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* __cctor_b__27_0()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER___C___CCTOR_B__27_0_OFFSET))(this);
		}
	};
}
