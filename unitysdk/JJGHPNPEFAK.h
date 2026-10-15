#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFloorSavedValueChangeV2; }
namespace System { class String; }

#define JJGHPNPEFAK_CTOR_OFFSET UNITYSDK_OFFSET(0xB204760)
#define JJGHPNPEFAK_ILEMLGEGLCC_OFFSET UNITYSDK_OFFSET(0xB204970)
#define JJGHPNPEFAK__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xB204C00)
#define JJGHPNPEFAK__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xB2049D0)
#define JJGHPNPEFAK__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xB204AE0)

	class JJGHPNPEFAK
	{
	public:
		::System::String* OILAMMNCFMN; // 0x68
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitFloorSavedValueChangeV2* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitFloorSavedValueChangeV2*))((::PBYTE)hIl2Cpp + JJGHPNPEFAK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void ILEMLGEGLCC(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JJGHPNPEFAK_ILEMLGEGLCC_OFFSET))(this, a1);
		}

		::System::Void _RegisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJGHPNPEFAK__REGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void _UnregisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJGHPNPEFAK__UNREGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Boolean _PrepareData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JJGHPNPEFAK__PREPAREDATA_OFFSET))(this);
		}

	};
