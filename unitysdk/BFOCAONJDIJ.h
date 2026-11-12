#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJOFNOCMMKL.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"

#define BFOCAONJDIJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBAFC690)
#define BFOCAONJDIJ_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xBAFC3E0)
#define BFOCAONJDIJ_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xBAFC4F0)

inline static constexpr unsigned int BFOCAONJDIJ_TypeDefinitionIndex = 79432;

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
