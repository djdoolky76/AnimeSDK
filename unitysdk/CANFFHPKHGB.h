#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceBubbleState.h"
#include "unitysdk/System/Object.h"

#define CANFFHPKHGB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C59A920)

inline static constexpr unsigned int CANFFHPKHGB_TypeDefinitionIndex = 36831;

	class CANFFHPKHGB : public ::System::Object
	{
	public:
		::System::Boolean FLNGPNCFBAK; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceBubbleState MEPFOEEGBEA; // 0x14
		::System::Single KIPAGNCANAJ; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CANFFHPKHGB_CTOR_OFFSET))(this);
		}

	};
