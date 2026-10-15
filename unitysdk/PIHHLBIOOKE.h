#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLKHCMABFLO;
class EANJILGOKBE;
class PIHHLBIOOKE;
namespace RPG::GameCore { class GameEntity; }

#define PIHHLBIOOKE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC25A0E0)
#define PIHHLBIOOKE_CTOR_OFFSET UNITYSDK_OFFSET(0xC25A150)
#define PIHHLBIOOKE_GCBPLGBAOCH_OFFSET UNITYSDK_OFFSET(0xC25A160)
#define PIHHLBIOOKE_HINPHILFFLB_OFFSET UNITYSDK_OFFSET(0xC25A1B0)

inline static constexpr unsigned int PIHHLBIOOKE_TypeDefinitionIndex = 72066;

	class PIHHLBIOOKE : public ::System::Object
	{
	public:
		::CLKHCMABFLO* MMCJKLFGIMB; // 0x10
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHHLBIOOKE_CTOR_OFFSET))(this);
		}

		static ::PIHHLBIOOKE* BPLPBPMEODA(::CLKHCMABFLO* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::PIHHLBIOOKE*(*)(::CLKHCMABFLO*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PIHHLBIOOKE_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void GCBPLGBAOCH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PIHHLBIOOKE_GCBPLGBAOCH_OFFSET))(this, a1);
		}

		::EANJILGOKBE* HINPHILFFLB()
		{
			return ((::EANJILGOKBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHHLBIOOKE_HINPHILFFLB_OFFSET))(this);
		}

	};
