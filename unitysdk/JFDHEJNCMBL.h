#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
namespace UnityEngine { class Collider; }

#define JFDHEJNCMBL_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DDFFBB0)
#define JFDHEJNCMBL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDFFC00)
#define JFDHEJNCMBL_GCBAEEAJNGH_OFFSET UNITYSDK_OFFSET(0x1DDFFB10)
#define JFDHEJNCMBL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1DDFFAC0)

inline static constexpr unsigned int JFDHEJNCMBL_TypeDefinitionIndex = 44232;

	class JFDHEJNCMBL : public ::System::Object
	{
	public:
		::UnityEngine::Collider* CEEGJCAJAHB; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDHEJNCMBL_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + JFDHEJNCMBL_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds GCBAEEAJNGH()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDHEJNCMBL_GCBAEEAJNGH_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDHEJNCMBL_CLEAR_OFFSET))(this);
		}

	};
