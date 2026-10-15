#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJOFNOCMMKL.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"

#define MHLNIPEJGCJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB940020)
#define MHLNIPEJGCJ_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xB93FE30)
#define MHLNIPEJGCJ_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xB93FE80)

inline static constexpr unsigned int MHLNIPEJGCJ_TypeDefinitionIndex = 77095;

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
