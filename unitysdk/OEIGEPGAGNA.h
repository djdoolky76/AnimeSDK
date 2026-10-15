#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/System/Object.h"
class JDGIIPJCPID;
namespace RPG::Client { class Map; }
namespace RPG::GameCore { class BattleAreaReferenceInfo; }
namespace System { class String; }

#define OEIGEPGAGNA_CTOR_OFFSET UNITYSDK_OFFSET(0xBE27300)

inline static constexpr unsigned int OEIGEPGAGNA_TypeDefinitionIndex = 61205;

	class OEIGEPGAGNA : public ::System::Object
	{
	public:
		::RPG::GameCore::BattleAreaReferenceInfo* APNJHDKFEEG; // 0x10
		::System::String* DDOCMAPPGKF; // 0x18
		::JDGIIPJCPID* AOLFKIMFNPN; // 0x20
		::System::String* ENIKCJNGIFO; // 0x28
		::RPG::Client::Map* AOKAGIJCFBO; // 0x30
		::System::Boolean BPHEALGCHOD; // 0x38
		::System::Boolean HCHOKIEPMEA; // 0x39
		::System::Boolean JKGKHODLKNA; // 0x3A
		::System::Byte _padding0[0x1];
		::RPG::Client::GamePhaseType CCIDLCBEFLN; // 0x3C
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OEIGEPGAGNA_CTOR_OFFSET))(this, a1);
		}

	};
