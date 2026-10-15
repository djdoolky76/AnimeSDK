#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetPlayerMotionSync; }
namespace RPG::GameCore { class TaskContext; }

#define GMGIGGIKLCP_CTOR_OFFSET UNITYSDK_OFFSET(0x15AD12C0)
#define GMGIGGIKLCP_DDKNFJGJOOP_OFFSET UNITYSDK_OFFSET(0x15AD1440)
#define GMGIGGIKLCP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15AD12F0)
#define GMGIGGIKLCP_NFGIOBGPNMA_OFFSET UNITYSDK_OFFSET(0x15AD16B0)
#define GMGIGGIKLCP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15AD13E0)
#define GMGIGGIKLCP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15AD1640)

	class GMGIGGIKLCP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetPlayerMotionSync* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetPlayerMotionSync*))((::PBYTE)hIl2Cpp + GMGIGGIKLCP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGIGGIKLCP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGIGGIKLCP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGIGGIKLCP_ONTASKRESET_OFFSET))(this);
		}

		static ::System::Void DDKNFJGJOOP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + GMGIGGIKLCP_DDKNFJGJOOP_OFFSET))(a1);
		}

		static ::System::Void NFGIOBGPNMA()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMGIGGIKLCP_NFGIOBGPNMA_OFFSET))();
		}

	};
