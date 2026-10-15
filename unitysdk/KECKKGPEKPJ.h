#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }

#define KECKKGPEKPJ_CLEAR_OFFSET UNITYSDK_OFFSET(0xB371080)
#define KECKKGPEKPJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB3710D0)
#define KECKKGPEKPJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB371010)

	class KECKKGPEKPJ : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x10
		::RPG::GameCore::SkillData* KPFEFOBGMMM; // 0x18
		::RPG::GameCore::SkillData* NDMDINFCKNG; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KECKKGPEKPJ_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2, ::RPG::GameCore::SkillData* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + KECKKGPEKPJ_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KECKKGPEKPJ_CLEAR_OFFSET))(this);
		}

	};
