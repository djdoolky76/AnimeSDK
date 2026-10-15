#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJOFNOCMMKL.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"

#define MHLNIPEJGCJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB946080)
#define MHLNIPEJGCJ_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xB945EA0)
#define MHLNIPEJGCJ_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xB945EF0)

inline static constexpr unsigned int MHLNIPEJGCJ_TypeDefinitionIndex = 77096;

	class MHLNIPEJGCJ : public ::GJOFNOCMMKL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLNIPEJGCJ_CTOR_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLNIPEJGCJ_KIGBILLGNOH_OFFSET))(this);
		}

		::RPG::GameCore::FiveDimEvilSmileState LJOLGCNKIEH(::System::Single a1)
		{
			return ((::RPG::GameCore::FiveDimEvilSmileState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MHLNIPEJGCJ_LJOLGCNKIEH_OFFSET))(this, a1);
		}

	};
