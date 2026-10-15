#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EHDCFBBIJIM.h"
namespace System { class String; }

#define LEMPCCICHAA_CTOR_OFFSET UNITYSDK_OFFSET(0xB65DB60)
#define LEMPCCICHAA_GAGLFGLKEOJ_OFFSET UNITYSDK_OFFSET(0xB65DA60)

	class LEMPCCICHAA : public ::EHDCFBBIJIM
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEMPCCICHAA_CTOR_OFFSET))(this);
		}

		::System::String* GAGLFGLKEOJ(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LEMPCCICHAA_GAGLFGLKEOJ_OFFSET))(this, a1);
		}

	};
