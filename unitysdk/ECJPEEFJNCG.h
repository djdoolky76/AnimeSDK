#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJOFNOCMMKL.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"

#define ECJPEEFJNCG_CTOR_OFFSET UNITYSDK_OFFSET(0x12D12470)
#define ECJPEEFJNCG_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x12D121B0)
#define ECJPEEFJNCG_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0x12D12300)

inline static constexpr unsigned int ECJPEEFJNCG_TypeDefinitionIndex = 77104;

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
