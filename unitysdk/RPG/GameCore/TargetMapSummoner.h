#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetMapSummoner; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPSUMMONER_CTOR_OFFSET UNITYSDK_OFFSET(0x206F6F70)
#define RPG_GAMECORE_TARGETMAPSUMMONER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x206F7070)
#define RPG_GAMECORE_TARGETMAPSUMMONER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x206F7040)
#define RPG_GAMECORE_TARGETMAPSUMMONER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x206F6F80)
#define RPG_GAMECORE_TARGETMAPSUMMONER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x206F6EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapSummoner_TypeDefinitionIndex = 24409;

	class TargetMapSummoner : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean Recursive; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSUMMONER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapSummoner* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapSummoner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSUMMONER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapSummoner* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapSummoner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSUMMONER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSummoner* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSummoner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSUMMONER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSummoner* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSummoner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSUMMONER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
