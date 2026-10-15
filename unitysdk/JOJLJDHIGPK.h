#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraLockReason.h"
#include "unitysdk/System/Object.h"

#define JOJLJDHIGPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA7CE0)

	class JOJLJDHIGPK : public ::System::Object
	{
	public:
		::System::Boolean AALCCPJCBME; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::Client::LittleGame::ChimeraLockReason KDHPKOFLNFM; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOJLJDHIGPK_CTOR_OFFSET))(this);
		}

	};
