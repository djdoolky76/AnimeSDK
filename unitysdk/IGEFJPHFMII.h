#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LEMPCCICHAA.h"
namespace System { class String; }

#define IGEFJPHFMII_CTOR_OFFSET UNITYSDK_OFFSET(0x1640A5F0)
#define IGEFJPHFMII_KAJOBJFIAMJ_OFFSET UNITYSDK_OFFSET(0x1640A580)

	class IGEFJPHFMII : public ::LEMPCCICHAA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGEFJPHFMII_CTOR_OFFSET))(this);
		}

		::System::String* KAJOBJFIAMJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGEFJPHFMII_KAJOBJFIAMJ_OFFSET))(this);
		}

	};
