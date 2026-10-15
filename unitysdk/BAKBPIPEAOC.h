#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Transform; }

#define BAKBPIPEAOC_CDKBKBNJMEH_OFFSET UNITYSDK_OFFSET(0x15E64340)
#define BAKBPIPEAOC_CTOR_OFFSET UNITYSDK_OFFSET(0x15E64300)

inline static constexpr unsigned int BAKBPIPEAOC_TypeDefinitionIndex = 68899;

	class BAKBPIPEAOC : public ::System::Object
	{
	public:
		::UnityEngine::Transform* GKNBCPMJHMN; // 0x10
		::UnityEngine::Vector3 EDGNGCFCNID; // 0x18
		::UnityEngine::Vector3 EBLJHCBNCJG; // 0x24
		::System::Void _ctor(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BAKBPIPEAOC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean CDKBKBNJMEH(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BAKBPIPEAOC_CDKBKBNJMEH_OFFSET))(this, a1);
		}

	};
