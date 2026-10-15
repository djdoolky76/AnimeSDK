#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IFAFBFDEBMH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB0A3B0)

	class IFAFBFDEBMH : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* FFGLKGPHKNO; // 0x10
		::System::Int32 BJDAIKLOODC; // 0x18
		::System::Single GCJMFBKLGHI; // 0x1C
		::System::Boolean COILLDIDGIN; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single IEHPFADHJFD; // 0x24
		::System::Int32 NMOKIHDMMNG; // 0x28
		::System::Single HKOANFBDPCK; // 0x2C
		::System::Single GJNGOKLGKMM; // 0x30
		::System::Single PECFGEIDOCJ; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAFBFDEBMH_CTOR_OFFSET))(this);
		}

	};
