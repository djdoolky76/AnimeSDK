#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ILJIAEMGJJK.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/HGBCMFANCOE.h"

#define PHCDAKHMHAO_BFPJNABOKMB_OFFSET UNITYSDK_OFFSET(0xC231AC0)
#define PHCDAKHMHAO_CLEAR_OFFSET UNITYSDK_OFFSET(0xC231910)
#define PHCDAKHMHAO_CTOR_OFFSET UNITYSDK_OFFSET(0xC231B40)
#define PHCDAKHMHAO_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0xC231B30)
#define PHCDAKHMHAO_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0xC231720)
#define PHCDAKHMHAO_GJEJEEAOFID_OFFSET UNITYSDK_OFFSET(0xC2319D0)
#define PHCDAKHMHAO_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0xC2317B0)

inline static constexpr unsigned int PHCDAKHMHAO_TypeDefinitionIndex = 76967;

	class PHCDAKHMHAO : public ::ILJIAEMGJJK
	{
	public:
		::RPG::Client::LittleGame::Move::MoveState FBNFGOBKBAK; // 0xD8
		::UnityEngine::Vector3 FLEMHBAGOAI; // 0xDC
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
