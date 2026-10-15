#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class HeliobusSNSQuickPost; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_HELIOBUSSNSQUICKPOST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D764520)
#define RPG_GAMECORE_HELIOBUSSNSQUICKPOST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D764530)
#define RPG_GAMECORE_HELIOBUSSNSQUICKPOST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7644F0)

namespace RPG::GameCore
{
	class HeliobusSNSQuickPost : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 PostID; // 0x18
		::System::Boolean IsExecuting; // 0x1C
		::System::Byte _padding0[0x3];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPost; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCancel; // 0x28
		::RPG::GameCore::DynamicString* PostID_DS; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSSNSQUICKPOST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HeliobusSNSQuickPost* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HeliobusSNSQuickPost*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSSNSQUICKPOST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::HeliobusSNSQuickPost* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HeliobusSNSQuickPost*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSSNSQUICKPOST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
