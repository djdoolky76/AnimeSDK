#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class Transform; }

#define JDNEAIDOOAN_DGHBNJPKMBI_CTOR_OFFSET UNITYSDK_OFFSET(0x10480)

	struct alignas(8) JDNEAIDOOAN_DGHBNJPKMBI
	{
		::UnityEngine::Transform* JPDBDLEEHGK; // 0x10
		::UnityEngine::Transform* OGPNODHENKN; // 0x18
		::System::Void _ctor(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + JDNEAIDOOAN_DGHBNJPKMBI_CTOR_OFFSET))(this, a1, a2);
		}

	};
