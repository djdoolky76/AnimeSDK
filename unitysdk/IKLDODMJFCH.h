#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DLLLACFEBJF.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NEIGJHNJNFL.h"

#define IKLDODMJFCH_ELIAOOOHLGG_OFFSET UNITYSDK_OFFSET(0x1657E3D0)
#define IKLDODMJFCH_KMLCNCFMAJB_1_OFFSET UNITYSDK_OFFSET(0x1657E630)
#define IKLDODMJFCH_KMLCNCFMAJB_OFFSET UNITYSDK_OFFSET(0x1657E4F0)
#define IKLDODMJFCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1657E3C0)

inline static constexpr unsigned int IKLDODMJFCH_TypeDefinitionIndex = 81105;

class IKLDODMJFCH : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLDODMJFCH__CTOR_OFFSET))(this);
	}

	::System::Void ELIAOOOHLGG(::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + IKLDODMJFCH_ELIAOOOHLGG_OFFSET))(this, DIHNFECKHMD);
	}

	::System::Void KMLCNCFMAJB(::System::Int32 COMDNFILAIC, ::DLLLACFEBJF JPJBIBPBODE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::DLLLACFEBJF))((::PBYTE)hIl2Cpp + IKLDODMJFCH_KMLCNCFMAJB_OFFSET))(this, COMDNFILAIC, JPJBIBPBODE);
	}

	::System::Void KMLCNCFMAJB_1(::DLLLACFEBJF JPJBIBPBODE)
	{
		return ((::System::Void(*)(::PVOID, ::DLLLACFEBJF))((::PBYTE)hIl2Cpp + IKLDODMJFCH_KMLCNCFMAJB_1_OFFSET))(this, JPJBIBPBODE);
	}
};
