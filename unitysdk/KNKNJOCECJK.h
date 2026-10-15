#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CCEJFGMOHGP.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define KNKNJOCECJK_BPMGPFLHPLC_OFFSET UNITYSDK_OFFSET(0xB587B10)
#define KNKNJOCECJK_CTOR_OFFSET UNITYSDK_OFFSET(0xB587C40)
#define KNKNJOCECJK_LFIFIEGFMOM_OFFSET UNITYSDK_OFFSET(0xB587BE0)
#define KNKNJOCECJK_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xB587B60)

	class KNKNJOCECJK : public ::CCEJFGMOHGP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKNJOCECJK_CTOR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::FiveDim::PropMoveState BPMGPFLHPLC()
		{
			return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKNJOCECJK_BPMGPFLHPLC_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KNKNJOCECJK_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void LFIFIEGFMOM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KNKNJOCECJK_LFIFIEGFMOM_OFFSET))(this, a1);
		}

	};
