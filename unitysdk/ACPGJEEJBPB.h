#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class ALEAKDBNMKC;

#define ACPGJEEJBPB_CTOR_OFFSET UNITYSDK_OFFSET(0xB1333C0)
#define ACPGJEEJBPB_GET_CONTENTTEXTID_OFFSET UNITYSDK_OFFSET(0xB1333A0)
#define ACPGJEEJBPB_GET_POSITIONINFO_OFFSET UNITYSDK_OFFSET(0xB133380)
#define ACPGJEEJBPB_SET_CONTENTTEXTID_OFFSET UNITYSDK_OFFSET(0xB1333B0)
#define ACPGJEEJBPB_SET_POSITIONINFO_OFFSET UNITYSDK_OFFSET(0xB133390)

	class ACPGJEEJBPB : public ::System::Object
	{
	public:
		::ALEAKDBNMKC* _PositionInfo_k__BackingField; // 0x10
		::RPG::Client::TextID _ContentTextID_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACPGJEEJBPB_CTOR_OFFSET))(this);
		}

		::ALEAKDBNMKC* get_PositionInfo()
		{
			return ((::ALEAKDBNMKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACPGJEEJBPB_GET_POSITIONINFO_OFFSET))(this);
		}

		::System::Void set_PositionInfo(::ALEAKDBNMKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALEAKDBNMKC*))((::PBYTE)hIl2Cpp + ACPGJEEJBPB_SET_POSITIONINFO_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_ContentTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + ACPGJEEJBPB_GET_CONTENTTEXTID_OFFSET))(this);
		}

		::System::Void set_ContentTextID(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + ACPGJEEJBPB_SET_CONTENTTEXTID_OFFSET))(this, a1);
		}

	};
