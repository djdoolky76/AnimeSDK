#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LICCJOEFPLK;
namespace RPG::GameCore { class AnchorInfo; }

#define LICCJOEFPLK___C__DISPLAYCLASS21_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB6C52A0)
#define LICCJOEFPLK___C__DISPLAYCLASS21_0___ENTERENVIRONMENT_B__0_OFFSET UNITYSDK_OFFSET(0xB6C6EA0)

	class LICCJOEFPLK___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::LICCJOEFPLK* __4__this; // 0x10
		::RPG::GameCore::AnchorInfo* anchorReady; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LICCJOEFPLK___C__DISPLAYCLASS21_0_CTOR_OFFSET))(this);
		}

		::System::Void __EnterEnvironment_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LICCJOEFPLK___C__DISPLAYCLASS21_0___ENTERENVIRONMENT_B__0_OFFSET))(this);
		}

	};
