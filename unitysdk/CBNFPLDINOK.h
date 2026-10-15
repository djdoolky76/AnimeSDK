#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class MiniGameHundredFloorBlockConfig; }

#define CBNFPLDINOK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8DCD30)

	class CBNFPLDINOK : public ::System::Object
	{
	public:
		::RPG::GameCore::MiniGameHundredFloorBlockConfig* EABKOHGCHFP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBNFPLDINOK_CTOR_OFFSET))(this);
		}

	};
