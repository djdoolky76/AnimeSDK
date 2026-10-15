#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/MVector2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSuiyangConfig; }

#define RPG_GAMECORE_FIVEDIMSUIYANGCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DF420)
#define RPG_GAMECORE_FIVEDIMSUIYANGCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6DF430)
#define RPG_GAMECORE_FIVEDIMSUIYANGCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6DF3F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSuiyangConfig_TypeDefinitionIndex = 18827;

	class FiveDimSuiyangConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsSuiyang; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single Speed; // 0x14
		::RPG::MVector2 InitDirection; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSUIYANGCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSuiyangConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSuiyangConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSUIYANGCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSuiyangConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSuiyangConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSUIYANGCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
