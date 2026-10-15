#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class MapRotationEntityEffect; }
namespace System { class String; }

#define PEBBBNOOCFO_DNCHPFDFAHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x10400)

inline static constexpr unsigned int PEBBBNOOCFO_DNCHPFDFAHJ_TypeDefinitionIndex = 60602;

	struct alignas(8) PEBBBNOOCFO_DNCHPFDFAHJ
	{
		::RPG::GameCore::MapRotationEntityEffect* HPBAMMEFDMK; // 0x10
		::System::String* GFNAPNFFGPJ; // 0x18
		::System::Void _ctor(::RPG::GameCore::MapRotationEntityEffect* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MapRotationEntityEffect*, ::System::String*))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_DNCHPFDFAHJ_CTOR_OFFSET))(this, a1, a2);
		}

	};
