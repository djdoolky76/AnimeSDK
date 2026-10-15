#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BAT/BATControllerBase.h"
#include "unitysdk/RPG/Client/BAT/BATControllerBase_DrawMode.h"
#include "unitysdk/RPG/Client/TAUtils/SimpleTransform.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

#define RPG_CLIENT_BAT_BATCONTROLLER_GRID_CTOR_OFFSET UNITYSDK_OFFSET(0xC7D5050)
#define RPG_CLIENT_BAT_BATCONTROLLER_GRID_GET_MODE_OFFSET UNITYSDK_OFFSET(0xC7D4610)
#define RPG_CLIENT_BAT_BATCONTROLLER_GRID_GET__GRIDCOUNT_OFFSET UNITYSDK_OFFSET(0xC7D4690)
#define RPG_CLIENT_BAT_BATCONTROLLER_GRID_GPLLONMEDAC_OFFSET UNITYSDK_OFFSET(0xC7D5000)
#define RPG_CLIENT_BAT_BATCONTROLLER_GRID_IKOHLHDGFKH_OFFSET UNITYSDK_OFFSET(0xC7D48A0)
#define RPG_CLIENT_BAT_BATCONTROLLER_GRID_KEPMMNEBKCD_OFFSET UNITYSDK_OFFSET(0xC7D46E0)

namespace RPG::Client::BAT
{
	class BATController_Grid : public ::RPG::Client::BAT::BATControllerBase
	{
	public:
		::UnityEngine::Vector2Int GridSize; // 0x70
		::RPG::Client::TAUtils::SimpleTransform InstanceTransform; // 0x78
		::System::Byte _padding0[0x4];
		::Il2CppArray<::Il2CppArray<::System::Int32>*>* _GridIndices; // 0xA0
		::System::Int32 _InitedGridCount; // 0xA8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLER_GRID_CTOR_OFFSET))(this);
		}

		::RPG::Client::BAT::BATControllerBase_DrawMode get_Mode()
		{
			return ((::RPG::Client::BAT::BATControllerBase_DrawMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLER_GRID_GET_MODE_OFFSET))(this);
		}

		::System::Void KEPMMNEBKCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLER_GRID_KEPMMNEBKCD_OFFSET))(this);
		}

		::System::Void IKOHLHDGFKH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLER_GRID_IKOHLHDGFKH_OFFSET))(this);
		}

		::System::Void GPLLONMEDAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLER_GRID_GPLLONMEDAC_OFFSET))(this);
		}

		::System::Int32 get__GridCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLER_GRID_GET__GRIDCOUNT_OFFSET))(this);
		}

	};
}
