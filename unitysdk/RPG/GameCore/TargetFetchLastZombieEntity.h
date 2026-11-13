#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchLastZombieEntity; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHLASTZOMBIEENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x206ED010)
#define RPG_GAMECORE_TARGETFETCHLASTZOMBIEENTITY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x206ED0C0)
#define RPG_GAMECORE_TARGETFETCHLASTZOMBIEENTITY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x206ED080)
#define RPG_GAMECORE_TARGETFETCHLASTZOMBIEENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x206ED020)
#define RPG_GAMECORE_TARGETFETCHLASTZOMBIEENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x206ECF80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchLastZombieEntity_TypeDefinitionIndex = 24459;

	class TargetFetchLastZombieEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTZOMBIEENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchLastZombieEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchLastZombieEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTZOMBIEENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchLastZombieEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchLastZombieEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTZOMBIEENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLastZombieEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLastZombieEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTZOMBIEENTITY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLastZombieEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLastZombieEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTZOMBIEENTITY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
