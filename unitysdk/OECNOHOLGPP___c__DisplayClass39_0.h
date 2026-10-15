#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OECNOHOLGPP_IFNIHBGFAOH.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

#define OECNOHOLGPP___C__DISPLAYCLASS39_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C549D10)
#define OECNOHOLGPP___C__DISPLAYCLASS39_0__LIFTMANY_B__1_OFFSET UNITYSDK_OFFSET(0x1C549DE0)

inline static constexpr unsigned int OECNOHOLGPP___c__DisplayClass39_0_TypeDefinitionIndex = 41799;

	class OECNOHOLGPP___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::System::Boolean isOverlapFree; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OECNOHOLGPP___C__DISPLAYCLASS39_0_CTOR_OFFSET))(this);
		}

		::OECNOHOLGPP_IFNIHBGFAOH _LiftMany_b__1(::UnityEngine::Vector2Int a1)
		{
			return ((::OECNOHOLGPP_IFNIHBGFAOH(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + OECNOHOLGPP___C__DISPLAYCLASS39_0__LIFTMANY_B__1_OFFSET))(this, a1);
		}

	};
