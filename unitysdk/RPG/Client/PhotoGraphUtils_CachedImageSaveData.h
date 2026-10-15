#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_PHOTOGRAPHUTILS_CACHEDIMAGESAVEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDB21D20)

namespace RPG::Client
{
	class PhotoGraphUtils_CachedImageSaveData : public ::System::Object
	{
	public:
		::System::String* Title; // 0x10
		::System::String* Desc; // 0x18
		::System::String* FileName; // 0x20
		::Il2CppArray<::System::Byte>* MediaBytes; // 0x28
		::System::Action* Callback; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_CACHEDIMAGESAVEDATA_CTOR_OFFSET))(this);
		}

	};
}
