#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRacePlayerState.h"
#include "unitysdk/System/Object.h"

#define LBGDIMPFAKE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7200D0)

inline static constexpr unsigned int LBGDIMPFAKE_TypeDefinitionIndex = 37231;

	class LBGDIMPFAKE : public ::System::Object
	{
	public:
		::RPG::Client::LittleGameShare::CakeRaceCore::CakeRacePlayerState MEPFOEEGBEA; // 0x10
		::System::Boolean KEOKEELBKHI; // 0x14
		::System::Byte _padding0[0x3];
		::System::UInt32 LJMNNBMALLL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBGDIMPFAKE_CTOR_OFFSET))(this);
		}

	};
