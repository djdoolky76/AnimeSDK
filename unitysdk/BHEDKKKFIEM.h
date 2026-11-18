#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/EOAHOOCNDHM.h"

namespace System { class String; }

#define BHEDKKKFIEM_DBLKNCELBOA_OFFSET UNITYSDK_OFFSET(0x11505320)
#define BHEDKKKFIEM_NODMPILPIJH_OFFSET UNITYSDK_OFFSET(0x115053A0)
#define BHEDKKKFIEM_OMJECMNKBMO_1_OFFSET UNITYSDK_OFFSET(0x11505110)
#define BHEDKKKFIEM_OMJECMNKBMO_OFFSET UNITYSDK_OFFSET(0x11504FF0)
#define BHEDKKKFIEM__CTOR_OFFSET UNITYSDK_OFFSET(0x11505390)

inline static constexpr unsigned int BHEDKKKFIEM_TypeDefinitionIndex = 91909;

class BHEDKKKFIEM : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHEDKKKFIEM__CTOR_OFFSET))(this);
	}

	::EOAHOOCNDHM OMJECMNKBMO(::System::String* EGEGIMGMJHN)
	{
		return ((::EOAHOOCNDHM(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BHEDKKKFIEM_OMJECMNKBMO_OFFSET))(this, EGEGIMGMJHN);
	}

	::EOAHOOCNDHM OMJECMNKBMO_1(::System::Object* EGEGIMGMJHN)
	{
		return ((::EOAHOOCNDHM(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BHEDKKKFIEM_OMJECMNKBMO_1_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean DBLKNCELBOA(::EOAHOOCNDHM& EGEGIMGMJHN, ::System::String*& HFMHOELKCAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::EOAHOOCNDHM&, ::System::String*&))((::PBYTE)hIl2Cpp + BHEDKKKFIEM_DBLKNCELBOA_OFFSET))(this, EGEGIMGMJHN, HFMHOELKCAJ);
	}

	::System::Boolean NODMPILPIJH(::EOAHOOCNDHM& EGEGIMGMJHN, ::System::String*& HFMHOELKCAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::EOAHOOCNDHM&, ::System::String*&))((::PBYTE)hIl2Cpp + BHEDKKKFIEM_NODMPILPIJH_OFFSET))(this, EGEGIMGMJHN, HFMHOELKCAJ);
	}
};
