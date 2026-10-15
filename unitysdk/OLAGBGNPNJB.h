#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::GameCore { class BillboardComponent; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class RogueDoorSetGotoInfo; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define OLAGBGNPNJB_BEDDHLCIBBP_OFFSET UNITYSDK_OFFSET(0xBEFF950)
#define OLAGBGNPNJB_CTOR_OFFSET UNITYSDK_OFFSET(0xBEFF4A0)
#define OLAGBGNPNJB_KHOHBBDOACA_OFFSET UNITYSDK_OFFSET(0xBEFF890)
#define OLAGBGNPNJB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBEFF4D0)

	class OLAGBGNPNJB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueDoorSetGotoInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueDoorSetGotoInfo*))((::PBYTE)hIl2Cpp + OLAGBGNPNJB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLAGBGNPNJB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void KHOHBBDOACA(::RPG::GameCore::BillboardComponent* a1, ::RPG::Client::TextID a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BillboardComponent*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + OLAGBGNPNJB_KHOHBBDOACA_OFFSET))(this, a1, a2);
		}

		::System::Void BEDDHLCIBBP(::RPG::GameCore::PropComponent* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::System::String*))((::PBYTE)hIl2Cpp + OLAGBGNPNJB_BEDDHLCIBBP_OFFSET))(this, a1, a2);
		}

	};
