#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PFALJMOJFCA.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/HGBCMFANCOE.h"

#define EOGEMKKBMLP_CTOR_OFFSET UNITYSDK_OFFSET(0x155BF990)
#define EOGEMKKBMLP_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x155BEBA0)
#define EOGEMKKBMLP_GGCCNDAIMDF_OFFSET UNITYSDK_OFFSET(0x155BEE20)
#define EOGEMKKBMLP_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0x155BED90)
#define EOGEMKKBMLP_JCMIBKJNEHD_OFFSET UNITYSDK_OFFSET(0x155BEF50)
#define EOGEMKKBMLP_KFIBFFMNKAK_OFFSET UNITYSDK_OFFSET(0x155BF980)
#define EOGEMKKBMLP_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0x155BEC50)

inline static constexpr unsigned int EOGEMKKBMLP_TypeDefinitionIndex = 76979;

	class EOGEMKKBMLP : public ::PFALJMOJFCA
	{
	public:
		::System::Single BBFGIMIIBGH; // 0x110
		::System::Single KLJCDDBJHNE; // 0x114
		::System::Single PPMKMCPDLMH; // 0x118
		::System::Single PKLFJFDBFIB; // 0x11C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOGEMKKBMLP_CTOR_OFFSET))(this);
		}

		::System::Void FFKBFPKEPEN(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + EOGEMKKBMLP_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void NMPLHCJKEOI(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + EOGEMKKBMLP_NMPLHCJKEOI_OFFSET))(this, a1, a2);
		}

		::System::Void ICNEKGBHIHP(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + EOGEMKKBMLP_ICNEKGBHIHP_OFFSET))(this, a1, a2);
		}

		::System::Single JCMIBKJNEHD(::HGBCMFANCOE a1, ::System::Single a2, ::System::Boolean a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::PVOID, ::HGBCMFANCOE, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + EOGEMKKBMLP_JCMIBKJNEHD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GGCCNDAIMDF(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + EOGEMKKBMLP_GGCCNDAIMDF_OFFSET))(this, a1);
		}

		::System::Boolean KFIBFFMNKAK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EOGEMKKBMLP_KFIBFFMNKAK_OFFSET))(this);
		}

	};
