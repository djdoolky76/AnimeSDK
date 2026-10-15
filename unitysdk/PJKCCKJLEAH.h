#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDCOAEICDMI;
class DHLGJCOBNKH;
class DJMJILPLPMM;
class FEIPLKMMIOI;
class IEODIJJGAGM;
class MMDBHBECEMP;
class PFLFOLKICOB;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }

#define PJKCCKJLEAH_CTOR_OFFSET UNITYSDK_OFFSET(0xC296090)
#define PJKCCKJLEAH_MJFKHPEKPBP_OFFSET UNITYSDK_OFFSET(0xC296200)
#define PJKCCKJLEAH_OLIDEAPAJAC_OFFSET UNITYSDK_OFFSET(0xC296BA0)

	class PJKCCKJLEAH : public ::System::Object
	{
	public:
		::PFLFOLKICOB* MPPFAMFACCG; // 0x10
		::DJMJILPLPMM* LEJAJECCKJB; // 0x18
		::FEIPLKMMIOI* DEEMJACOGII; // 0x20
		::MMDBHBECEMP* JGKFKCKJNOC; // 0x28
		::DDCOAEICDMI* KDFKDBMMOLG; // 0x30
		::System::Void _ctor(::DDCOAEICDMI* a1, ::PFLFOLKICOB* a2, ::MMDBHBECEMP* a3, ::DJMJILPLPMM* a4, ::FEIPLKMMIOI* a5)
		{
			return ((::System::Void(*)(::PVOID, ::DDCOAEICDMI*, ::PFLFOLKICOB*, ::MMDBHBECEMP*, ::DJMJILPLPMM*, ::FEIPLKMMIOI*))((::PBYTE)hIl2Cpp + PJKCCKJLEAH_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void MJFKHPEKPBP(::IEODIJJGAGM* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IEODIJJGAGM*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PJKCCKJLEAH_MJFKHPEKPBP_OFFSET))(this, a1, a2);
		}

		::System::Void OLIDEAPAJAC(::DHLGJCOBNKH* a1, ::RPG::GameCore::SkillData* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::DHLGJCOBNKH*, ::RPG::GameCore::SkillData*, ::System::UInt32))((::PBYTE)hIl2Cpp + PJKCCKJLEAH_OLIDEAPAJAC_OFFSET))(this, a1, a2, a3);
		}

	};
