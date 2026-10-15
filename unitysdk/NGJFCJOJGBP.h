#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PlayerFlipState.h"
#include "unitysdk/System/Object.h"

#define NGJFCJOJGBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C960D10)

	class NGJFCJOJGBP : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::PlayerFlipState MEPFOEEGBEA; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJFCJOJGBP_CTOR_OFFSET))(this);
		}

	};
