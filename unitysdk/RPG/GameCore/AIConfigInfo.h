#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AIConfigInfo; }
namespace RPG::GameCore { class AIPathwayInfo; }
namespace RPG::GameCore { class AISlaveConfig; }
namespace System { class String; }

#define RPG_GAMECORE_AICONFIGINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D338630)
#define RPG_GAMECORE_AICONFIGINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3383A0)

namespace RPG::GameCore
{
	class AIConfigInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* AIFile; // 0x10
		::System::Boolean OverrideVariable; // 0x18
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::AIPathwayInfo*>* PathwayList; // 0x20
		::System::UInt32 DefaultAIPathwayIndex; // 0x28
		::System::Byte _padding1[0x4];
		::Il2CppArray<::RPG::GameCore::AISlaveConfig*>* SlaveConfigList; // 0x30
		::System::Boolean EnableVision; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AICONFIGINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AIConfigInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AIConfigInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AICONFIGINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
