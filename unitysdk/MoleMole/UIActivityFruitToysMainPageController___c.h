#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MGMKKLLGDHO;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIACTIVITYFRUITTOYSMAINPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D1BDF0)
#define MOLEMOLE_UIACTIVITYFRUITTOYSMAINPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19D1BE30)
#define MOLEMOLE_UIACTIVITYFRUITTOYSMAINPAGECONTROLLER___C__TRYREADALL_B__24_0_OFFSET UNITYSDK_OFFSET(0x19D1BE40)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityFruitToysMainPageController___c_TypeDefinitionIndex = 65685;

	class UIActivityFruitToysMainPageController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::MGMKKLLGDHO*, ::System::Int32>** StaticGet___9__24_0()
		{
			return (::System::Func_2<::MGMKKLLGDHO*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityFruitToysMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x50CA0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIActivityFruitToysMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x50CA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFRUITTOYSMAINPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFRUITTOYSMAINPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _TryReadAll_b__24_0(::MGMKKLLGDHO* l)
		{
			return ((::System::Int32(*)(::PVOID, ::MGMKKLLGDHO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFRUITTOYSMAINPAGECONTROLLER___C__TRYREADALL_B__24_0_OFFSET))(this, l);
		}
	};
}
