#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ILONCCDHCFN.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define POPMABHOCDI_CTOR_OFFSET UNITYSDK_OFFSET(0xC376E30)
#define POPMABHOCDI_FBJKGECFNAJ_OFFSET UNITYSDK_OFFSET(0xC376D20)
#define POPMABHOCDI_HBOLGHNHECG_1_OFFSET UNITYSDK_OFFSET(0xC376A80)
#define POPMABHOCDI_HBOLGHNHECG_OFFSET UNITYSDK_OFFSET(0xC376660)
#define POPMABHOCDI_IKGGKECIPFL_OFFSET UNITYSDK_OFFSET(0xC375D70)
#define POPMABHOCDI_JHMKPPGKEBK_OFFSET UNITYSDK_OFFSET(0xC376880)
#define POPMABHOCDI_NBAKIKMCBHM_OFFSET UNITYSDK_OFFSET(0xC376DB0)

	class POPMABHOCDI : public ::System::Object
	{
	public:
		::Il2CppArray<::ILONCCDHCFN>* HBBOHPKDLHG; // 0x10
		::System::Single AMBFLDNGJOK; // 0x18
		// static const ::System::Object EFANMNHDABK; // 0x0
		// static const ::System::Object DBNGHIGHOGG; // 0x0
		// static const ::System::Object JMBODBBFGJO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPMABHOCDI_CTOR_OFFSET))(this);
		}

		::System::Void IKGGKECIPFL(::RPG::GameCore::GameEntity* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + POPMABHOCDI_IKGGKECIPFL_OFFSET))(this, a1, a2);
		}

		::System::Void HBOLGHNHECG(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::RPG::GameCore::CharacterMotionFlag a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::RPG::GameCore::CharacterMotionFlag, ::System::Single))((::PBYTE)hIl2Cpp + POPMABHOCDI_HBOLGHNHECG_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void HBOLGHNHECG_1(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::RPG::GameCore::CharacterMotionFlag a7, ::System::Single a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::RPG::GameCore::CharacterMotionFlag, ::System::Single))((::PBYTE)hIl2Cpp + POPMABHOCDI_HBOLGHNHECG_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Single FBJKGECFNAJ(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + POPMABHOCDI_FBJKGECFNAJ_OFFSET))(this, a1);
		}

		::System::Single NBAKIKMCBHM(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + POPMABHOCDI_NBAKIKMCBHM_OFFSET))(this, a1, a2);
		}

		::System::Single JHMKPPGKEBK(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + POPMABHOCDI_JHMKPPGKEBK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

	};
