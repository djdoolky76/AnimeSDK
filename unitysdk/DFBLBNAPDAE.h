#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMIIBJINHNI;
class PBHJHNFMFDH;

#define DFBLBNAPDAE_CTOR_OFFSET UNITYSDK_OFFSET(0xE824370)
#define DFBLBNAPDAE_KMBEGBMJLND_OFFSET UNITYSDK_OFFSET(0xE8242A0)
#define DFBLBNAPDAE_LKLNNBDFAGH_OFFSET UNITYSDK_OFFSET(0xE8241D0)

	class DFBLBNAPDAE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBLBNAPDAE_CTOR_OFFSET))(this);
		}

		::DMIIBJINHNI* LKLNNBDFAGH(::System::UInt32 a1)
		{
			return ((::DMIIBJINHNI*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DFBLBNAPDAE_LKLNNBDFAGH_OFFSET))(this, a1);
		}

		::PBHJHNFMFDH* KMBEGBMJLND(::System::UInt32 a1)
		{
			return ((::PBHJHNFMFDH*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DFBLBNAPDAE_KMBEGBMJLND_OFFSET))(this, a1);
		}

	};
