#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonopolyContentTrigger.h"
#include "unitysdk/RPG/Client/MonopolyContentType.h"
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class MonopolyRandomOptionContentData; }

#define FELMMAJHJLG_CTOR_OFFSET UNITYSDK_OFFSET(0x15725460)
#define FELMMAJHJLG_TRIGGER_OFFSET UNITYSDK_OFFSET(0x15725480)

	class FELMMAJHJLG : public ::RPG::Client::MonopolyContentTrigger
	{
	public:
		::RPG::Client::MonopolyRandomOptionContentData* EKIFMMJNJCK; // 0x20
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::MonopolyContentType a3, ::RPG::Client::MonopolyRandomOptionContentData* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::MonopolyContentType, ::RPG::Client::MonopolyRandomOptionContentData*))((::PBYTE)hIl2Cpp + FELMMAJHJLG_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::LuaUIController* Trigger()
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + FELMMAJHJLG_TRIGGER_OFFSET))(this);
		}

	};
