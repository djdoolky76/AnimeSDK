#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define DNIDONCOAEE_CTOR_OFFSET UNITYSDK_OFFSET(0x11962740)
#define DNIDONCOAEE_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x119626E0)
#define DNIDONCOAEE_GET_INITIALPOINT_OFFSET UNITYSDK_OFFSET(0x11962700)
#define DNIDONCOAEE_GET_ISPLAYERTEAM_OFFSET UNITYSDK_OFFSET(0x11962720)
#define DNIDONCOAEE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x119626C0)
#define DNIDONCOAEE_GET_TEAMID_OFFSET UNITYSDK_OFFSET(0x119626A0)
#define DNIDONCOAEE_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x119626F0)
#define DNIDONCOAEE_SET_INITIALPOINT_OFFSET UNITYSDK_OFFSET(0x11962710)
#define DNIDONCOAEE_SET_ISPLAYERTEAM_OFFSET UNITYSDK_OFFSET(0x11962730)
#define DNIDONCOAEE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x119626D0)
#define DNIDONCOAEE_SET_TEAMID_OFFSET UNITYSDK_OFFSET(0x119626B0)

inline static constexpr unsigned int DNIDONCOAEE_TypeDefinitionIndex = 81724;

	class DNIDONCOAEE : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::System::Boolean _IsPlayerTeam_k__BackingField; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 _InitialPoint_k__BackingField; // 0x1C
		::System::UInt32 _TeamID_k__BackingField; // 0x20
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID _Name_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNIDONCOAEE_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_TeamID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNIDONCOAEE_GET_TEAMID_OFFSET))(this);
		}

		::System::Void set_TeamID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DNIDONCOAEE_SET_TEAMID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + DNIDONCOAEE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + DNIDONCOAEE_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNIDONCOAEE_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DNIDONCOAEE_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::UInt32 get_InitialPoint()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNIDONCOAEE_GET_INITIALPOINT_OFFSET))(this);
		}

		::System::Void set_InitialPoint(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DNIDONCOAEE_SET_INITIALPOINT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPlayerTeam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DNIDONCOAEE_GET_ISPLAYERTEAM_OFFSET))(this);
		}

		::System::Void set_IsPlayerTeam(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DNIDONCOAEE_SET_ISPLAYERTEAM_OFFSET))(this, a1);
		}

	};
