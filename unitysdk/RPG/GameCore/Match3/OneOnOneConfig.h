#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class OneOnOneConfig; }

#define RPG_GAMECORE_MATCH3_ONEONONECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D84F850)
#define RPG_GAMECORE_MATCH3_ONEONONECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D84DDB0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int OneOnOneConfig_TypeDefinitionIndex = 24871;

	class OneOnOneConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single InputTimePerSection; // 0x10
		::System::UInt32 MaxSection; // 0x14
		::System::UInt32 StepPerSection; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ONEONONECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::OneOnOneConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::OneOnOneConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ONEONONECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
