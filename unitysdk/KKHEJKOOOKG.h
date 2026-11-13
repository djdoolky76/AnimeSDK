#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBIKMJHGEDE.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define KKHEJKOOOKG_BPMGPFLHPLC_OFFSET UNITYSDK_OFFSET(0x17342320)
#define KKHEJKOOOKG_CTOR_OFFSET UNITYSDK_OFFSET(0x17342360)
#define KKHEJKOOOKG_LFIFIEGFMOM_OFFSET UNITYSDK_OFFSET(0x173422C0)
#define KKHEJKOOOKG_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x17342240)

inline static constexpr unsigned int KKHEJKOOOKG_TypeDefinitionIndex = 79371;

	class KKHEJKOOOKG : public ::CBIKMJHGEDE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHEJKOOOKG_CTOR_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KKHEJKOOOKG_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void LFIFIEGFMOM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KKHEJKOOOKG_LFIFIEGFMOM_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::FiveDim::PropMoveState BPMGPFLHPLC()
		{
			return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHEJKOOOKG_BPMGPFLHPLC_OFFSET))(this);
		}

	};
