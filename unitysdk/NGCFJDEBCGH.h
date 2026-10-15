#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/ProjectileParams.h"
#include "unitysdk/System/Object.h"

#define NGCFJDEBCGH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C92C120)

inline static constexpr unsigned int NGCFJDEBCGH_TypeDefinitionIndex = 42933;

	class NGCFJDEBCGH : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::RoadRash::ProjectileParams EJHODPJIFIN; // 0x10
		::System::Int32 OIHCEBCPPMJ; // 0xA0
		::System::Int32 IEBGNBBLFMD; // 0xA4
		::System::Boolean KMGIHDHMBJB; // 0xA8
		::System::Boolean HCOFMFKFMDK; // 0xA9
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGCFJDEBCGH_CTOR_OFFSET))(this);
		}

	};
