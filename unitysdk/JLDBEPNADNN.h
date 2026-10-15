#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOAAFFGNCPK.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/HGBCMFANCOE.h"
class HFCPGANBGMI;
namespace RPG::GameCore { class FloatCurve; }

#define JLDBEPNADNN_CTOR_OFFSET UNITYSDK_OFFSET(0xB2353B0)
#define JLDBEPNADNN_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0xB2353A0)
#define JLDBEPNADNN_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0xB2340C0)
#define JLDBEPNADNN_IJCLCMAJBHJ_OFFSET UNITYSDK_OFFSET(0xB2346B0)
#define JLDBEPNADNN_JCDFALFLNJL_OFFSET UNITYSDK_OFFSET(0xB234620)
#define JLDBEPNADNN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB233FE0)
#define JLDBEPNADNN_MBGHIIAJMGD_OFFSET UNITYSDK_OFFSET(0xB234840)

inline static constexpr unsigned int JLDBEPNADNN_TypeDefinitionIndex = 77005;

	class JLDBEPNADNN : public ::HOAAFFGNCPK
	{
	public:
		::RPG::GameCore::FloatCurve* HKIEHNGOPHN; // 0x128
		::UnityEngine::Vector3 FMDEINDLDHP; // 0x130
		::System::Single LBCKFFGDCFB; // 0x13C
		::System::Single IKILDBAAIGG; // 0x140
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLDBEPNADNN_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::HFCPGANBGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCPGANBGMI*))((::PBYTE)hIl2Cpp + JLDBEPNADNN_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void FFKBFPKEPEN(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + JLDBEPNADNN_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void JCDFALFLNJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLDBEPNADNN_JCDFALFLNJL_OFFSET))(this);
		}

		::System::Void IJCLCMAJBHJ(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + JLDBEPNADNN_IJCLCMAJBHJ_OFFSET))(this, a1, a2);
		}

		::System::Void MBGHIIAJMGD(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + JLDBEPNADNN_MBGHIIAJMGD_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + JLDBEPNADNN_EPPAFNJFCMH_OFFSET))(this);
		}

	};
