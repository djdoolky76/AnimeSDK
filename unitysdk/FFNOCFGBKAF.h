#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define FFNOCFGBKAF_CTOR_OFFSET UNITYSDK_OFFSET(0x157473E0)
#define FFNOCFGBKAF_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x157473C0)
#define FFNOCFGBKAF_GET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0x15747380)
#define FFNOCFGBKAF_GET_TEXTID_OFFSET UNITYSDK_OFFSET(0x157473A0)
#define FFNOCFGBKAF_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x157473D0)
#define FFNOCFGBKAF_SET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0x15747390)
#define FFNOCFGBKAF_SET_TEXTID_OFFSET UNITYSDK_OFFSET(0x157473B0)

	class FFNOCFGBKAF : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::System::UInt32 _RuntimeID_k__BackingField; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _TextID_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFNOCFGBKAF_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_RuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFNOCFGBKAF_GET_RUNTIMEID_OFFSET))(this);
		}

		::System::Void set_RuntimeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FFNOCFGBKAF_SET_RUNTIMEID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_TextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + FFNOCFGBKAF_GET_TEXTID_OFFSET))(this);
		}

		::System::Void set_TextID(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + FFNOCFGBKAF_SET_TEXTID_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFNOCFGBKAF_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FFNOCFGBKAF_SET_ICONPATH_OFFSET))(this, a1);
		}

	};
