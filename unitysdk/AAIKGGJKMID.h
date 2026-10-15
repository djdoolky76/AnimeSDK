#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFELGAIGHAP;
namespace System { class String; }

#define AAIKGGJKMID_CTOR_OFFSET UNITYSDK_OFFSET(0xB0C76E0)

	class AAIKGGJKMID : public ::System::Object
	{
	public:
		::KFELGAIGHAP* MGFLFCHMGPA; // 0x10
		::KFELGAIGHAP* MGJLINFADJK; // 0x18
		::System::String* COIONCALMPM; // 0x20
		::System::Boolean EBPLOCJJDGF; // 0x28
		::System::Boolean FODGKPILOHC; // 0x29
		::System::Boolean GOBEOHHCNLA; // 0x2A
		::System::Boolean CCEPACIHEOC; // 0x2B
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAIKGGJKMID_CTOR_OFFSET))(this);
		}

	};
