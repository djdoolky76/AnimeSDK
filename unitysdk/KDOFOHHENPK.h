#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DLBMDHPMBNL;
class EHMBINMCDGN;
class IJFIHJJPHNA;
namespace RPG::GameCore { class DiceCombatSkillConfig; }

#define KDOFOHHENPK_BIKEEIOJIEP_OFFSET UNITYSDK_OFFSET(0x1C70EC40)
#define KDOFOHHENPK_BOOGDNEHMCN_OFFSET UNITYSDK_OFFSET(0x1C70EB90)
#define KDOFOHHENPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C70E990)
#define KDOFOHHENPK_FMPJJHKCNGG_OFFSET UNITYSDK_OFFSET(0x1C70EA10)
#define KDOFOHHENPK_JHGLOEOOGNE_OFFSET UNITYSDK_OFFSET(0x1C70EBF0)
#define KDOFOHHENPK_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1C70EAB0)
#define KDOFOHHENPK_LFODHGBCCHF_OFFSET UNITYSDK_OFFSET(0x1C70EA60)
#define KDOFOHHENPK_OMJKAPNGBEP_OFFSET UNITYSDK_OFFSET(0x1C70EB20)

	class KDOFOHHENPK : public ::System::Object
	{
	public:
		::RPG::GameCore::DiceCombatSkillConfig* IGHAHBNLIJA; // 0x10
		::EHMBINMCDGN* EEFMDEHLLFI; // 0x18
		::DLBMDHPMBNL* CFKGDHFGDCO; // 0x20
		::System::Void _ctor(::EHMBINMCDGN* a1, ::RPG::GameCore::DiceCombatSkillConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EHMBINMCDGN*, ::RPG::GameCore::DiceCombatSkillConfig*))((::PBYTE)hIl2Cpp + KDOFOHHENPK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void FMPJJHKCNGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOFOHHENPK_FMPJJHKCNGG_OFFSET))(this);
		}

		::System::Void LFODHGBCCHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOFOHHENPK_LFODHGBCCHF_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KDOFOHHENPK_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean OMJKAPNGBEP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOFOHHENPK_OMJKAPNGBEP_OFFSET))(this);
		}

		::System::Void BOOGDNEHMCN(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + KDOFOHHENPK_BOOGDNEHMCN_OFFSET))(this, a1);
		}

		::IJFIHJJPHNA* JHGLOEOOGNE()
		{
			return ((::IJFIHJJPHNA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOFOHHENPK_JHGLOEOOGNE_OFFSET))(this);
		}

		::System::Void BIKEEIOJIEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOFOHHENPK_BIKEEIOJIEP_OFFSET))(this);
		}

	};
