#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class LevelAudioState; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELAUDIOSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D778460)
#define RPG_GAMECORE_LEVELAUDIOSTATE_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D778470)
#define RPG_GAMECORE_LEVELAUDIOSTATE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D778430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAudioState_TypeDefinitionIndex = 23791;

	class LevelAudioState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* GroupName; // 0x18
		::RPG::GameCore::DynamicString* StateName; // 0x20
		::System::Boolean SaveToCustomString; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIOSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelAudioState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelAudioState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIOSTATE_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelAudioState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelAudioState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIOSTATE_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
