#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/COOGNFOEJOD.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/UnityEngine/Vector3.h"
class JAODHHPIKGJ;

#define CMCHFEOFHBC_BFPJNABOKMB_OFFSET UNITYSDK_OFFSET(0xDA26800)
#define CMCHFEOFHBC_BPOLDDMJGCO_OFFSET UNITYSDK_OFFSET(0xDA25C80)
#define CMCHFEOFHBC_CTOR_OFFSET UNITYSDK_OFFSET(0xDA26F00)
#define CMCHFEOFHBC_EPCPKKCMPEB_OFFSET UNITYSDK_OFFSET(0xDA26900)
#define CMCHFEOFHBC_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0xDA26EF0)
#define CMCHFEOFHBC_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0xDA257F0)
#define CMCHFEOFHBC_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0xDA25C20)
#define CMCHFEOFHBC_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0xDA25970)
#define CMCHFEOFHBC_OIHADJDBPMH_OFFSET UNITYSDK_OFFSET(0xDA25F00)
#define CMCHFEOFHBC_POKJEABGGBM_OFFSET UNITYSDK_OFFSET(0xDA263C0)

	class CMCHFEOFHBC : public ::COOGNFOEJOD
	{
	public:
		::UnityEngine::Vector3 FHLAPNFLBIN; // 0xC8
		::UnityEngine::Vector3 CFJHLILPEHI; // 0xD4
		::System::Single PGMIOKKLHIE; // 0xE0
		::System::Boolean APNPKNBACIM; // 0xE4
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 BCMDOLAFMHI; // 0xE8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCHFEOFHBC_CTOR_OFFSET))(this);
		}

		::System::Void FFKBFPKEPEN(::JAODHHPIKGJ* a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CMCHFEOFHBC_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void NMPLHCJKEOI(::JAODHHPIKGJ* a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CMCHFEOFHBC_NMPLHCJKEOI_OFFSET))(this, a1, a2);
		}

		::System::Void ICNEKGBHIHP(::JAODHHPIKGJ* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single))((::PBYTE)hIl2Cpp + CMCHFEOFHBC_ICNEKGBHIHP_OFFSET))(this, a1, a2);
		}

		::System::Void BPOLDDMJGCO(::JAODHHPIKGJ* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single))((::PBYTE)hIl2Cpp + CMCHFEOFHBC_BPOLDDMJGCO_OFFSET))(this, a1, a2);
		}

		::System::Void OIHADJDBPMH(::JAODHHPIKGJ* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single))((::PBYTE)hIl2Cpp + CMCHFEOFHBC_OIHADJDBPMH_OFFSET))(this, a1, a2);
		}

		::System::Void BFPJNABOKMB(::JAODHHPIKGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*))((::PBYTE)hIl2Cpp + CMCHFEOFHBC_BFPJNABOKMB_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 EPCPKKCMPEB(::JAODHHPIKGJ* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::JAODHHPIKGJ*))((::PBYTE)hIl2Cpp + CMCHFEOFHBC_EPCPKKCMPEB_OFFSET))(this, a1);
		}

		::System::Void POKJEABGGBM(::JAODHHPIKGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*))((::PBYTE)hIl2Cpp + CMCHFEOFHBC_POKJEABGGBM_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCHFEOFHBC_EPPAFNJFCMH_OFFSET))(this);
		}

	};
