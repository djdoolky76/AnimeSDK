#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class SubMissionData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraphComponent; }

#define PNEOBKKBONF_CTOR_OFFSET UNITYSDK_OFFSET(0xC335BF0)
#define PNEOBKKBONF_ECIEEFJOMGD_OFFSET UNITYSDK_OFFSET(0xC335CF0)
#define PNEOBKKBONF_FNAFBOHCJOJ_OFFSET UNITYSDK_OFFSET(0xC335D70)
#define PNEOBKKBONF_KBOJANLFKIJ_OFFSET UNITYSDK_OFFSET(0xC335DD0)
#define PNEOBKKBONF_LHMKCOHPLMN_OFFSET UNITYSDK_OFFSET(0xC335DC0)

	class PNEOBKKBONF : public ::System::Object
	{
	public:
		::RPG::Client::SubMissionData* IMPMJINFCMG; // 0x10
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x18
		::RPG::GameCore::LevelGraphComponent* BAEACBLBDLC; // 0x20
		::System::Void _ctor(::RPG::Client::SubMissionData* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SubMissionData*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PNEOBKKBONF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void ECIEEFJOMGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEOBKKBONF_ECIEEFJOMGD_OFFSET))(this);
		}

		::System::Void FNAFBOHCJOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEOBKKBONF_FNAFBOHCJOJ_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* LHMKCOHPLMN()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEOBKKBONF_LHMKCOHPLMN_OFFSET))(this);
		}

		::RPG::Client::SubMissionData* KBOJANLFKIJ()
		{
			return ((::RPG::Client::SubMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEOBKKBONF_KBOJANLFKIJ_OFFSET))(this);
		}

	};
