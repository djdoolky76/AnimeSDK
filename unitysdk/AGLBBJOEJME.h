#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define AGLBBJOEJME_CTOR_OFFSET UNITYSDK_OFFSET(0xCF3FDA0)

	class AGLBBJOEJME : public ::System::Object
	{
	public:
		::System::String* OENAMINOLLF; // 0x10
		::System::Int32 COIHCPBGBPA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGLBBJOEJME_CTOR_OFFSET))(this);
		}

	};
