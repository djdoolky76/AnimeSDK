#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PerformanceCaptureNPC; }
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCECAPTURENPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8F8650)
#define RPG_GAMECORE_PERFORMANCECAPTURENPC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8F8410)

namespace RPG::GameCore
{
	class PerformanceCaptureNPC : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* CharacterUniqueName; // 0x10
		::System::UInt32 GroupID; // 0x18
		::System::UInt32 NpcID; // 0x1C
		::System::Boolean DisableEmoGraph; // 0x20
		::System::Boolean EnableStandByBreak; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCECAPTURENPC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceCaptureNPC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceCaptureNPC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCECAPTURENPC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
