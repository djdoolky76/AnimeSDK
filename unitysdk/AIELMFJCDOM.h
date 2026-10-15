#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EOGEMKKBMLP.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/HGBCMFANCOE.h"
class HFCPGANBGMI;

#define AIELMFJCDOM_CTOR_OFFSET UNITYSDK_OFFSET(0xEBA27D0)
#define AIELMFJCDOM_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0xEBA27C0)
#define AIELMFJCDOM_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0xEBA25B0)
#define AIELMFJCDOM_HFCEOPLGJGL_OFFSET UNITYSDK_OFFSET(0xEBA2770)
#define AIELMFJCDOM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xEBA24C0)
#define AIELMFJCDOM_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0xEBA2650)
#define AIELMFJCDOM_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xEBA26C0)

inline static constexpr unsigned int AIELMFJCDOM_TypeDefinitionIndex = 76974;

	class AIELMFJCDOM : public ::EOGEMKKBMLP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIELMFJCDOM_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::HFCPGANBGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCPGANBGMI*))((::PBYTE)hIl2Cpp + AIELMFJCDOM_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void FFKBFPKEPEN(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + AIELMFJCDOM_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void NMPLHCJKEOI(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + AIELMFJCDOM_NMPLHCJKEOI_OFFSET))(this, a1, a2);
		}

		::System::Void PAGKOAEOLKA(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + AIELMFJCDOM_PAGKOAEOLKA_OFFSET))(this, a1, a2);
		}

		::System::Single HFCEOPLGJGL(::HGBCMFANCOE a1)
		{
			return ((::System::Single(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + AIELMFJCDOM_HFCEOPLGJGL_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + AIELMFJCDOM_EPPAFNJFCMH_OFFSET))(this);
		}

	};
