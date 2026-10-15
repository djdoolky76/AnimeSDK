#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define DJIGFHMOPIG_CTOR_OFFSET UNITYSDK_OFFSET(0xF2358E0)

	class DJIGFHMOPIG : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint AAPOHKBAPFP; // 0x10
		::RPG::GameCore::FixPoint ENPFGCMCLPI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIGFHMOPIG_CTOR_OFFSET))(this);
		}

	};
