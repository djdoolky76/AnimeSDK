#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGMMFJHJECA.h"

#define ABDEIMLGPPP_CTOR_OFFSET UNITYSDK_OFFSET(0xB0F02E0)
#define ABDEIMLGPPP_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xB0F01A0)

	class ABDEIMLGPPP : public ::HGMMFJHJECA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABDEIMLGPPP_CTOR_OFFSET))(this);
		}

		::System::Double KFGJEKJHIMB()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ABDEIMLGPPP_KFGJEKJHIMB_OFFSET))(this);
		}

	};
