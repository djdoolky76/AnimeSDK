#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNHNLPIHONJ_BlobLabel.h"

#define KNHNLPIHONJ_AEGIMKEALPN_CTOR_OFFSET UNITYSDK_OFFSET(0x3C3BD70)
#define KNHNLPIHONJ_AEGIMKEALPN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C3BD80)

	struct alignas(4) KNHNLPIHONJ_AEGIMKEALPN
	{
		::KNHNLPIHONJ_BlobLabel MOPDMGOHKJC; // 0x10
		::System::Boolean GPFPJDAHIOF; // 0x14
		::System::Void _ctor(::KNHNLPIHONJ_BlobLabel a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNHNLPIHONJ_BlobLabel))((::PBYTE)hIl2Cpp + KNHNLPIHONJ_AEGIMKEALPN_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHNLPIHONJ_AEGIMKEALPN_DISPOSE_OFFSET))(this);
		}

	};
