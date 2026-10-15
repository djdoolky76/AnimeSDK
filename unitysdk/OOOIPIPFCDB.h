#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PFALJMOJFCA.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/HGBCMFANCOE.h"
class HFCPGANBGMI;
namespace RPG::GameCore { class FloatCurve; }

#define OOOIPIPFCDB_CTOR_OFFSET UNITYSDK_OFFSET(0xBF94340)
#define OOOIPIPFCDB_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0xBF94320)
#define OOOIPIPFCDB_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0xBF93A50)
#define OOOIPIPFCDB_GAOIPBLLGAP_OFFSET UNITYSDK_OFFSET(0xBF941E0)
#define OOOIPIPFCDB_GBCHFFLMIIC_OFFSET UNITYSDK_OFFSET(0xBF94150)
#define OOOIPIPFCDB_GGCCNDAIMDF_OFFSET UNITYSDK_OFFSET(0xBF939D0)
#define OOOIPIPFCDB_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0xBF938A0)
#define OOOIPIPFCDB_KFIBFFMNKAK_OFFSET UNITYSDK_OFFSET(0xBF94330)
#define OOOIPIPFCDB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBF937B0)

	class OOOIPIPFCDB : public ::PFALJMOJFCA
	{
	public:
		::RPG::GameCore::FloatCurve* AFFLGIHIBND; // 0x110
		::System::Single BOHNIEIMKCA; // 0x118
		::System::Single IKILDBAAIGG; // 0x11C
		::UnityEngine::Vector3 FMDEINDLDHP; // 0x120
		::System::Boolean HDLNMHCIAJK; // 0x12C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOOIPIPFCDB_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::HFCPGANBGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCPGANBGMI*))((::PBYTE)hIl2Cpp + OOOIPIPFCDB_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void ICNEKGBHIHP(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + OOOIPIPFCDB_ICNEKGBHIHP_OFFSET))(this, a1, a2);
		}

		::System::Void FFKBFPKEPEN(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + OOOIPIPFCDB_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void GGCCNDAIMDF(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OOOIPIPFCDB_GGCCNDAIMDF_OFFSET))(this, a1);
		}

		::System::Void GBCHFFLMIIC(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OOOIPIPFCDB_GBCHFFLMIIC_OFFSET))(this, a1);
		}

		::System::Void GAOIPBLLGAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOOIPIPFCDB_GAOIPBLLGAP_OFFSET))(this);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + OOOIPIPFCDB_EPPAFNJFCMH_OFFSET))(this);
		}

		::System::Boolean KFIBFFMNKAK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OOOIPIPFCDB_KFIBFFMNKAK_OFFSET))(this);
		}

	};
