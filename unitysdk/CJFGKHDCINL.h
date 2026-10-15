#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CJFGKHDCINL_CCIPONNFEOC_OFFSET UNITYSDK_OFFSET(0xE9800)
#define CJFGKHDCINL_ENBNCLHJEAA_OFFSET UNITYSDK_OFFSET(0x94D0)
#define CJFGKHDCINL_JLBEEHEEJMM_OFFSET UNITYSDK_OFFSET(0x94F0)
#define CJFGKHDCINL_PHCDFBIJIPE_OFFSET UNITYSDK_OFFSET(0xE9790)

inline static constexpr unsigned int CJFGKHDCINL_TypeDefinitionIndex = 78825;

	struct alignas(8) CJFGKHDCINL
	{
		::UnityEngine::Transform* CNOIFDLDHNL; // 0x10
		::UnityEngine::Transform* HKNAKOPABFF; // 0x18
		::UnityEngine::GameObject* EKABGKINNML; // 0x20
		::UnityEngine::GameObject* DLNPIFIBNGG; // 0x28
		::System::Void PHCDFBIJIPE(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CJFGKHDCINL_PHCDFBIJIPE_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* JLBEEHEEJMM()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJFGKHDCINL_JLBEEHEEJMM_OFFSET))(this);
		}

		::System::Void CCIPONNFEOC(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CJFGKHDCINL_CCIPONNFEOC_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* ENBNCLHJEAA()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJFGKHDCINL_ENBNCLHJEAA_OFFSET))(this);
		}

	};
