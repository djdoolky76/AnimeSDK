#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PixAir/PixAirGameState.h"
#include "unitysdk/System/Object.h"

#define DAMFACEJGPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA140F0)

	class DAMFACEJGPJ : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::PixAir::PixAirGameState MEPFOEEGBEA; // 0x10
		::System::Boolean KBEJHKAFIIF; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMFACEJGPJ_CTOR_OFFSET))(this);
		}

	};
