#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/ProjectileParams.h"
#include "unitysdk/System/Object.h"

#define NGCFJDEBCGH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C95A360)

	class NGCFJDEBCGH : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::RoadRash::ProjectileParams EJHODPJIFIN; // 0x10
		::System::Boolean HCOFMFKFMDK; // 0xA0
		::System::Boolean KMGIHDHMBJB; // 0xA1
		::System::Byte _padding0[0x2];
		::System::Int32 OIHCEBCPPMJ; // 0xA4
		::System::Int32 IEBGNBBLFMD; // 0xA8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGCFJDEBCGH_CTOR_OFFSET))(this);
		}

	};
