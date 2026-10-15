#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLOHDPOEMDK;
namespace RPG::Client::FateRin { class CardStateChangeContext; }

#define PGKHIKFLKLM_CTOR_OFFSET UNITYSDK_OFFSET(0xC223EB0)

	class PGKHIKFLKLM : public ::System::Object
	{
	public:
		::RPG::Client::FateRin::CardStateChangeContext* BFIFDHMLIAD; // 0x10
		::HLOHDPOEMDK* HNEOOKPBCNK; // 0x18
		::System::Void _ctor(::HLOHDPOEMDK* a1, ::RPG::Client::FateRin::CardStateChangeContext* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HLOHDPOEMDK*, ::RPG::Client::FateRin::CardStateChangeContext*))((::PBYTE)hIl2Cpp + PGKHIKFLKLM_CTOR_OFFSET))(this, a1, a2);
		}

	};
