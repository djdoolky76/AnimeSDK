#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define OBENABFOGDA_BPBJABCGELJ_OFFSET UNITYSDK_OFFSET(0xBD39430)
#define OBENABFOGDA_CIJDJDICMMM_OFFSET UNITYSDK_OFFSET(0x22CA0)
#define OBENABFOGDA_EBMEABMNFHC_OFFSET UNITYSDK_OFFSET(0x22CE0)
#define OBENABFOGDA_EPBMHKEOKMC_OFFSET UNITYSDK_OFFSET(0x22CD0)
#define OBENABFOGDA_KOHDPDNNKHP_OFFSET UNITYSDK_OFFSET(0x22CF0)
#define OBENABFOGDA_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x22D00)
#define OBENABFOGDA_OLMCIPPKBFP_OFFSET UNITYSDK_OFFSET(0x22CB0)

	struct alignas(8) OBENABFOGDA
	{
		::UnityEngine::Vector3 FJMCLOIEMKG; // 0x10
		::System::Byte _padding0[0x4];
		::RootMotion::IKJob::IKTransformRef NGOPIKCKJMA; // 0x20
		::System::Boolean EBHIPOBHENF; // 0x30
		::System::Byte _padding1[0x7];
		::Il2CppArray<::System::Single>* GDNGFPHJGAK; // 0x38
		::Il2CppArray<::RootMotion::IKJob::IKTransformRef>* JDGAKOINMEA; // 0x40
		::System::Single APAKCBFMCAB; // 0x48
		::UnityEngine::Vector3 MCLLALGABAB; // 0x4C
		::UnityEngine::Vector3 DEFIOCMDPGE; // 0x58
		::UnityEngine::Matrix4x4 DMOMEGLEDOA; // 0x64
		::System::Void CIJDJDICMMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBENABFOGDA_CIJDJDICMMM_OFFSET))(this);
		}

		::UnityEngine::Quaternion OLMCIPPKBFP(::System::Int32 a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OBENABFOGDA_OLMCIPPKBFP_OFFSET))(this, a1);
		}

		::System::Void EPBMHKEOKMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBENABFOGDA_EPBMHKEOKMC_OFFSET))(this);
		}

		::System::Single EBMEABMNFHC(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OBENABFOGDA_EBMEABMNFHC_OFFSET))(this, a1);
		}

		::System::Void KOHDPDNNKHP(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OBENABFOGDA_KOHDPDNNKHP_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::Quaternion BPBJABCGELJ(::RootMotion::IKJob::IKTransformRef a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single a5)
		{
			return ((::UnityEngine::Quaternion(*)(::RootMotion::IKJob::IKTransformRef, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + OBENABFOGDA_BPBJABCGELJ_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBENABFOGDA_LDAMHBBILAD_OFFSET))(this);
		}

	};
