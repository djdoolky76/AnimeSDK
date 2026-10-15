#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/AICarRuntimeState.h"
#include "unitysdk/System/Object.h"

#define HIEJMKLPBFC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CACC1F0)

	class HIEJMKLPBFC : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::RoadRash::AICarRuntimeState MEPFOEEGBEA; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEJMKLPBFC_CTOR_OFFSET))(this);
		}

	};
