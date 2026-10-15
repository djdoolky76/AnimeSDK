#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGMLCIIHJDI;
class KCLIKAPODAD;
class OADLCEKKGBC;

#define EMNFLDMLOBE_CTOR_OFFSET UNITYSDK_OFFSET(0x15559300)
#define EMNFLDMLOBE_JKIBFIBAMKB_OFFSET UNITYSDK_OFFSET(0x15559390)

inline static constexpr unsigned int EMNFLDMLOBE_TypeDefinitionIndex = 62870;

	class EMNFLDMLOBE : public ::System::Object
	{
	public:
		::OADLCEKKGBC* AAMACNCICKH; // 0x10
		::IGMLCIIHJDI* MGBPOBFFCHD; // 0x18
		::System::Void _ctor(::OADLCEKKGBC* a1, ::IGMLCIIHJDI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OADLCEKKGBC*, ::IGMLCIIHJDI*))((::PBYTE)hIl2Cpp + EMNFLDMLOBE_CTOR_OFFSET))(this, a1, a2);
		}

		::KCLIKAPODAD* JKIBFIBAMKB()
		{
			return ((::KCLIKAPODAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMNFLDMLOBE_JKIBFIBAMKB_OFFSET))(this);
		}

	};
