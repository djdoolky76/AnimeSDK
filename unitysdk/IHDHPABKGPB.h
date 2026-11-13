#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGEGFCADEEC.h"
namespace UnityEngine { class Transform; }

#define IHDHPABKGPB_CTOR_OFFSET UNITYSDK_OFFSET(0x19F6BC30)
#define IHDHPABKGPB_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x19F6BCA0)

inline static constexpr unsigned int IHDHPABKGPB_TypeDefinitionIndex = 71757;

	class IHDHPABKGPB : public ::HGEGFCADEEC
	{
	public:
		::UnityEngine::Transform* EEHPALPMDPG; // 0x28
		::System::Void _ctor(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + IHDHPABKGPB_CTOR_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDHPABKGPB_JLANKNHFKCN_OFFSET))(this);
		}

	};
