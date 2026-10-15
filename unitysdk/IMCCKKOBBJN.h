#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJOFNOCMMKL.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"

#define IMCCKKOBBJN_CTOR_OFFSET UNITYSDK_OFFSET(0x164CF280)
#define IMCCKKOBBJN_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x164CEFD0)
#define IMCCKKOBBJN_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0x164CF110)

	class IMCCKKOBBJN : public ::GJOFNOCMMKL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMCCKKOBBJN_CTOR_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMCCKKOBBJN_KIGBILLGNOH_OFFSET))(this);
		}

		::RPG::GameCore::FiveDimEvilSmileState LJOLGCNKIEH(::System::Single a1)
		{
			return ((::RPG::GameCore::FiveDimEvilSmileState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IMCCKKOBBJN_LJOLGCNKIEH_OFFSET))(this, a1);
		}

	};
