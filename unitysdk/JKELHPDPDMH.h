#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PuzzleTutorialType.h"
#include "unitysdk/System/Object.h"

#define JKELHPDPDMH_OIBKPJEGPOK_OFFSET UNITYSDK_OFFSET(0xB214AD0)

inline static constexpr unsigned int JKELHPDPDMH_TypeDefinitionIndex = 78785;

	class JKELHPDPDMH : public ::System::Object
	{
	public:
		static ::System::Void OIBKPJEGPOK(::RPG::GameCore::PuzzleTutorialType a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PuzzleTutorialType))((::PBYTE)hIl2Cpp + JKELHPDPDMH_OIBKPJEGPOK_OFFSET))(a1);
		}

	};
