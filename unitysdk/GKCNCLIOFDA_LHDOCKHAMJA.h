#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GKCNCLIOFDA_JMPJNHALMMF.h"
namespace RPG::GameCore { class GameEntity; }

#define GKCNCLIOFDA_LHDOCKHAMJA_CDBEKELOIKI_OFFSET UNITYSDK_OFFSET(0x15A85970)
#define GKCNCLIOFDA_LHDOCKHAMJA_CTOR_OFFSET UNITYSDK_OFFSET(0x15A83DA0)

inline static constexpr unsigned int GKCNCLIOFDA_LHDOCKHAMJA_TypeDefinitionIndex = 53535;

	class GKCNCLIOFDA_LHDOCKHAMJA : public ::GKCNCLIOFDA_JMPJNHALMMF
	{
	public:
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x18
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_LHDOCKHAMJA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean CDBEKELOIKI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_LHDOCKHAMJA_CDBEKELOIKI_OFFSET))(this);
		}

	};
