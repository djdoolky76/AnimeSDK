#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMBPAEBCDLE.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define GKFOMBHNCHG_CTOR_OFFSET UNITYSDK_OFFSET(0x1A8D1F50)
#define GKFOMBHNCHG_LBKFIIADFFP_OFFSET UNITYSDK_OFFSET(0x1A8D1F00)
#define GKFOMBHNCHG_OKBNHHGOCBO_OFFSET UNITYSDK_OFFSET(0x1A8D1EB0)

inline static constexpr unsigned int GKFOMBHNCHG_TypeDefinitionIndex = 79290;

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
