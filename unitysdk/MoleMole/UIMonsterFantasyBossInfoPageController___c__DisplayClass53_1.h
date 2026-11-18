#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GFHOCGNJKEF;

#define MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS53_1__BUILDCLIENTMONSTERINFO_B__1_OFFSET UNITYSDK_OFFSET(0x1904E000)
#define MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS53_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1904DFF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyBossInfoPageController___c__DisplayClass53_1_TypeDefinitionIndex = 59111;

	template <typename T>
	class UIMonsterFantasyBossInfoPageController___c__DisplayClass53_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Int32 i1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS53_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _BuildClientMonsterInfo_b__1(::GFHOCGNJKEF* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::GFHOCGNJKEF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS53_1__BUILDCLIENTMONSTERINFO_B__1_OFFSET))(this, x);
		}
	};
}
