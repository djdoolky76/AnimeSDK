#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
class NILMOLIGDGM;
namespace RPG::GameCore { class BossInfoBarCustomizedBaseClickConfig; }

#define NILMOLIGDGM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E752410)
#define NILMOLIGDGM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E752420)
#define NILMOLIGDGM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E752280)

inline static constexpr unsigned int NILMOLIGDGM_TypeDefinitionIndex = 24104;

	class NILMOLIGDGM : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::BossInfoBarCustomizedBaseClickConfig* LBNFEKIPKCL; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NILMOLIGDGM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NILMOLIGDGM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NILMOLIGDGM*))((::PBYTE)hIl2Cpp + NILMOLIGDGM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NILMOLIGDGM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NILMOLIGDGM*))((::PBYTE)hIl2Cpp + NILMOLIGDGM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
