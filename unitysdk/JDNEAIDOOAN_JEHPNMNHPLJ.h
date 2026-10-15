#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define JDNEAIDOOAN_JEHPNMNHPLJ_CMEOCLHCIAP_OFFSET UNITYSDK_OFFSET(0x16610A60)
#define JDNEAIDOOAN_JEHPNMNHPLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x2E853A0)
#define JDNEAIDOOAN_JEHPNMNHPLJ_GAPIFKNKMLI_OFFSET UNITYSDK_OFFSET(0x2E853D0)

inline static constexpr unsigned int JDNEAIDOOAN_JEHPNMNHPLJ_TypeDefinitionIndex = 48944;

	struct alignas(8) JDNEAIDOOAN_JEHPNMNHPLJ
	{
		::Il2CppArray<::UnityEngine::Vector2>* NDCKOALGHDL; // 0x10
		::System::Single OGCGJNFANAH; // 0x18
		::System::Single GAFLPFPIMBA; // 0x1C
		::UnityEngine::Vector2 IEFJBBELNOD; // 0x20
		::UnityEngine::Vector2 BJCDMCGHONM; // 0x28
		::System::Void _ctor(::Il2CppArray<::UnityEngine::Vector2>* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector2>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JDNEAIDOOAN_JEHPNMNHPLJ_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GAPIFKNKMLI(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + JDNEAIDOOAN_JEHPNMNHPLJ_GAPIFKNKMLI_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void CMEOCLHCIAP(::Il2CppArray<::UnityEngine::Vector2>* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + JDNEAIDOOAN_JEHPNMNHPLJ_CMEOCLHCIAP_OFFSET))(a1, a2, a3);
		}

	};
