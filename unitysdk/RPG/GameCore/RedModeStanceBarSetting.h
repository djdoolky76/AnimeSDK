#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RedModeStanceBarSetting; }
namespace System { class String; }

#define RPG_GAMECORE_REDMODESTANCEBARSETTING_CTOR_OFFSET UNITYSDK_OFFSET(0x1D947FC0)
#define RPG_GAMECORE_REDMODESTANCEBARSETTING_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D947EB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RedModeStanceBarSetting_TypeDefinitionIndex = 17149;

	class RedModeStanceBarSetting : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* LeftStanceBarColor; // 0x10
		::System::String* RightStanceBarColor; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REDMODESTANCEBARSETTING_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RedModeStanceBarSetting* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RedModeStanceBarSetting*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REDMODESTANCEBARSETTING_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
