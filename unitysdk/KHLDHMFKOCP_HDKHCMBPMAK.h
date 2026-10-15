#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OELHAMANGBN;

#define KHLDHMFKOCP_HDKHCMBPMAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8E4A80)

	class KHLDHMFKOCP_HDKHCMBPMAK : public ::System::Object
	{
	public:
		::OELHAMANGBN* CIKPBGDIABO; // 0x10
		::System::UInt32 BNCODJLHDMN; // 0x18
		::System::Boolean JFNHKEKIDKJ; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 GHEPAPDGJLK; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_HDKHCMBPMAK_CTOR_OFFSET))(this);
		}

	};
