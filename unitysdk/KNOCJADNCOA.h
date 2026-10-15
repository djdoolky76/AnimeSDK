#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define KNOCJADNCOA_CTOR_OFFSET UNITYSDK_OFFSET(0xB58A4F0)

	class KNOCJADNCOA : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* CKLPGEPGCMJ; // 0x10
		::System::Boolean GNDCCBNILML; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOCJADNCOA_CTOR_OFFSET))(this);
		}

	};
