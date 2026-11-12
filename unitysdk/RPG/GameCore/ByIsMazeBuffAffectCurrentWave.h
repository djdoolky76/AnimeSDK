#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsMazeBuffAffectCurrentWave; }
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISMAZEBUFFAFFECTCURRENTWAVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E72D8A0)
#define RPG_GAMECORE_BYISMAZEBUFFAFFECTCURRENTWAVE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E72DA80)
#define RPG_GAMECORE_BYISMAZEBUFFAFFECTCURRENTWAVE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E72DA50)
#define RPG_GAMECORE_BYISMAZEBUFFAFFECTCURRENTWAVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E72D8B0)
#define RPG_GAMECORE_BYISMAZEBUFFAFFECTCURRENTWAVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E72D870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsMazeBuffAffectCurrentWave_TypeDefinitionIndex = 23968;

	class ByIsMazeBuffAffectCurrentWave : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* MazeBuffID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMAZEBUFFAFFECTCURRENTWAVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsMazeBuffAffectCurrentWave* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsMazeBuffAffectCurrentWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMAZEBUFFAFFECTCURRENTWAVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsMazeBuffAffectCurrentWave* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsMazeBuffAffectCurrentWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMAZEBUFFAFFECTCURRENTWAVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsMazeBuffAffectCurrentWave* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsMazeBuffAffectCurrentWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMAZEBUFFAFFECTCURRENTWAVE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsMazeBuffAffectCurrentWave* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsMazeBuffAffectCurrentWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMAZEBUFFAFFECTCURRENTWAVE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
