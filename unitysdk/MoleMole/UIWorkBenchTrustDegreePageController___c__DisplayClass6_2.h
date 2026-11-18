#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FKLMEMBPANH;

#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__DISPLAYCLASS6_2__CTOR_OFFSET UNITYSDK_OFFSET(0x164E7BC0)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__DISPLAYCLASS6_2__ONUIOPEN_B__4_OFFSET UNITYSDK_OFFSET(0x164E7BD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchTrustDegreePageController___c__DisplayClass6_2_TypeDefinitionIndex = 42271;

	template <typename T1, typename T2>
	class UIWorkBenchTrustDegreePageController___c__DisplayClass6_2 : public ::System::Object
	{
	public:
		::System::Int32 campId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__DISPLAYCLASS6_2__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnUIOpen_b__4(::FKLMEMBPANH* template_)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKLMEMBPANH*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__DISPLAYCLASS6_2__ONUIOPEN_B__4_OFFSET))(this, template_);
		}
	};
}
