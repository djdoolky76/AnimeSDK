#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OELHAMANGBN;

#define KHLDHMFKOCP_HDKHCMBPMAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA87B40)

inline static constexpr unsigned int KHLDHMFKOCP_HDKHCMBPMAK_TypeDefinitionIndex = 44052;

	class KHLDHMFKOCP_HDKHCMBPMAK : public ::System::Object
	{
	public:
		::OELHAMANGBN* CIKPBGDIABO; // 0x10
		::System::Boolean JFNHKEKIDKJ; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 GHEPAPDGJLK; // 0x1C
		::System::UInt32 BNCODJLHDMN; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_HDKHCMBPMAK_CTOR_OFFSET))(this);
		}

	};
