#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/System/Object.h"
class JDGIIPJCPID;
namespace RPG::Client { class Map; }
namespace RPG::GameCore { class BattleAreaReferenceInfo; }
namespace System { class String; }

#define OEIGEPGAGNA_CTOR_OFFSET UNITYSDK_OFFSET(0x17654A90)

inline static constexpr unsigned int OEIGEPGAGNA_TypeDefinitionIndex = 62590;

	class OEIGEPGAGNA : public ::System::Object
	{
	public:
		::JDGIIPJCPID* AOLFKIMFNPN; // 0x10
		::RPG::Client::Map* AOKAGIJCFBO; // 0x18
		::System::String* ENIKCJNGIFO; // 0x20
		::RPG::GameCore::BattleAreaReferenceInfo* APNJHDKFEEG; // 0x28
		::System::String* DDOCMAPPGKF; // 0x30
		::RPG::Client::GamePhaseType CCIDLCBEFLN; // 0x38
		::System::Boolean HCHOKIEPMEA; // 0x3C
		::System::Boolean BPHEALGCHOD; // 0x3D
		::System::Boolean JKGKHODLKNA; // 0x3E
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OEIGEPGAGNA_CTOR_OFFSET))(this, a1);
		}

	};
