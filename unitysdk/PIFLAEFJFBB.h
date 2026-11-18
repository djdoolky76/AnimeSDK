#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/EOAHOOCNDHM.h"

#define PIFLAEFJFBB_DBLKNCELBOA_OFFSET UNITYSDK_OFFSET(0x1A7F4270)
#define PIFLAEFJFBB_LOJLDGNPJMG_OFFSET UNITYSDK_OFFSET(0x1A7F42F0)
#define PIFLAEFJFBB_OMJECMNKBMO_1_OFFSET UNITYSDK_OFFSET(0x1A7F4070)
#define PIFLAEFJFBB_OMJECMNKBMO_OFFSET UNITYSDK_OFFSET(0x1A7F3F50)
#define PIFLAEFJFBB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7F42E0)

inline static constexpr unsigned int PIFLAEFJFBB_TypeDefinitionIndex = 73362;

class PIFLAEFJFBB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFLAEFJFBB__CTOR_OFFSET))(this);
	}

	::EOAHOOCNDHM OMJECMNKBMO(::System::Int64 EGEGIMGMJHN)
	{
		return ((::EOAHOOCNDHM(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PIFLAEFJFBB_OMJECMNKBMO_OFFSET))(this, EGEGIMGMJHN);
	}

	::EOAHOOCNDHM OMJECMNKBMO_1(::System::Object* EGEGIMGMJHN)
	{
		return ((::EOAHOOCNDHM(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PIFLAEFJFBB_OMJECMNKBMO_1_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean DBLKNCELBOA(::EOAHOOCNDHM& EGEGIMGMJHN, ::System::Int64& HFMHOELKCAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::EOAHOOCNDHM&, ::System::Int64&))((::PBYTE)hIl2Cpp + PIFLAEFJFBB_DBLKNCELBOA_OFFSET))(this, EGEGIMGMJHN, HFMHOELKCAJ);
	}

	::System::Boolean LOJLDGNPJMG(::EOAHOOCNDHM& EGEGIMGMJHN, ::System::Int64& HFMHOELKCAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::EOAHOOCNDHM&, ::System::Int64&))((::PBYTE)hIl2Cpp + PIFLAEFJFBB_LOJLDGNPJMG_OFFSET))(this, EGEGIMGMJHN, HFMHOELKCAJ);
	}
};
