#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define FLEBNNINNAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1582D770)

	class FLEBNNINNAM : public ::System::Object
	{
	public:
		::System::String* CCCKHLOILKE; // 0x10
		::System::UInt32 IHCCKKJKDNP; // 0x18
		::System::Boolean DNDBBEOCMBK; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 IDPNLDKDKJI; // 0x20
		::System::Void _ctor(::System::Boolean a1, ::System::String* a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FLEBNNINNAM_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

	};
