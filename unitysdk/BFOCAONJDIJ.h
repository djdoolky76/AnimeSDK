#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJOFNOCMMKL.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"

#define BFOCAONJDIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x151B1D40)
#define BFOCAONJDIJ_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x151B1A90)
#define BFOCAONJDIJ_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0x151B1BA0)

inline static constexpr unsigned int BFOCAONJDIJ_TypeDefinitionIndex = 79431;

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
