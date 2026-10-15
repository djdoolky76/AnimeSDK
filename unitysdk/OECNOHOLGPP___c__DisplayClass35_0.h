#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OECNOHOLGPP_IFNIHBGFAOH.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

#define OECNOHOLGPP___C__DISPLAYCLASS35_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C576280)
#define OECNOHOLGPP___C__DISPLAYCLASS35_0__MOVE_B__0_OFFSET UNITYSDK_OFFSET(0x1C5781E0)
#define OECNOHOLGPP___C__DISPLAYCLASS35_0__MOVE_B__1_OFFSET UNITYSDK_OFFSET(0x1C578200)

	class OECNOHOLGPP___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::System::Boolean isOverlapFree; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OECNOHOLGPP___C__DISPLAYCLASS35_0_CTOR_OFFSET))(this);
		}

		::OECNOHOLGPP_IFNIHBGFAOH _Move_b__0(::UnityEngine::Vector2Int a1)
		{
			return ((::OECNOHOLGPP_IFNIHBGFAOH(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + OECNOHOLGPP___C__DISPLAYCLASS35_0__MOVE_B__0_OFFSET))(this, a1);
		}

		::OECNOHOLGPP_IFNIHBGFAOH _Move_b__1(::UnityEngine::Vector2Int a1)
		{
			return ((::OECNOHOLGPP_IFNIHBGFAOH(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + OECNOHOLGPP___C__DISPLAYCLASS35_0__MOVE_B__1_OFFSET))(this, a1);
		}

	};
