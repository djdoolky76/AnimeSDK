#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class LLGMEBOEBPP;
namespace System { class String; }

#define JGOFBOJJGDJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB1A6140)
#define JGOFBOJJGDJ_GET_CACHEKEY_OFFSET UNITYSDK_OFFSET(0xB1A60F0)
#define JGOFBOJJGDJ_GET_HEADIMAGE_OFFSET UNITYSDK_OFFSET(0xB1A6120)
#define JGOFBOJJGDJ_GET_ID_OFFSET UNITYSDK_OFFSET(0xB1A6100)
#define JGOFBOJJGDJ_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB1A6110)
#define JGOFBOJJGDJ_GET_PORTRAITIMAGE_OFFSET UNITYSDK_OFFSET(0xB1A6130)

	class JGOFBOJJGDJ : public ::System::Object
	{
	public:
		::System::String* _PortraitImage_k__BackingField; // 0x10
		::System::String* _HeadImage_k__BackingField; // 0x18
		::System::Int32 _CacheKey_k__BackingField; // 0x20
		::System::UInt32 _ID_k__BackingField; // 0x24
		::RPG::Client::TextID _Name_k__BackingField; // 0x28
		::System::Void _ctor(::LLGMEBOEBPP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLGMEBOEBPP*))((::PBYTE)hIl2Cpp + JGOFBOJJGDJ_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_CacheKey()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGOFBOJJGDJ_GET_CACHEKEY_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGOFBOJJGDJ_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + JGOFBOJJGDJ_GET_NAME_OFFSET))(this);
		}

		::System::String* get_HeadImage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGOFBOJJGDJ_GET_HEADIMAGE_OFFSET))(this);
		}

		::System::String* get_PortraitImage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGOFBOJJGDJ_GET_PORTRAITIMAGE_OFFSET))(this);
		}

	};
