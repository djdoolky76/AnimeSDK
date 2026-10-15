#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBIKMJHGEDE.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define KKHEJKOOOKG_BPMGPFLHPLC_OFFSET UNITYSDK_OFFSET(0xB4BC3F0)
#define KKHEJKOOOKG_CTOR_OFFSET UNITYSDK_OFFSET(0xB4BC430)
#define KKHEJKOOOKG_LFIFIEGFMOM_OFFSET UNITYSDK_OFFSET(0xB4BC390)
#define KKHEJKOOOKG_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xB4BC310)

inline static constexpr unsigned int KKHEJKOOOKG_TypeDefinitionIndex = 77038;

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
