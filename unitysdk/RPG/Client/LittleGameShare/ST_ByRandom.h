#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGamePredicateConfig.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
class FCOEMCEDLNL;
namespace RPG::Client::LittleGameShare { class ST_ByRandom; }
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_LITTLEGAMESHARE_ST_BYRANDOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7C28F0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_BYRANDOM_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E7C6B30)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_BYRANDOM_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E7C4450)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_BYRANDOM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E7C2900)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_BYRANDOM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E7C6AE0)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_ByRandom_TypeDefinitionIndex = 10339;

	class ST_ByRandom : public ::RPG::Client::LittleGameShare::LittleGamePredicateConfig
	{
	public:
		::System::Int32 LeftRandomMin; // 0x20
		::System::Int32 LeftRandomMax; // 0x24
		::System::Int32 RightValue; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_BYRANDOM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::LittleGameShare::ST_ByRandom* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LittleGameShare::ST_ByRandom*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_BYRANDOM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::LittleGameShare::ST_ByRandom* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LittleGameShare::ST_ByRandom*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_BYRANDOM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_ByRandom* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_ByRandom*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_BYRANDOM_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_ByRandom* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_ByRandom*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_BYRANDOM_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
