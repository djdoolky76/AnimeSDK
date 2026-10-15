#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define AJNHAPHCDCL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x12CC8030)
#define AJNHAPHCDCL_CTOR_OFFSET UNITYSDK_OFFSET(0x12CC8020)

	class AJNHAPHCDCL : public ::System::Attribute
	{
	public:
		::System::UInt16 GDHPKBGNAEL; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNHAPHCDCL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + AJNHAPHCDCL_CTOR_1_OFFSET))(this, a1);
		}

	};
