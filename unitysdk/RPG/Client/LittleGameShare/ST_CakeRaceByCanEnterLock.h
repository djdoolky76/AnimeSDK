#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGamePredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByCanEnterLock; }
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCANENTERLOCK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D322E30)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCANENTERLOCK_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D322FD0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCANENTERLOCK_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D322F80)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCANENTERLOCK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D322E40)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCANENTERLOCK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D322DE0)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_CakeRaceByCanEnterLock_TypeDefinitionIndex = 10339;

	class ST_CakeRaceByCanEnterLock : public ::RPG::Client::LittleGameShare::LittleGamePredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCANENTERLOCK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCanEnterLock* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCanEnterLock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCANENTERLOCK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCanEnterLock* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCanEnterLock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCANENTERLOCK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCanEnterLock* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCanEnterLock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCANENTERLOCK_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCanEnterLock* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCanEnterLock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCANENTERLOCK_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
