#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Nullable; }
namespace System { class String; }

#define GHMBKJFBPII_CTOR_OFFSET UNITYSDK_OFFSET(0x15A29990)

	class GHMBKJFBPII : public ::System::Object
	{
	public:
		::System::String* Description; // 0x10
		::Il2CppArray<::System::Single>* Pos; // 0x18
		::System::String* Name; // 0x20
		::System::String* Id; // 0x28
		::System::Nullable* Radius; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMBKJFBPII_CTOR_OFFSET))(this);
		}

	};
