#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AudioSetRTPCValue; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_AUDIOSETRTPCVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3DB6B0)
#define RPG_GAMECORE_AUDIOSETRTPCVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3DB6C0)
#define RPG_GAMECORE_AUDIOSETRTPCVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3DB680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AudioSetRTPCValue_TypeDefinitionIndex = 20613;

	class AudioSetRTPCValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* RTPCName; // 0x18
		::RPG::GameCore::DynamicFloat* Value; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIOSETRTPCVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AudioSetRTPCValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AudioSetRTPCValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIOSETRTPCVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AudioSetRTPCValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AudioSetRTPCValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIOSETRTPCVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
