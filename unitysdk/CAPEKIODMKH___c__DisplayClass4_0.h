#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LittleGame::FiveDim { class SidePuzzleTargetData; }

#define CAPEKIODMKH___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC493110)
#define CAPEKIODMKH___C__DISPLAYCLASS4_0___ONQUESTUPDATED_B__0_OFFSET UNITYSDK_OFFSET(0xC495B50)

inline static constexpr unsigned int CAPEKIODMKH___c__DisplayClass4_0_TypeDefinitionIndex = 76834;

	class CAPEKIODMKH___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::UInt32 questID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAPEKIODMKH___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __OnQuestUpdated_b__0(::RPG::Client::LittleGame::FiveDim::SidePuzzleTargetData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::SidePuzzleTargetData*))((::PBYTE)hIl2Cpp + CAPEKIODMKH___C__DISPLAYCLASS4_0___ONQUESTUPDATED_B__0_OFFSET))(this, a1);
		}

	};
