#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define HJEOFIMJAEH_CTOR_OFFSET UNITYSDK_OFFSET(0x15D1F3F0)
#define HJEOFIMJAEH_EGDOKPOEBAN_OFFSET UNITYSDK_OFFSET(0x15D1F500)
#define HJEOFIMJAEH_FAECKOBFFHC_OFFSET UNITYSDK_OFFSET(0x15D1F400)
#define HJEOFIMJAEH_MHPBMOILMNG_OFFSET UNITYSDK_OFFSET(0x15D1F510)

	class HJEOFIMJAEH : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HJEOFIMJAEH_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 FAECKOBFFHC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJEOFIMJAEH_FAECKOBFFHC_OFFSET))(this);
		}

		::System::Boolean EGDOKPOEBAN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJEOFIMJAEH_EGDOKPOEBAN_OFFSET))(this);
		}

		::System::String* MHPBMOILMNG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJEOFIMJAEH_MHPBMOILMNG_OFFSET))(this);
		}

	};
