#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJOFNOCMMKL.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"

#define DHKNPAAOEDB_CTOR_OFFSET UNITYSDK_OFFSET(0xEBE7790)
#define DHKNPAAOEDB_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xEBE74B0)
#define DHKNPAAOEDB_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xEBE7600)

inline static constexpr unsigned int DHKNPAAOEDB_TypeDefinitionIndex = 77100;

	class DHKNPAAOEDB : public ::GJOFNOCMMKL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHKNPAAOEDB_CTOR_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHKNPAAOEDB_KIGBILLGNOH_OFFSET))(this);
		}

		::RPG::GameCore::FiveDimEvilSmileState LJOLGCNKIEH(::System::Single a1)
		{
			return ((::RPG::GameCore::FiveDimEvilSmileState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DHKNPAAOEDB_LJOLGCNKIEH_OFFSET))(this, a1);
		}

	};
