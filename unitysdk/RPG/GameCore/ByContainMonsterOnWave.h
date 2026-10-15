#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/WaveMonsterTiming.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByContainMonsterOnWave; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCONTAINMONSTERONWAVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4B9390)
#define RPG_GAMECORE_BYCONTAINMONSTERONWAVE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4B95C0)
#define RPG_GAMECORE_BYCONTAINMONSTERONWAVE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4B9590)
#define RPG_GAMECORE_BYCONTAINMONSTERONWAVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4B93A0)
#define RPG_GAMECORE_BYCONTAINMONSTERONWAVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4B9360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByContainMonsterOnWave_TypeDefinitionIndex = 22570;

	class ByContainMonsterOnWave : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::WaveMonsterTiming CreateTiming; // 0x20
		::System::Boolean AfterWave; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINMONSTERONWAVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByContainMonsterOnWave* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByContainMonsterOnWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINMONSTERONWAVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByContainMonsterOnWave* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByContainMonsterOnWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINMONSTERONWAVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainMonsterOnWave* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainMonsterOnWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINMONSTERONWAVE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainMonsterOnWave* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainMonsterOnWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINMONSTERONWAVE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
