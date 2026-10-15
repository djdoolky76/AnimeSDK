#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PingPong/GameState.h"
#include "unitysdk/System/Object.h"

#define MFHJNCNJLAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C925470)

	class MFHJNCNJLAA : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::PingPong::GameState MEPFOEEGBEA; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFHJNCNJLAA_CTOR_OFFSET))(this);
		}

	};
