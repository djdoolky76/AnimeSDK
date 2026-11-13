#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetMapTeamEntity; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPTEAMENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x206F7290)
#define RPG_GAMECORE_TARGETMAPTEAMENTITY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x206F7320)
#define RPG_GAMECORE_TARGETMAPTEAMENTITY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x206F7300)
#define RPG_GAMECORE_TARGETMAPTEAMENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x206F72A0)
#define RPG_GAMECORE_TARGETMAPTEAMENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x206F7220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapTeamEntity_TypeDefinitionIndex = 24402;

	class TargetMapTeamEntity : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPTEAMENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapTeamEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapTeamEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPTEAMENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapTeamEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapTeamEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPTEAMENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapTeamEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapTeamEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPTEAMENTITY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapTeamEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapTeamEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPTEAMENTITY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
