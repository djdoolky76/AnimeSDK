#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Transform; }

#define FIJALLBOCAM_DDJDKGIMPEN_OFFSET UNITYSDK_OFFSET(0x2E76750)
#define FIJALLBOCAM_IBEFNKEEGAD_OFFSET UNITYSDK_OFFSET(0x2E769E0)
#define FIJALLBOCAM_INEJMACHPIJ_OFFSET UNITYSDK_OFFSET(0x2E767A0)
#define FIJALLBOCAM_NCEHOCEBIAF_OFFSET UNITYSDK_OFFSET(0x2E76760)
#define FIJALLBOCAM_PODDBLGCJMF_OFFSET UNITYSDK_OFFSET(0x2E767E0)

	struct alignas(4) FIJALLBOCAM
	{
		::RootMotion::IKJob::IKTransformRef DICDJJOJKGF; // 0x10
		::UnityEngine::Vector3 NAKDFBKDLND; // 0x20
		::UnityEngine::Vector3 OEBJPLAGEAE; // 0x2C
		::UnityEngine::Vector3 ODKDKPHFLCD; // 0x38
		::UnityEngine::Vector3 OPBJPEHJFJF; // 0x44
		::UnityEngine::Vector3 ADBKJGIHKOA; // 0x50
		::UnityEngine::Quaternion IEGCOKBHDIB; // 0x5C
		::System::Void DDJDKGIMPEN(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FIJALLBOCAM_DDJDKGIMPEN_OFFSET))(this, a1);
		}

		::System::Void NCEHOCEBIAF(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FIJALLBOCAM_NCEHOCEBIAF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void INEJMACHPIJ(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FIJALLBOCAM_INEJMACHPIJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 PODDBLGCJMF()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJALLBOCAM_PODDBLGCJMF_OFFSET))(this);
		}

		::UnityEngine::Vector3 IBEFNKEEGAD()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJALLBOCAM_IBEFNKEEGAD_OFFSET))(this);
		}

	};
