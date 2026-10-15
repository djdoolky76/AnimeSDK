#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define NEEIEEMHECI_CTOR_OFFSET UNITYSDK_OFFSET(0xBB5B110)

	class NEEIEEMHECI : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::System::String* BOJIADNJMJK; // 0x18
		::System::String* LLOGCJNGEDA; // 0x20
		::System::Boolean IOBJFEJFLJP; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEIEEMHECI_CTOR_OFFSET))(this);
		}

	};
