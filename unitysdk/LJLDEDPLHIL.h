#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJFHKAJPFNE;
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class Stage; }

#define LJLDEDPLHIL_CTOR_OFFSET UNITYSDK_OFFSET(0xBFBB880)
#define LJLDEDPLHIL_FIPCGJMNPAJ_OFFSET UNITYSDK_OFFSET(0xBFBB920)
#define LJLDEDPLHIL_GET_MAPDEF_OFFSET UNITYSDK_OFFSET(0xBFBB8B0)
#define LJLDEDPLHIL_GET_OPENWORLD_OFFSET UNITYSDK_OFFSET(0xBFBB8A0)
#define LJLDEDPLHIL_GET_STAGE_OFFSET UNITYSDK_OFFSET(0xBFBB890)
#define LJLDEDPLHIL_KOIBLDKHDHA_OFFSET UNITYSDK_OFFSET(0xBFBB990)
#define LJLDEDPLHIL_PDNOIFHPGHJ_OFFSET UNITYSDK_OFFSET(0xBFBB8C0)

inline static constexpr unsigned int LJLDEDPLHIL_TypeDefinitionIndex = 71459;

	class LJLDEDPLHIL : public ::System::Object
	{
	public:
		::LJFHKAJPFNE* _OpenWorld_k__BackingField; // 0x10
		::RPG::Client::MapDef* _MapDef_k__BackingField; // 0x18
		::RPG::Client::Stage* _Stage_k__BackingField; // 0x20
		::System::Void _ctor(::RPG::Client::Stage* a1, ::LJFHKAJPFNE* a2, ::RPG::Client::MapDef* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Stage*, ::LJFHKAJPFNE*, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + LJLDEDPLHIL_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Stage* get_Stage()
		{
			return ((::RPG::Client::Stage*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJLDEDPLHIL_GET_STAGE_OFFSET))(this);
		}

		::LJFHKAJPFNE* get_OpenWorld()
		{
			return ((::LJFHKAJPFNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJLDEDPLHIL_GET_OPENWORLD_OFFSET))(this);
		}

		::RPG::Client::MapDef* get_MapDef()
		{
			return ((::RPG::Client::MapDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJLDEDPLHIL_GET_MAPDEF_OFFSET))(this);
		}

		::LJFHKAJPFNE* PDNOIFHPGHJ()
		{
			return ((::LJFHKAJPFNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJLDEDPLHIL_PDNOIFHPGHJ_OFFSET))(this);
		}

		::System::Boolean FIPCGJMNPAJ(::RPG::Client::MapDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + LJLDEDPLHIL_FIPCGJMNPAJ_OFFSET))(this, a1);
		}

		::System::Boolean KOIBLDKHDHA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJLDEDPLHIL_KOIBLDKHDHA_OFFSET))(this);
		}

	};
