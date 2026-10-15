#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PlayerHitReason.h"
#include "unitysdk/System/Object.h"

#define PHFPPINMBLN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9E96D0)

	class PHFPPINMBLN : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::PlayerHitReason KDHPKOFLNFM; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHFPPINMBLN_CTOR_OFFSET))(this);
		}

	};
