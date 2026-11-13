#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceBubbleState.h"
#include "unitysdk/System/Object.h"

#define CANFFHPKHGB_CTOR_OFFSET UNITYSDK_OFFSET(0x17036A10)

inline static constexpr unsigned int CANFFHPKHGB_TypeDefinitionIndex = 37759;

	class CANFFHPKHGB : public ::System::Object
	{
	public:
		::System::Boolean FLNGPNCFBAK; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single KIPAGNCANAJ; // 0x14
		::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceBubbleState MEPFOEEGBEA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CANFFHPKHGB_CTOR_OFFSET))(this);
		}

	};
