#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OBHLNIJOPDH;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define KADDGDOKLEF_FBAGLJEDDDN_CTOR_OFFSET UNITYSDK_OFFSET(0x19DA8160)

inline static constexpr unsigned int KADDGDOKLEF_FBAGLJEDDDN_TypeDefinitionIndex = 73531;

	class KADDGDOKLEF_FBAGLJEDDDN : public ::System::Object
	{
	public:
		::OBHLNIJOPDH* BELJCFGIDMI; // 0x10
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x18
		::System::String* BBKOHGGOOOD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KADDGDOKLEF_FBAGLJEDDDN_CTOR_OFFSET))(this);
		}

	};
