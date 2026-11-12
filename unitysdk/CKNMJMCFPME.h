#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define CKNMJMCFPME_CTOR_OFFSET UNITYSDK_OFFSET(0xE0A4ED0)
#define CKNMJMCFPME_GET_ASSETPATH_OFFSET UNITYSDK_OFFSET(0xE0A4E90)
#define CKNMJMCFPME_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xE0A4EB0)
#define CKNMJMCFPME_GET_LIVERYID_OFFSET UNITYSDK_OFFSET(0xE0A4E50)
#define CKNMJMCFPME_GET_NAME_OFFSET UNITYSDK_OFFSET(0xE0A4E70)
#define CKNMJMCFPME_SET_ASSETPATH_OFFSET UNITYSDK_OFFSET(0xE0A4EA0)
#define CKNMJMCFPME_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xE0A4EC0)
#define CKNMJMCFPME_SET_LIVERYID_OFFSET UNITYSDK_OFFSET(0xE0A4E60)
#define CKNMJMCFPME_SET_NAME_OFFSET UNITYSDK_OFFSET(0xE0A4E80)

inline static constexpr unsigned int CKNMJMCFPME_TypeDefinitionIndex = 84474;

	class CKNMJMCFPME : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::System::String* _AssetPath_k__BackingField; // 0x18
		::RPG::Client::TextID _Name_k__BackingField; // 0x20
		::System::UInt32 _LiveryID_k__BackingField; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKNMJMCFPME_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_LiveryID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKNMJMCFPME_GET_LIVERYID_OFFSET))(this);
		}

		::System::Void set_LiveryID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CKNMJMCFPME_SET_LIVERYID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CKNMJMCFPME_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CKNMJMCFPME_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_AssetPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKNMJMCFPME_GET_ASSETPATH_OFFSET))(this);
		}

		::System::Void set_AssetPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CKNMJMCFPME_SET_ASSETPATH_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKNMJMCFPME_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CKNMJMCFPME_SET_ICONPATH_OFFSET))(this, a1);
		}

	};
