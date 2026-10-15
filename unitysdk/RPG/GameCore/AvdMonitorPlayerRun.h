#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvdMonitorPlayerRun; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_AVDMONITORPLAYERRUN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D432A10)
#define RPG_GAMECORE_AVDMONITORPLAYERRUN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D432A20)
#define RPG_GAMECORE_AVDMONITORPLAYERRUN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4329E0)

namespace RPG::GameCore
{
	class AvdMonitorPlayerRun : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single Duration; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::CharacterMotionFlag>* MotionFlags; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSatisfy; // 0x28
		::System::Boolean IsLoop; // 0x30
		::System::Boolean EnableFakeAvatar; // 0x31
		::System::Byte _padding1[0x6];
		::RPG::GameCore::DynamicString* StopEvent; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVDMONITORPLAYERRUN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvdMonitorPlayerRun* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvdMonitorPlayerRun*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVDMONITORPLAYERRUN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvdMonitorPlayerRun* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvdMonitorPlayerRun*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVDMONITORPLAYERRUN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
