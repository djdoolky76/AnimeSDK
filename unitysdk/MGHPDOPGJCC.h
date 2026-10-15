#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNDIHLKKEDI.h"
namespace RPG::GameCore { class FiveDimMiniGameCollectCoinWave; }

#define MGHPDOPGJCC_CTOR_OFFSET UNITYSDK_OFFSET(0xB91A280)
#define MGHPDOPGJCC_EKAJCCLOMJB_OFFSET UNITYSDK_OFFSET(0xB91A080)
#define MGHPDOPGJCC_LIICLMEACCN_OFFSET UNITYSDK_OFFSET(0xB919C40)
#define MGHPDOPGJCC_MCCBIPLHJOD_OFFSET UNITYSDK_OFFSET(0xB919D40)
#define MGHPDOPGJCC_OBIMMEKPHHH_OFFSET UNITYSDK_OFFSET(0xB919F40)

inline static constexpr unsigned int MGHPDOPGJCC_TypeDefinitionIndex = 76936;

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
