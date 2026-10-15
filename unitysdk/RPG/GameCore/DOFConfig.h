#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DOFConfig; }

#define RPG_GAMECORE_DOFCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5ECE30)
#define RPG_GAMECORE_DOFCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5E4B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DOFConfig_TypeDefinitionIndex = 24407;

	class DOFConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single FocusDistance; // 0x10
		::System::Single FStop; // 0x14
		::System::Single SensorWidth; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DOFCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::DOFConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DOFConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DOFCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
