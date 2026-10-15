#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLNHAGFEPKF;
namespace RPG::Client { class EarlyAccessContent; }
namespace RPG::Client { class EarlyAccessModule; }
namespace System { class Action; }

#define BLNHAGFEPKF___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBA7E970)
#define BLNHAGFEPKF___C__DISPLAYCLASS5_0___HANDLEPREMISSIONCONTENT_B__0_OFFSET UNITYSDK_OFFSET(0xBA7EBC0)
#define BLNHAGFEPKF___C__DISPLAYCLASS5_0___HANDLEPREMISSIONCONTENT_B__1_OFFSET UNITYSDK_OFFSET(0xBA7ED30)

	class BLNHAGFEPKF___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::RPG::Client::EarlyAccessModule* earlyAccessModule; // 0x10
		::BLNHAGFEPKF* __4__this; // 0x18
		::RPG::Client::EarlyAccessContent* content; // 0x20
		::System::Action* __9__1; // 0x28
		::System::UInt32 preMissionID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLNHAGFEPKF___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Void __HandlePreMissionContent_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLNHAGFEPKF___C__DISPLAYCLASS5_0___HANDLEPREMISSIONCONTENT_B__0_OFFSET))(this);
		}

		::System::Void __HandlePreMissionContent_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLNHAGFEPKF___C__DISPLAYCLASS5_0___HANDLEPREMISSIONCONTENT_B__1_OFFSET))(this);
		}

	};
