#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EnableNegativeHP; }

#define RPG_GAMECORE_ENABLENEGATIVEHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6400D0)
#define RPG_GAMECORE_ENABLENEGATIVEHP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6400E0)
#define RPG_GAMECORE_ENABLENEGATIVEHP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D640090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableNegativeHP_TypeDefinitionIndex = 23710;

	class EnableNegativeHP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLENEGATIVEHP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableNegativeHP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableNegativeHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLENEGATIVEHP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableNegativeHP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableNegativeHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLENEGATIVEHP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
