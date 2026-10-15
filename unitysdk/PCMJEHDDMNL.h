#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCGFCHPPIDH;
namespace System { class String; }

#define PCMJEHDDMNL_CTOR_OFFSET UNITYSDK_OFFSET(0xC0084F0)

	class PCMJEHDDMNL : public ::System::Object
	{
	public:
		::CCGFCHPPIDH* Data; // 0x10
		::System::String* ID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMJEHDDMNL_CTOR_OFFSET))(this);
		}

	};
