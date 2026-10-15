#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AudioSetRTPCValueByRatio; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_AUDIOSETRTPCVALUEBYRATIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3DB960)
#define RPG_GAMECORE_AUDIOSETRTPCVALUEBYRATIO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3DBA10)
#define RPG_GAMECORE_AUDIOSETRTPCVALUEBYRATIO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3DB890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AudioSetRTPCValueByRatio_TypeDefinitionIndex = 20614;

	class AudioSetRTPCValueByRatio : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* RTPCName; // 0x18
		::RPG::GameCore::DynamicFloat* MaxValue; // 0x20
		::RPG::GameCore::DynamicFloat* CurValue; // 0x28
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIOSETRTPCVALUEBYRATIO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AudioSetRTPCValueByRatio* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AudioSetRTPCValueByRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIOSETRTPCVALUEBYRATIO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AudioSetRTPCValueByRatio* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AudioSetRTPCValueByRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIOSETRTPCVALUEBYRATIO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
