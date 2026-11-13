#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJOFNOCMMKL.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"

#define MEAGDBFKIPK_CTOR_OFFSET UNITYSDK_OFFSET(0x183F4230)
#define MEAGDBFKIPK_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x183F4060)
#define MEAGDBFKIPK_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0x183F4180)

inline static constexpr unsigned int MEAGDBFKIPK_TypeDefinitionIndex = 79435;

	class MEAGDBFKIPK : public ::GJOFNOCMMKL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEAGDBFKIPK_CTOR_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEAGDBFKIPK_KIGBILLGNOH_OFFSET))(this);
		}

		::RPG::GameCore::FiveDimEvilSmileState LJOLGCNKIEH(::System::Single a1)
		{
			return ((::RPG::GameCore::FiveDimEvilSmileState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MEAGDBFKIPK_LJOLGCNKIEH_OFFSET))(this, a1);
		}

	};
