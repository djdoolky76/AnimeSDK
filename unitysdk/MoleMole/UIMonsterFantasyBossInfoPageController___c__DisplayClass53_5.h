#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HIEGJGAFDKI;
class MENMIHAMGKH;

#define MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS53_5__BUILDCLIENTMONSTERINFO_B__14_OFFSET UNITYSDK_OFFSET(0x15D16480)
#define MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS53_5__CTOR_OFFSET UNITYSDK_OFFSET(0x15D16470)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyBossInfoPageController___c__DisplayClass53_5_TypeDefinitionIndex = 59113;

	template <typename T1, typename T2, typename T3, typename T4, typename T5>
	class UIMonsterFantasyBossInfoPageController___c__DisplayClass53_5 : public ::System::Object
	{
	public:
		::MENMIHAMGKH* monster; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS53_5__CTOR_OFFSET))(this);
		}

		::System::Boolean _BuildClientMonsterInfo_b__14(::HIEGJGAFDKI* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIEGJGAFDKI*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS53_5__BUILDCLIENTMONSTERINFO_B__14_OFFSET))(this, x);
		}
	};
}
