#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLLEGKDHCIE;

#define HFGAKLKEOFI_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CAC8290)
#define HFGAKLKEOFI_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAC8310)

	class HFGAKLKEOFI : public ::System::Object
	{
	public:
		::JLLEGKDHCIE* BPAPBAFOMCH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGAKLKEOFI_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGAKLKEOFI_CLEAR_OFFSET))(this);
		}

	};
