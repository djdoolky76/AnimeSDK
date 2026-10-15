#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DFBAHCICJNE.h"
namespace System { class String; }

#define MMKNKAOADLH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4BC9F0)
#define MMKNKAOADLH_FIOHPNNGKAM_OFFSET UNITYSDK_OFFSET(0x1C4BCA50)
#define MMKNKAOADLH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C4BCAA0)

	class MMKNKAOADLH : public ::DFBAHCICJNE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKNKAOADLH_CTOR_OFFSET))(this);
		}

		::System::String* FIOHPNNGKAM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKNKAOADLH_FIOHPNNGKAM_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKNKAOADLH_TOSTRING_OFFSET))(this);
		}

	};
