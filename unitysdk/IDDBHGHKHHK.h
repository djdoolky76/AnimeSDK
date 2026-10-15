#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMKBMOMBOBH.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class RogueMagicAreaRow; }
namespace System { class Object; }

#define IDDBHGHKHHK_CTOR_OFFSET UNITYSDK_OFFSET(0x15EB5260)
#define IDDBHGHKHHK_IJOONKNIDKI_OFFSET UNITYSDK_OFFSET(0x15EB5270)
#define IDDBHGHKHHK_KEECIJEOGGC_OFFSET UNITYSDK_OFFSET(0x15EB5300)

	class IDDBHGHKHHK : public ::System::Object
	{
	public:
		::BMKBMOMBOBH LNPLJMDCPEP; // 0x10
		::System::Void _ctor(::BMKBMOMBOBH a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMKBMOMBOBH))((::PBYTE)hIl2Cpp + IDDBHGHKHHK_CTOR_OFFSET))(this, a1);
		}

		::System::Object* IJOONKNIDKI()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDDBHGHKHHK_IJOONKNIDKI_OFFSET))(this);
		}

		::RPG::GameCore::RogueMagicAreaRow* KEECIJEOGGC()
		{
			return ((::RPG::GameCore::RogueMagicAreaRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDDBHGHKHHK_KEECIJEOGGC_OFFSET))(this);
		}

	};
