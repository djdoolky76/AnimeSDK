#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define HGIHIELHLGF_CCTOR_OFFSET UNITYSDK_OFFSET(0x15CA05E0)
#define HGIHIELHLGF_EONFJDPMNOH_OFFSET UNITYSDK_OFFSET(0x2E7E8A0)
#define HGIHIELHLGF_JNDOGMFFOIM_OFFSET UNITYSDK_OFFSET(0x2E7E830)
#define HGIHIELHLGF_MKJFHFEMJGC_OFFSET UNITYSDK_OFFSET(0x2E7E870)

	struct alignas(4) HGIHIELHLGF
	{
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x10
		::UnityEngine::Quaternion NMELCPIOKNO; // 0x1C
		::UnityEngine::Matrix4x4 FIOBIJOJEPM; // 0x2C
		::System::Boolean KFKBPJDGJDK; // 0x6C
		::System::Boolean IJFJJEJBGAB; // 0x6D
		static ::HGIHIELHLGF* StaticGet_EKEMOCGAEEO()
		{
			return (::HGIHIELHLGF*)UnitySDK::FromName("", "HGIHIELHLGF")->GetStaticField(0x4E80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGIHIELHLGF_CCTOR_OFFSET))();
		}

		/*
		::HGIHIELHLGF JNDOGMFFOIM(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::HGIHIELHLGF(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + HGIHIELHLGF_JNDOGMFFOIM_OFFSET))(this, a1, a2);
		}
		*/

		::UnityEngine::Vector3 MKJFHFEMJGC(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HGIHIELHLGF_MKJFHFEMJGC_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 EONFJDPMNOH(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HGIHIELHLGF_EONFJDPMNOH_OFFSET))(this, a1);
		}

	};
