#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelAudioTrigger; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELAUDIOTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D778800)
#define RPG_GAMECORE_LEVELAUDIOTRIGGER_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D778810)
#define RPG_GAMECORE_LEVELAUDIOTRIGGER_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7787D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAudioTrigger_TypeDefinitionIndex = 22962;

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
