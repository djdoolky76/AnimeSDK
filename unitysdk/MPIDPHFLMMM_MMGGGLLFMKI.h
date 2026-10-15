#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Nullable; }

#define MPIDPHFLMMM_MMGGGLLFMKI_CTOR_OFFSET UNITYSDK_OFFSET(0xBA3F160)

	class MPIDPHFLMMM_MMGGGLLFMKI : public ::System::Object
	{
	public:
		::System::Nullable* HPBGIIOKMJI; // 0x10
		::System::Nullable* CJAFEEMMPOA; // 0x18
		::System::Nullable* HIBKHCCFHIL; // 0x20
		::System::Nullable* DFCFMGBFHJF; // 0x28
		::System::Int32 JKDKLDPDMEJ; // 0x30
		::System::Nullable* EEDKFIGLBCM; // 0x34
		::System::Nullable* FEPLAKMAPKA; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPIDPHFLMMM_MMGGGLLFMKI_CTOR_OFFSET))(this);
		}

	};
