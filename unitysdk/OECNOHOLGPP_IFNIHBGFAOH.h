#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

#define OECNOHOLGPP_IFNIHBGFAOH_FOEBLLFDCIH_OFFSET UNITYSDK_OFFSET(0x3C28BF0)
#define OECNOHOLGPP_IFNIHBGFAOH_GET_CELL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define OECNOHOLGPP_IFNIHBGFAOH_GET_ISOVERLAPFREE_OFFSET UNITYSDK_OFFSET(0x211E0)
#define OECNOHOLGPP_IFNIHBGFAOH_SET_CELL_OFFSET UNITYSDK_OFFSET(0x94B0)
#define OECNOHOLGPP_IFNIHBGFAOH_SET_ISOVERLAPFREE_OFFSET UNITYSDK_OFFSET(0x3C28BE0)

	struct alignas(4) OECNOHOLGPP_IFNIHBGFAOH
	{
		::UnityEngine::Vector2Int _Cell_k__BackingField; // 0x10
		::System::Boolean _IsOverlapFree_k__BackingField; // 0x18
		::UnityEngine::Vector2Int get_Cell()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + OECNOHOLGPP_IFNIHBGFAOH_GET_CELL_OFFSET))(this);
		}

		::System::Void set_Cell(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + OECNOHOLGPP_IFNIHBGFAOH_SET_CELL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsOverlapFree()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OECNOHOLGPP_IFNIHBGFAOH_GET_ISOVERLAPFREE_OFFSET))(this);
		}

		::System::Void set_IsOverlapFree(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OECNOHOLGPP_IFNIHBGFAOH_SET_ISOVERLAPFREE_OFFSET))(this, a1);
		}

		::System::Void FOEBLLFDCIH(::UnityEngine::Vector2Int a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::System::Boolean))((::PBYTE)hIl2Cpp + OECNOHOLGPP_IFNIHBGFAOH_FOEBLLFDCIH_OFFSET))(this, a1, a2);
		}

	};
