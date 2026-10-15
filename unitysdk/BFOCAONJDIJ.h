#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJOFNOCMMKL.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"

#define BFOCAONJDIJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB174B60)
#define BFOCAONJDIJ_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xB1748B0)
#define BFOCAONJDIJ_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xB1749C0)

inline static constexpr unsigned int BFOCAONJDIJ_TypeDefinitionIndex = 77098;

	class BFOCAONJDIJ : public ::GJOFNOCMMKL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFOCAONJDIJ_CTOR_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFOCAONJDIJ_KIGBILLGNOH_OFFSET))(this);
		}

		::RPG::GameCore::FiveDimEvilSmileState LJOLGCNKIEH(::System::Single a1)
		{
			return ((::RPG::GameCore::FiveDimEvilSmileState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BFOCAONJDIJ_LJOLGCNKIEH_OFFSET))(this, a1);
		}

	};
