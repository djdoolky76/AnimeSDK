#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SoundEmitterType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class StopSound; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_STOPSOUND_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB25E80)
#define RPG_GAMECORE_STOPSOUND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB25E90)
#define RPG_GAMECORE_STOPSOUND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB25E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StopSound_TypeDefinitionIndex = 20612;

	class StopSound : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* SoundName; // 0x18
		::RPG::GameCore::SoundEmitterType EmitterType; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::System::String* UniqueName; // 0x30
		::System::UInt32 GroupID; // 0x38
		::System::UInt32 ID; // 0x3C
		::System::Single StopTransitionDuration; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPSOUND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StopSound* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StopSound*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPSOUND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StopSound* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StopSound*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPSOUND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
