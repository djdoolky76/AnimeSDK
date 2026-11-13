#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ComicDessertDropZoneKind.h"

#define GJHDNDBFKCO_ELFJMEJJEJH_CKKLGBJNNBJ_OFFSET UNITYSDK_OFFSET(0x1A8A4660)
#define GJHDNDBFKCO_ELFJMEJJEJH_CTOR_OFFSET UNITYSDK_OFFSET(0x3E63F70)
#define GJHDNDBFKCO_ELFJMEJJEJH_GET_HASTARGET_OFFSET UNITYSDK_OFFSET(0x7CEE40)
#define GJHDNDBFKCO_ELFJMEJJEJH_GET_KIND_OFFSET UNITYSDK_OFFSET(0x7CEA10)
#define GJHDNDBFKCO_ELFJMEJJEJH_GET_SLOT_OFFSET UNITYSDK_OFFSET(0xC8F0)

inline static constexpr unsigned int GJHDNDBFKCO_ELFJMEJJEJH_TypeDefinitionIndex = 80002;

	struct alignas(4) GJHDNDBFKCO_ELFJMEJJEJH
	{
		::System::Boolean _HasTarget_k__BackingField; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::Client::LittleGame::ComicDessert::ComicDessertDropZoneKind _Kind_k__BackingField; // 0x14
		::System::Int32 _Slot_k__BackingField; // 0x18
		::System::Void _ctor(::System::Boolean a1, ::RPG::Client::LittleGame::ComicDessert::ComicDessertDropZoneKind a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::LittleGame::ComicDessert::ComicDessertDropZoneKind, ::System::Int32))((::PBYTE)hIl2Cpp + GJHDNDBFKCO_ELFJMEJJEJH_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_HasTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GJHDNDBFKCO_ELFJMEJJEJH_GET_HASTARGET_OFFSET))(this);
		}

		::RPG::Client::LittleGame::ComicDessert::ComicDessertDropZoneKind get_Kind()
		{
			return ((::RPG::Client::LittleGame::ComicDessert::ComicDessertDropZoneKind(*)(::PVOID))((::PBYTE)hIl2Cpp + GJHDNDBFKCO_ELFJMEJJEJH_GET_KIND_OFFSET))(this);
		}

		::System::Int32 get_Slot()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJHDNDBFKCO_ELFJMEJJEJH_GET_SLOT_OFFSET))(this);
		}

		/*
		static ::GJHDNDBFKCO_ELFJMEJJEJH CKKLGBJNNBJ()
		{
			return ((::GJHDNDBFKCO_ELFJMEJJEJH(*)())((::PBYTE)hIl2Cpp + GJHDNDBFKCO_ELFJMEJJEJH_CKKLGBJNNBJ_OFFSET))();
		}
		*/

	};
