#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CPUGPUInfo; }
namespace System { class String; }

#define RPG_GAMECORE_CPUGPUINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D544470)
#define RPG_GAMECORE_CPUGPUINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5442A0)

namespace RPG::GameCore
{
	class CPUGPUInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* GraphicDeviceName; // 0x10
		::System::String* DeviceModel; // 0x18
		::System::Int32 GraphicsDeviceType; // 0x20
		::System::Int32 DisableType; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CPUGPUINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CPUGPUInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CPUGPUInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CPUGPUINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
