#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define OFDOAKBCILC_CTOR_OFFSET UNITYSDK_OFFSET(0xBE3DC00)

	class OFDOAKBCILC : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDOAKBCILC_CTOR_OFFSET))(this);
		}

	};
