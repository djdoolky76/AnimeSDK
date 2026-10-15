#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABDOMMLHNBC.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define KHLIMENHPHF_BLPLAFPIJPC_OFFSET UNITYSDK_OFFSET(0xB40C150)
#define KHLIMENHPHF_CTOR_OFFSET UNITYSDK_OFFSET(0xB40BEC0)
#define KHLIMENHPHF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB40BF70)
#define KHLIMENHPHF_HHMFILFAMNA_OFFSET UNITYSDK_OFFSET(0xB40C0B0)
#define KHLIMENHPHF_IBIMCLMLHFA_OFFSET UNITYSDK_OFFSET(0xB40BFE0)
#define KHLIMENHPHF_PAFCMAMJENB_OFFSET UNITYSDK_OFFSET(0xB40C030)

inline static constexpr unsigned int KHLIMENHPHF_TypeDefinitionIndex = 74216;

	class KHLIMENHPHF : public ::ABDOMMLHNBC
	{
	public:
		::UnityEngine::Transform* PDJGEDNLBKJ; // 0x10
		::System::Void _ctor(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + KHLIMENHPHF_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLIMENHPHF_DISPOSE_OFFSET))(this);
		}

		::UnityEngine::Transform* IBIMCLMLHFA(::System::String* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KHLIMENHPHF_IBIMCLMLHFA_OFFSET))(this, a1);
		}

		::System::Void PAFCMAMJENB(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KHLIMENHPHF_PAFCMAMJENB_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 HHMFILFAMNA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLIMENHPHF_HHMFILFAMNA_OFFSET))(this);
		}

		::UnityEngine::Transform* BLPLAFPIJPC()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLIMENHPHF_BLPLAFPIJPC_OFFSET))(this);
		}

	};
