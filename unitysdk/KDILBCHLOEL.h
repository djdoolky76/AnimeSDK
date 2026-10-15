#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MKCPMHJIJIO.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/HGBCMFANCOE.h"
class HFCPGANBGMI;
class HIOEAKHGILF;

#define KDILBCHLOEL_CTOR_OFFSET UNITYSDK_OFFSET(0xB363B10)
#define KDILBCHLOEL_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0xB363B00)
#define KDILBCHLOEL_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0xB363670)
#define KDILBCHLOEL_GGCCNDAIMDF_OFFSET UNITYSDK_OFFSET(0xB3638E0)
#define KDILBCHLOEL_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0xB363790)
#define KDILBCHLOEL_KFFPHMHLBAG_OFFSET UNITYSDK_OFFSET(0xB3639C0)
#define KDILBCHLOEL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB363570)
#define KDILBCHLOEL_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0xB363710)

inline static constexpr unsigned int KDILBCHLOEL_TypeDefinitionIndex = 77005;

	class KDILBCHLOEL : public ::MKCPMHJIJIO
	{
	public:
		::System::Single KFOPFPEDDEF; // 0x120
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDILBCHLOEL_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::HFCPGANBGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCPGANBGMI*))((::PBYTE)hIl2Cpp + KDILBCHLOEL_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void FFKBFPKEPEN(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + KDILBCHLOEL_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void NMPLHCJKEOI(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + KDILBCHLOEL_NMPLHCJKEOI_OFFSET))(this, a1, a2);
		}

		::System::Void ICNEKGBHIHP(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + KDILBCHLOEL_ICNEKGBHIHP_OFFSET))(this, a1, a2);
		}

		::System::Void KFFPHMHLBAG(::HGBCMFANCOE a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + KDILBCHLOEL_KFFPHMHLBAG_OFFSET))(this, a1, a2);
		}

		::System::Void GGCCNDAIMDF(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + KDILBCHLOEL_GGCCNDAIMDF_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + KDILBCHLOEL_EPPAFNJFCMH_OFFSET))(this);
		}

	};
