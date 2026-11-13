#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNDIHLKKEDI.h"
namespace RPG::GameCore { class FiveDimMiniGameCollectCoinWave; }

#define MGHPDOPGJCC_CTOR_OFFSET UNITYSDK_OFFSET(0x1B340220)
#define MGHPDOPGJCC_EKAJCCLOMJB_OFFSET UNITYSDK_OFFSET(0x1B340020)
#define MGHPDOPGJCC_LIICLMEACCN_OFFSET UNITYSDK_OFFSET(0x1B33FBE0)
#define MGHPDOPGJCC_MCCBIPLHJOD_OFFSET UNITYSDK_OFFSET(0x1B33FCE0)
#define MGHPDOPGJCC_OBIMMEKPHHH_OFFSET UNITYSDK_OFFSET(0x1B33FEE0)

inline static constexpr unsigned int MGHPDOPGJCC_TypeDefinitionIndex = 79270;

	class MGHPDOPGJCC : public ::BNDIHLKKEDI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHPDOPGJCC_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FiveDimMiniGameCollectCoinWave* LIICLMEACCN()
		{
			return ((::RPG::GameCore::FiveDimMiniGameCollectCoinWave*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHPDOPGJCC_LIICLMEACCN_OFFSET))(this);
		}

		::System::Void MCCBIPLHJOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHPDOPGJCC_MCCBIPLHJOD_OFFSET))(this);
		}

		::System::Boolean OBIMMEKPHHH(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MGHPDOPGJCC_OBIMMEKPHHH_OFFSET))(this, a1, a2);
		}

		::System::Boolean EKAJCCLOMJB(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MGHPDOPGJCC_EKAJCCLOMJB_OFFSET))(this, a1, a2);
		}

	};
