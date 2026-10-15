#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitGroupStateChange; }

#define AJFOBDINJFC_CKADGNFLODD_OFFSET UNITYSDK_OFFSET(0x12CBB830)
#define AJFOBDINJFC_CTOR_OFFSET UNITYSDK_OFFSET(0x12CBB170)
#define AJFOBDINJFC_NFEJNDAIEBE_OFFSET UNITYSDK_OFFSET(0x12CBB8D0)
#define AJFOBDINJFC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12CBB3B0)
#define AJFOBDINJFC__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x12CBB430)
#define AJFOBDINJFC__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x12CBB5B0)
#define AJFOBDINJFC__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x12CBB6F0)

	class AJFOBDINJFC
	{
	public:
		::System::UInt32 PEEFHNHDBMF; // 0x68
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitGroupStateChange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitGroupStateChange*))((::PBYTE)hIl2Cpp + AJFOBDINJFC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJFOBDINJFC_ONTASKRESET_OFFSET))(this);
		}

		::System::Boolean _PrepareData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AJFOBDINJFC__PREPAREDATA_OFFSET))(this);
		}

		::System::Void _RegisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJFOBDINJFC__REGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void _UnregisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJFOBDINJFC__UNREGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void CKADGNFLODD(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AJFOBDINJFC_CKADGNFLODD_OFFSET))(this, a1, a2);
		}

		::System::Boolean NFEJNDAIEBE(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AJFOBDINJFC_NFEJNDAIEBE_OFFSET))(this, a1, a2);
		}

	};
