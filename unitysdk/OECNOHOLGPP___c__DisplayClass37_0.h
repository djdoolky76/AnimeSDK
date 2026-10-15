#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OECNOHOLGPP_IFNIHBGFAOH.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

#define OECNOHOLGPP___C__DISPLAYCLASS37_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5767B0)
#define OECNOHOLGPP___C__DISPLAYCLASS37_0__ROTATECLOCKWISE_B__0_OFFSET UNITYSDK_OFFSET(0x1C578220)
#define OECNOHOLGPP___C__DISPLAYCLASS37_0__ROTATECLOCKWISE_B__1_OFFSET UNITYSDK_OFFSET(0x1C578240)

inline static constexpr unsigned int OECNOHOLGPP___c__DisplayClass37_0_TypeDefinitionIndex = 41797;

	class OECNOHOLGPP___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::System::Boolean isOverlapFree; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OECNOHOLGPP___C__DISPLAYCLASS37_0_CTOR_OFFSET))(this);
		}

		::OECNOHOLGPP_IFNIHBGFAOH _RotateClockwise_b__0(::UnityEngine::Vector2Int a1)
		{
			return ((::OECNOHOLGPP_IFNIHBGFAOH(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + OECNOHOLGPP___C__DISPLAYCLASS37_0__ROTATECLOCKWISE_B__0_OFFSET))(this, a1);
		}

		::OECNOHOLGPP_IFNIHBGFAOH _RotateClockwise_b__1(::UnityEngine::Vector2Int a1)
		{
			return ((::OECNOHOLGPP_IFNIHBGFAOH(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + OECNOHOLGPP___C__DISPLAYCLASS37_0__ROTATECLOCKWISE_B__1_OFFSET))(this, a1);
		}

	};
