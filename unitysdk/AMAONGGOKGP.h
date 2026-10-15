#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define AMAONGGOKGP_PHOOLFPABIL_OFFSET UNITYSDK_OFFSET(0x1C86FE10)

inline static constexpr unsigned int AMAONGGOKGP_TypeDefinitionIndex = 43591;

	class AMAONGGOKGP : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector2 PHOOLFPABIL(::UnityEngine::Rect a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Rect, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + AMAONGGOKGP_PHOOLFPABIL_OFFSET))(a1, a2);
		}

	};
