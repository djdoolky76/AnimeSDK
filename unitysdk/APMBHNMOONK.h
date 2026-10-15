#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/EAIState.h"
#include "unitysdk/System/Object.h"

#define APMBHNMOONK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5A2800)

	class APMBHNMOONK : public ::System::Object
	{
	public:
		::RPG::LittleGameShare::DiceCombatCore::EAIState MEPFOEEGBEA; // 0x10
		::System::Boolean FJFFGBMFKNK; // 0x14
		::System::Byte _padding0[0x3];
		::System::Single BJMAMHMCOEL; // 0x18
		::System::Int32 NBNGFFPLGAF; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APMBHNMOONK_CTOR_OFFSET))(this);
		}

	};
