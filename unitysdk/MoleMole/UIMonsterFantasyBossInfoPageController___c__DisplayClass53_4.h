#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HIEGJGAFDKI;

#define MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS53_4__BUILDCLIENTMONSTERINFO_B__13_OFFSET UNITYSDK_OFFSET(0x186DFC60)
#define MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS53_4__CTOR_OFFSET UNITYSDK_OFFSET(0x186DFC50)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyBossInfoPageController___c__DisplayClass53_4_TypeDefinitionIndex = 59118;

	template <typename T1, typename T2, typename T3, typename T4>
	class UIMonsterFantasyBossInfoPageController___c__DisplayClass53_4 : public ::System::Object
	{
	public:
		::System::Int32 monsterID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS53_4__CTOR_OFFSET))(this);
		}

		::System::Boolean _BuildClientMonsterInfo_b__13(::HIEGJGAFDKI* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIEGJGAFDKI*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS53_4__BUILDCLIENTMONSTERINFO_B__13_OFFSET))(this, x);
		}
	};
}
