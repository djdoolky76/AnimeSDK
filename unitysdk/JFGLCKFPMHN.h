#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define JFGLCKFPMHN_CTOR_OFFSET UNITYSDK_OFFSET(0x1664C810)

	class JFGLCKFPMHN : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::System::UInt32 APDMBOFHCAI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGLCKFPMHN_CTOR_OFFSET))(this);
		}

	};
