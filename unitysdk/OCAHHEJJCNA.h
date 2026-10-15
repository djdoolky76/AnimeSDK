#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FIJALLBOCAM.h"
namespace RootMotion::IKJob { class IKThreadProxyContext; }
namespace UnityEngine { class Transform; }

#define OCAHHEJJCNA_CLEAR_OFFSET UNITYSDK_OFFSET(0xBD54170)
#define OCAHHEJJCNA_CTOR_OFFSET UNITYSDK_OFFSET(0xBD55460)
#define OCAHHEJJCNA_DDJDKGIMPEN_OFFSET UNITYSDK_OFFSET(0xBD541C0)
#define OCAHHEJJCNA_EOCEFJFIJLK_OFFSET UNITYSDK_OFFSET(0xBD552F0)
#define OCAHHEJJCNA_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xBD55440)
#define OCAHHEJJCNA_IBEFNKEEGAD_OFFSET UNITYSDK_OFFSET(0xBD54F90)
#define OCAHHEJJCNA_INEJMACHPIJ_OFFSET UNITYSDK_OFFSET(0xBD54AC0)
#define OCAHHEJJCNA_LIPIEKOLCLL_OFFSET UNITYSDK_OFFSET(0xBD54A30)
#define OCAHHEJJCNA_NCEHOCEBIAF_OFFSET UNITYSDK_OFFSET(0xBD54670)
#define OCAHHEJJCNA_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0xBD53C50)
#define OCAHHEJJCNA_PODDBLGCJMF_OFFSET UNITYSDK_OFFSET(0xBD55140)
#define OCAHHEJJCNA_SET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xBD55450)

inline static constexpr unsigned int OCAHHEJJCNA_TypeDefinitionIndex = 68471;

	class OCAHHEJJCNA : public ::System::Object
	{
	public:
		::UnityEngine::Transform* _Transform_k__BackingField; // 0x10
		::UnityEngine::Quaternion NOMDJIPMADH; // 0x18
		::UnityEngine::Vector3 PJPLAHAIOFD; // 0x28
		::UnityEngine::Vector3 MEADDCMAPEP; // 0x34
		::UnityEngine::Vector3 PMMJOIEGGON; // 0x40
		::UnityEngine::Vector3 GEKHELEAHLE; // 0x4C
		::UnityEngine::Vector3 ILINEBKECJF; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCAHHEJJCNA_CTOR_OFFSET))(this);
		}

		::System::Void OINBDMGFFJL(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + OCAHHEJJCNA_OINBDMGFFJL_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCAHHEJJCNA_CLEAR_OFFSET))(this);
		}

		::System::Void DDJDKGIMPEN(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + OCAHHEJJCNA_DDJDKGIMPEN_OFFSET))(this, a1);
		}

		::System::Void NCEHOCEBIAF(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + OCAHHEJJCNA_NCEHOCEBIAF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LIPIEKOLCLL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCAHHEJJCNA_LIPIEKOLCLL_OFFSET))(this);
		}

		::System::Void INEJMACHPIJ(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OCAHHEJJCNA_INEJMACHPIJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EOCEFJFIJLK(::RootMotion::IKJob::IKThreadProxyContext* a1, ::FIJALLBOCAM a2)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKThreadProxyContext*, ::FIJALLBOCAM))((::PBYTE)hIl2Cpp + OCAHHEJJCNA_EOCEFJFIJLK_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Transform* get_Transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCAHHEJJCNA_GET_TRANSFORM_OFFSET))(this);
		}

		::System::Void set_Transform(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + OCAHHEJJCNA_SET_TRANSFORM_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 PODDBLGCJMF()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + OCAHHEJJCNA_PODDBLGCJMF_OFFSET))(this);
		}

		::UnityEngine::Vector3 IBEFNKEEGAD()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + OCAHHEJJCNA_IBEFNKEEGAD_OFFSET))(this);
		}

	};
