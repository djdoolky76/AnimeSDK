#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CPGHIOFODKC_IENCPPOEFKI_OFFSET UNITYSDK_OFFSET(0xEEDB0)
#define CPGHIOFODKC_OHEKBCCJNFJ_OFFSET UNITYSDK_OFFSET(0xEED90)

	struct alignas(4) CPGHIOFODKC
	{
		::UnityEngine::Vector3 FJMCLOIEMKG; // 0x10
		::System::Byte _padding0[0x4];
		::RootMotion::IKJob::IKTransformRef NGOPIKCKJMA; // 0x20
		::System::Boolean EBHIPOBHENF; // 0x30
		::System::Byte _padding1[0x3];
		::UnityEngine::Vector3 DEFIOCMDPGE; // 0x34
		::UnityEngine::Matrix4x4 DMOMEGLEDOA; // 0x40
		::System::Void OHEKBCCJNFJ(::RootMotion::IKJob::IKTransformRef a1)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKTransformRef))((::PBYTE)hIl2Cpp + CPGHIOFODKC_OHEKBCCJNFJ_OFFSET))(this, a1);
		}

		::System::Void IENCPPOEFKI(::RootMotion::IKJob::IKTransformRef a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKTransformRef, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CPGHIOFODKC_IENCPPOEFKI_OFFSET))(this, a1, a2, a3);
		}

	};
