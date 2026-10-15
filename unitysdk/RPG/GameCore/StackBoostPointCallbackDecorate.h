#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BPDecorateType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class StackBoostPointCallbackDecorate; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_STACKBOOSTPOINTCALLBACKDECORATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB02760)
#define RPG_GAMECORE_STACKBOOSTPOINTCALLBACKDECORATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB02770)
#define RPG_GAMECORE_STACKBOOSTPOINTCALLBACKDECORATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB02720)

namespace RPG::GameCore
{
	class StackBoostPointCallbackDecorate : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 Count; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* SourceTargetType; // 0x20
		::RPG::GameCore::DynamicFloat* Delta; // 0x28
		::RPG::GameCore::BPDecorateType Type; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKBOOSTPOINTCALLBACKDECORATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StackBoostPointCallbackDecorate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StackBoostPointCallbackDecorate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKBOOSTPOINTCALLBACKDECORATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StackBoostPointCallbackDecorate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StackBoostPointCallbackDecorate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKBOOSTPOINTCALLBACKDECORATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
