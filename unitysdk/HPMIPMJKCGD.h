#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define HPMIPMJKCGD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAF7830)

	class HPMIPMJKCGD : public ::System::Object
	{
	public:
		::System::String* DHMDAEKJENF; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPMIPMJKCGD_CTOR_OFFSET))(this);
		}

	};
