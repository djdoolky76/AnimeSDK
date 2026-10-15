#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PingPong/ProjectileOwnerType.h"
#include "unitysdk/System/Object.h"

#define APLNICFBMGA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C87ED10)

inline static constexpr unsigned int APLNICFBMGA_TypeDefinitionIndex = 42979;

	class APLNICFBMGA : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::PingPong::ProjectileOwnerType GHNJCLNKGHH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APLNICFBMGA_CTOR_OFFSET))(this);
		}

	};
