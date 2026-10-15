#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PingPongDropItemType.h"
#include "unitysdk/System/Object.h"

#define HDBAMIHCNID_CTOR_OFFSET UNITYSDK_OFFSET(0x1CABD0F0)

	class HDBAMIHCNID : public ::System::Object
	{
	public:
		::RPG::GameCore::PingPongDropItemType GMPGDEINODK; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBAMIHCNID_CTOR_OFFSET))(this);
		}

	};
