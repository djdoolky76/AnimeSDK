#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCODNLKAGHK.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/HGBCMFANCOE.h"
class HFCPGANBGMI;

#define LMNGGKOMKIO_CTOR_OFFSET UNITYSDK_OFFSET(0xB7D1FC0)
#define LMNGGKOMKIO_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0xB7D1FB0)
#define LMNGGKOMKIO_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0xB7D1B60)
#define LMNGGKOMKIO_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0xB7D1E00)
#define LMNGGKOMKIO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB7D1AC0)
#define LMNGGKOMKIO_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xB7D1EC0)

inline static constexpr unsigned int LMNGGKOMKIO_TypeDefinitionIndex = 76997;

	class LMNGGKOMKIO : public ::HCODNLKAGHK
	{
	public:
		::System::Single NKECOHCCFHP; // 0xD8
		::System::Single LHIEMNLCKIF; // 0xDC
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMNGGKOMKIO_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::HFCPGANBGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCPGANBGMI*))((::PBYTE)hIl2Cpp + LMNGGKOMKIO_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void FFKBFPKEPEN(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + LMNGGKOMKIO_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void ICNEKGBHIHP(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + LMNGGKOMKIO_ICNEKGBHIHP_OFFSET))(this, a1, a2);
		}

		::System::Void PAGKOAEOLKA(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + LMNGGKOMKIO_PAGKOAEOLKA_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + LMNGGKOMKIO_EPPAFNJFCMH_OFFSET))(this);
		}

	};
