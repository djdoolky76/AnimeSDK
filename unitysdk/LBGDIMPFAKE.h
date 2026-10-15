#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRacePlayerState.h"
#include "unitysdk/System/Object.h"

#define LBGDIMPFAKE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F1DE0)

inline static constexpr unsigned int LBGDIMPFAKE_TypeDefinitionIndex = 37231;

	class LBGDIMPFAKE : public ::System::Object
	{
	public:
		::System::UInt32 LJMNNBMALLL; // 0x10
		::RPG::Client::LittleGameShare::CakeRaceCore::CakeRacePlayerState MEPFOEEGBEA; // 0x14
		::System::Boolean KEOKEELBKHI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBGDIMPFAKE_CTOR_OFFSET))(this);
		}

	};
