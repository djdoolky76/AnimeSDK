#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMBPAEBCDLE.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define GKFOMBHNCHG_CTOR_OFFSET UNITYSDK_OFFSET(0x169D3840)
#define GKFOMBHNCHG_LBKFIIADFFP_OFFSET UNITYSDK_OFFSET(0x169D37F0)
#define GKFOMBHNCHG_OKBNHHGOCBO_OFFSET UNITYSDK_OFFSET(0x169D37A0)

inline static constexpr unsigned int GKFOMBHNCHG_TypeDefinitionIndex = 79291;

	class GKFOMBHNCHG : public ::FMBPAEBCDLE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFOMBHNCHG_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 OKBNHHGOCBO()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFOMBHNCHG_OKBNHHGOCBO_OFFSET))(this);
		}

		::UnityEngine::Vector2 LBKFIIADFFP()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFOMBHNCHG_LBKFIIADFFP_OFFSET))(this);
		}

	};
