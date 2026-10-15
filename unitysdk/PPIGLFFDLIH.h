#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJOFNOCMMKL.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"

#define PPIGLFFDLIH_CTOR_OFFSET UNITYSDK_OFFSET(0xC389830)
#define PPIGLFFDLIH_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xC389590)
#define PPIGLFFDLIH_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xC389690)

	class PPIGLFFDLIH : public ::GJOFNOCMMKL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPIGLFFDLIH_CTOR_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPIGLFFDLIH_KIGBILLGNOH_OFFSET))(this);
		}

		::RPG::GameCore::FiveDimEvilSmileState LJOLGCNKIEH(::System::Single a1)
		{
			return ((::RPG::GameCore::FiveDimEvilSmileState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PPIGLFFDLIH_LJOLGCNKIEH_OFFSET))(this, a1);
		}

	};
