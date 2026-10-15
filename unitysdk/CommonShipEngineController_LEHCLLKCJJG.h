#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AirshipEngineBehaviorMode;

#define COMMONSHIPENGINECONTROLLER_LEHCLLKCJJG_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0xF12E0)

	struct alignas(4) CommonShipEngineController_LEHCLLKCJJG
	{
		::System::Single GCJMFBKLGHI; // 0x10
		::System::Single LFMEKFKILBC; // 0x14
		::UnityEngine::Vector3 BPFIJKPNADD; // 0x18
		::UnityEngine::Quaternion NMELCPIOKNO; // 0x24
		::System::Void DLAILGNMFGI(::AirshipEngineBehaviorMode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AirshipEngineBehaviorMode*))((::PBYTE)hIl2Cpp + COMMONSHIPENGINECONTROLLER_LEHCLLKCJJG_DLAILGNMFGI_OFFSET))(this, a1);
		}

	};
