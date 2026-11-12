#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ComicDessertDropZoneKind.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDRAGDROPSLOTZONE_CTOR_OFFSET UNITYSDK_OFFSET(0xDE84190)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDRAGDROPSLOTZONE_GET_KIND_OFFSET UNITYSDK_OFFSET(0xDE84170)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDRAGDROPSLOTZONE_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0xDE84180)

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertDragDropSlotZone_TypeDefinitionIndex = 79763;

	class ComicDessertDragDropSlotZone : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::LittleGame::ComicDessert::ComicDessertDropZoneKind _Kind; // 0x18
		::System::Int32 _SlotIndex; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDRAGDROPSLOTZONE_CTOR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::ComicDessert::ComicDessertDropZoneKind get_Kind()
		{
			return ((::RPG::Client::LittleGame::ComicDessert::ComicDessertDropZoneKind(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDRAGDROPSLOTZONE_GET_KIND_OFFSET))(this);
		}

		::System::Int32 get_SlotIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDRAGDROPSLOTZONE_GET_SLOTINDEX_OFFSET))(this);
		}

	};
}
