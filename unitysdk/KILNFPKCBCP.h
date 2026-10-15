#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define KILNFPKCBCP_CTOR_OFFSET UNITYSDK_OFFSET(0xB435690)

	class KILNFPKCBCP : public ::System::Object
	{
	public:
		::System::String* InviteCode; // 0x10
		::System::Boolean Bind; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KILNFPKCBCP_CTOR_OFFSET))(this);
		}

	};
