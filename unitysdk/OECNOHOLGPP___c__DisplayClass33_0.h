#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OECNOHOLGPP_IFNIHBGFAOH.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

#define OECNOHOLGPP___C__DISPLAYCLASS33_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5751D0)
#define OECNOHOLGPP___C__DISPLAYCLASS33_0__PLACE_B__0_OFFSET UNITYSDK_OFFSET(0x1C5781C0)

inline static constexpr unsigned int OECNOHOLGPP___c__DisplayClass33_0_TypeDefinitionIndex = 41795;

	class OECNOHOLGPP___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::System::Boolean isOverlapFree; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OECNOHOLGPP___C__DISPLAYCLASS33_0_CTOR_OFFSET))(this);
		}

		::OECNOHOLGPP_IFNIHBGFAOH _Place_b__0(::UnityEngine::Vector2Int a1)
		{
			return ((::OECNOHOLGPP_IFNIHBGFAOH(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + OECNOHOLGPP___C__DISPLAYCLASS33_0__PLACE_B__0_OFFSET))(this, a1);
		}

	};
