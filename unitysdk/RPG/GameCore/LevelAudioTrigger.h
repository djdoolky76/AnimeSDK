#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelAudioTrigger; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELAUDIOTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A6280)
#define RPG_GAMECORE_LEVELAUDIOTRIGGER_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D7A6290)
#define RPG_GAMECORE_LEVELAUDIOTRIGGER_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7A6250)

namespace RPG::GameCore
{
	class LevelAudioTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* Event; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIOTRIGGER_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelAudioTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelAudioTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIOTRIGGER_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelAudioTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelAudioTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIOTRIGGER_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
