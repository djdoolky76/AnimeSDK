#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/EAIState.h"
#include "unitysdk/System/Object.h"

#define APMBHNMOONK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D724080)

inline static constexpr unsigned int APMBHNMOONK_TypeDefinitionIndex = 37118;

	class APMBHNMOONK : public ::System::Object
	{
	public:
		::System::Int32 NBNGFFPLGAF; // 0x10
		::RPG::LittleGameShare::DiceCombatCore::EAIState MEPFOEEGBEA; // 0x14
		::System::Single BJMAMHMCOEL; // 0x18
		::System::Boolean FJFFGBMFKNK; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APMBHNMOONK_CTOR_OFFSET))(this);
		}

	};
