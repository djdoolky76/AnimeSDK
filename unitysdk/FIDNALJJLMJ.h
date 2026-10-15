#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPGHIOFODKC.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define FIDNALJJLMJ_BPBJABCGELJ_OFFSET UNITYSDK_OFFSET(0x157A3650)
#define FIDNALJJLMJ_EBMEABMNFHC_OFFSET UNITYSDK_OFFSET(0x2E766A0)
#define FIDNALJJLMJ_EPBMHKEOKMC_OFFSET UNITYSDK_OFFSET(0x2E76690)
#define FIDNALJJLMJ_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x2E766B0)
#define FIDNALJJLMJ_OLMCIPPKBFP_OFFSET UNITYSDK_OFFSET(0x2E76670)

inline static constexpr unsigned int FIDNALJJLMJ_TypeDefinitionIndex = 68436;

	struct alignas(8) FIDNALJJLMJ
	{
		::CPGHIOFODKC OJAGLAIBCOE; // 0x10
		::CPGHIOFODKC FLICIOLPPFL; // 0x80
		::Il2CppArray<::CPGHIOFODKC>* HCJLLFFHNCA; // 0xF0
		::Il2CppArray<::System::Single>* GDNGFPHJGAK; // 0xF8
		::Il2CppArray<::RootMotion::IKJob::IKTransformRef>* JDGAKOINMEA; // 0x100
		::System::Single APAKCBFMCAB; // 0x108
		::UnityEngine::Vector3 MCLLALGABAB; // 0x10C
		::UnityEngine::Quaternion OLMCIPPKBFP(::System::Int32 a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FIDNALJJLMJ_OLMCIPPKBFP_OFFSET))(this, a1);
		}

		::System::Void EPBMHKEOKMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIDNALJJLMJ_EPBMHKEOKMC_OFFSET))(this);
		}

		::System::Single EBMEABMNFHC(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FIDNALJJLMJ_EBMEABMNFHC_OFFSET))(this, a1);
		}

		static ::UnityEngine::Quaternion BPBJABCGELJ(::RootMotion::IKJob::IKTransformRef a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single a5)
		{
			return ((::UnityEngine::Quaternion(*)(::RootMotion::IKJob::IKTransformRef, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FIDNALJJLMJ_BPBJABCGELJ_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIDNALJJLMJ_LDAMHBBILAD_OFFSET))(this);
		}

	};
