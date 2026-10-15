#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJOFNOCMMKL.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"

#define ECJPEEFJNCG_CTOR_OFFSET UNITYSDK_OFFSET(0x12D0DA50)
#define ECJPEEFJNCG_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x12D0D790)
#define ECJPEEFJNCG_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0x12D0D8E0)

inline static constexpr unsigned int ECJPEEFJNCG_TypeDefinitionIndex = 77103;

	class ECJPEEFJNCG : public ::GJOFNOCMMKL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJPEEFJNCG_CTOR_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJPEEFJNCG_KIGBILLGNOH_OFFSET))(this);
		}

		::RPG::GameCore::FiveDimEvilSmileState LJOLGCNKIEH(::System::Single a1)
		{
			return ((::RPG::GameCore::FiveDimEvilSmileState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ECJPEEFJNCG_LJOLGCNKIEH_OFFSET))(this, a1);
		}

	};
