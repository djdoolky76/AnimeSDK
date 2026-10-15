#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBIKMJHGEDE.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define KKHEJKOOOKG_BPMGPFLHPLC_OFFSET UNITYSDK_OFFSET(0xB4B5640)
#define KKHEJKOOOKG_CTOR_OFFSET UNITYSDK_OFFSET(0xB4B5680)
#define KKHEJKOOOKG_LFIFIEGFMOM_OFFSET UNITYSDK_OFFSET(0xB4B55E0)
#define KKHEJKOOOKG_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xB4B5560)

inline static constexpr unsigned int KKHEJKOOOKG_TypeDefinitionIndex = 77037;

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
