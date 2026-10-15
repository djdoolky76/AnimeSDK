#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDPFMFINJCO.h"

#define HFKGDABBEBC_CLEAR_OFFSET UNITYSDK_OFFSET(0x15C880E0)
#define HFKGDABBEBC_CTOR_OFFSET UNITYSDK_OFFSET(0x15C881A0)
#define HFKGDABBEBC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C88130)

	class HFKGDABBEBC : public ::FDPFMFINJCO
	{
	public:
		::System::UInt32 ANHLPFDCDHE; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFKGDABBEBC_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFKGDABBEBC_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFKGDABBEBC_DISPOSE_OFFSET))(this);
		}

	};
