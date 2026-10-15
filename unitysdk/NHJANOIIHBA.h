#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NHJANOIIHBA_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C966010)
#define NHJANOIIHBA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C966090)

	class NHJANOIIHBA : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* CDAFDCPKBDN; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* CGMJGMKGCMF; // 0x18
		::System::Int32 FNKLEPKJLAG; // 0x20
		::System::Single KOMCLFIKMJJ; // 0x24
		::System::Int32 JOGAFFCLBCK; // 0x28
		::System::Boolean MHIKNLIOCCF; // 0x2C
		::System::Byte _padding0[0x3];
		::System::Int32 GPEBOIJGLGE; // 0x30
		::System::Int32 KBDPOCPOABL; // 0x34
		::System::Single LKKHEOOEGMG; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHJANOIIHBA_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHJANOIIHBA_CLEAR_OFFSET))(this);
		}

	};
