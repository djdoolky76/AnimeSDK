#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ILJIAEMGJJK.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/HGBCMFANCOE.h"

#define PHCDAKHMHAO_BFPJNABOKMB_OFFSET UNITYSDK_OFFSET(0xC239450)
#define PHCDAKHMHAO_CLEAR_OFFSET UNITYSDK_OFFSET(0xC2392B0)
#define PHCDAKHMHAO_CTOR_OFFSET UNITYSDK_OFFSET(0xC2394D0)
#define PHCDAKHMHAO_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0xC2394C0)
#define PHCDAKHMHAO_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0xC2390C0)
#define PHCDAKHMHAO_GJEJEEAOFID_OFFSET UNITYSDK_OFFSET(0xC239360)
#define PHCDAKHMHAO_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0xC239150)

inline static constexpr unsigned int PHCDAKHMHAO_TypeDefinitionIndex = 76968;

	class PHCDAKHMHAO : public ::ILJIAEMGJJK
	{
	public:
		::UnityEngine::Vector3 FLEMHBAGOAI; // 0xD8
		::RPG::Client::LittleGame::Move::MoveState FBNFGOBKBAK; // 0xE4
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCDAKHMHAO_CTOR_OFFSET))(this);
		}

		::System::Void FFKBFPKEPEN(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + PHCDAKHMHAO_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void NMPLHCJKEOI(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + PHCDAKHMHAO_NMPLHCJKEOI_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCDAKHMHAO_CLEAR_OFFSET))(this);
		}

		::System::Void GJEJEEAOFID(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + PHCDAKHMHAO_GJEJEEAOFID_OFFSET))(this, a1, a2);
		}

		::System::Void BFPJNABOKMB(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + PHCDAKHMHAO_BFPJNABOKMB_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCDAKHMHAO_EPPAFNJFCMH_OFFSET))(this);
		}

	};
