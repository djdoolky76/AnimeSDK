#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMKBMOMBOBH.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class RogueMagicAreaRow; }
namespace System { class Object; }

#define IDDBHGHKHHK_CTOR_OFFSET UNITYSDK_OFFSET(0x15EA9390)
#define IDDBHGHKHHK_IJOONKNIDKI_OFFSET UNITYSDK_OFFSET(0x15EA93A0)
#define IDDBHGHKHHK_KEECIJEOGGC_OFFSET UNITYSDK_OFFSET(0x15EA9430)

inline static constexpr unsigned int IDDBHGHKHHK_TypeDefinitionIndex = 67251;

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
