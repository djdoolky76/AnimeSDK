#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/EOAHOOCNDHM.h"

#define PEHPGILKCAM_DBLKNCELBOA_OFFSET UNITYSDK_OFFSET(0x1A7ED560)
#define PEHPGILKCAM_IKDMKGGAMFC_OFFSET UNITYSDK_OFFSET(0x1A7ED5E0)
#define PEHPGILKCAM_OMJECMNKBMO_OFFSET UNITYSDK_OFFSET(0x1A7ED4A0)
#define PEHPGILKCAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7ED5D0)

inline static constexpr unsigned int PEHPGILKCAM_TypeDefinitionIndex = 86115;

class PEHPGILKCAM : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEHPGILKCAM__CTOR_OFFSET))(this);
	}

	::EOAHOOCNDHM OMJECMNKBMO(::System::Object* EGEGIMGMJHN)
	{
		return ((::EOAHOOCNDHM(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PEHPGILKCAM_OMJECMNKBMO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean DBLKNCELBOA(::EOAHOOCNDHM& EGEGIMGMJHN, ::System::Object*& HFMHOELKCAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::EOAHOOCNDHM&, ::System::Object*&))((::PBYTE)hIl2Cpp + PEHPGILKCAM_DBLKNCELBOA_OFFSET))(this, EGEGIMGMJHN, HFMHOELKCAJ);
	}

	::System::Boolean IKDMKGGAMFC(::EOAHOOCNDHM& EGEGIMGMJHN, ::System::Object*& HFMHOELKCAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::EOAHOOCNDHM&, ::System::Object*&))((::PBYTE)hIl2Cpp + PEHPGILKCAM_IKDMKGGAMFC_OFFSET))(this, EGEGIMGMJHN, HFMHOELKCAJ);
	}
};
