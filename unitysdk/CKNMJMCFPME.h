#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define CKNMJMCFPME_CTOR_OFFSET UNITYSDK_OFFSET(0xD76AB50)
#define CKNMJMCFPME_GET_ASSETPATH_OFFSET UNITYSDK_OFFSET(0xD76AB10)
#define CKNMJMCFPME_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xD76AB30)
#define CKNMJMCFPME_GET_LIVERYID_OFFSET UNITYSDK_OFFSET(0xD76AAD0)
#define CKNMJMCFPME_GET_NAME_OFFSET UNITYSDK_OFFSET(0xD76AAF0)
#define CKNMJMCFPME_SET_ASSETPATH_OFFSET UNITYSDK_OFFSET(0xD76AB20)
#define CKNMJMCFPME_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xD76AB40)
#define CKNMJMCFPME_SET_LIVERYID_OFFSET UNITYSDK_OFFSET(0xD76AAE0)
#define CKNMJMCFPME_SET_NAME_OFFSET UNITYSDK_OFFSET(0xD76AB00)

inline static constexpr unsigned int CKNMJMCFPME_TypeDefinitionIndex = 81693;

	class CKNMJMCFPME : public ::System::Object
	{
	public:
		::System::String* _AssetPath_k__BackingField; // 0x10
		::System::String* _IconPath_k__BackingField; // 0x18
		::System::UInt32 _LiveryID_k__BackingField; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _Name_k__BackingField; // 0x28
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
