#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJOFNOCMMKL.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"

#define ENLFAHBJNJP_CTOR_OFFSET UNITYSDK_OFFSET(0x155B20B0)
#define ENLFAHBJNJP_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x155B1EC0)
#define ENLFAHBJNJP_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0x155B1FD0)

	class ENLFAHBJNJP : public ::GJOFNOCMMKL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENLFAHBJNJP_CTOR_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENLFAHBJNJP_KIGBILLGNOH_OFFSET))(this);
		}

		::RPG::GameCore::FiveDimEvilSmileState LJOLGCNKIEH(::System::Single a1)
		{
			return ((::RPG::GameCore::FiveDimEvilSmileState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENLFAHBJNJP_LJOLGCNKIEH_OFFSET))(this, a1);
		}

	};
