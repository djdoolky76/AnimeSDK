#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinBattleHudAreaType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class OFNAKNBLMHH;

#define OFNAKNBLMHH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D23D3C0)
#define OFNAKNBLMHH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D23D3D0)
#define OFNAKNBLMHH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D23D390)

inline static constexpr unsigned int OFNAKNBLMHH_TypeDefinitionIndex = 19945;

	class OFNAKNBLMHH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::FateRinBattleHudAreaType ANKBAKDHDJD; // 0x18
		::System::Boolean GNDCCBNILML; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNAKNBLMHH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OFNAKNBLMHH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OFNAKNBLMHH*))((::PBYTE)hIl2Cpp + OFNAKNBLMHH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::OFNAKNBLMHH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OFNAKNBLMHH*))((::PBYTE)hIl2Cpp + OFNAKNBLMHH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
