#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftBanCellAxesDirectionType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

#define HBGALLIPGDA_ELEDFHBCLDO_OFFSET UNITYSDK_OFFSET(0x1C553090)

	class HBGALLIPGDA : public ::System::Object
	{
	public:
		static ::System::Boolean ELEDFHBCLDO(::RPG::Client::MechCraft::MechCraftBanCellAxesDirectionType a1, ::UnityEngine::Vector2Int a2, ::UnityEngine::Vector2Int a3, ::UnityEngine::Vector2Int a4)
		{
			return ((::System::Boolean(*)(::RPG::Client::MechCraft::MechCraftBanCellAxesDirectionType, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + HBGALLIPGDA_ELEDFHBCLDO_OFFSET))(a1, a2, a3, a4);
		}

	};
