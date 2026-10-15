#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEOCEOCDEAF;

#define MKCGPPKDOKG_CTOR_OFFSET UNITYSDK_OFFSET(0xB98A610)

	class MKCGPPKDOKG : public ::System::Object
	{
	public:
		::NEOCEOCDEAF* JJGKNDGEKHG; // 0x10
		::System::Single IEHPFADHJFD; // 0x18
		::System::UInt32 MHJJFJENMNM; // 0x1C
		::System::UInt32 HOGNMPCLHMA; // 0x20
		::System::Boolean IDDMADIEBAD; // 0x24
		::System::Boolean POGBDDLNGMB; // 0x25
		::System::Byte _padding0[0x2];
		::System::UInt32 PEMODLOBAPG; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCGPPKDOKG_CTOR_OFFSET))(this);
		}

	};
