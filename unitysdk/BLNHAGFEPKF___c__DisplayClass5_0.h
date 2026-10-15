#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLNHAGFEPKF;
namespace RPG::Client { class EarlyAccessContent; }
namespace RPG::Client { class EarlyAccessModule; }
namespace System { class Action; }

#define BLNHAGFEPKF___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBA7B410)
#define BLNHAGFEPKF___C__DISPLAYCLASS5_0___HANDLEPREMISSIONCONTENT_B__0_OFFSET UNITYSDK_OFFSET(0xBA7B660)
#define BLNHAGFEPKF___C__DISPLAYCLASS5_0___HANDLEPREMISSIONCONTENT_B__1_OFFSET UNITYSDK_OFFSET(0xBA7B7D0)

inline static constexpr unsigned int BLNHAGFEPKF___c__DisplayClass5_0_TypeDefinitionIndex = 53079;

	class BLNHAGFEPKF___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::BLNHAGFEPKF* __4__this; // 0x18
		::RPG::Client::EarlyAccessContent* content; // 0x20
		::RPG::Client::EarlyAccessModule* earlyAccessModule; // 0x28
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
