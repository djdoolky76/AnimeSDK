#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/EOAHOOCNDHM.h"

#define AEIFDABEMAO_DBLKNCELBOA_OFFSET UNITYSDK_OFFSET(0x11B91A10)
#define AEIFDABEMAO_DNDBFNJGMFE_OFFSET UNITYSDK_OFFSET(0x11B91A90)
#define AEIFDABEMAO_OMJECMNKBMO_1_OFFSET UNITYSDK_OFFSET(0x11B91810)
#define AEIFDABEMAO_OMJECMNKBMO_OFFSET UNITYSDK_OFFSET(0x11B916F0)
#define AEIFDABEMAO__CTOR_OFFSET UNITYSDK_OFFSET(0x11B91A80)

inline static constexpr unsigned int AEIFDABEMAO_TypeDefinitionIndex = 41088;

class AEIFDABEMAO : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEIFDABEMAO__CTOR_OFFSET))(this);
	}

	::EOAHOOCNDHM OMJECMNKBMO(::System::Int32 EGEGIMGMJHN)
	{
		return ((::EOAHOOCNDHM(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AEIFDABEMAO_OMJECMNKBMO_OFFSET))(this, EGEGIMGMJHN);
	}

	::EOAHOOCNDHM OMJECMNKBMO_1(::System::Object* EGEGIMGMJHN)
	{
		return ((::EOAHOOCNDHM(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AEIFDABEMAO_OMJECMNKBMO_1_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean DBLKNCELBOA(::EOAHOOCNDHM& EGEGIMGMJHN, ::System::Int32& HFMHOELKCAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::EOAHOOCNDHM&, ::System::Int32&))((::PBYTE)hIl2Cpp + AEIFDABEMAO_DBLKNCELBOA_OFFSET))(this, EGEGIMGMJHN, HFMHOELKCAJ);
	}

	::System::Boolean DNDBFNJGMFE(::EOAHOOCNDHM& EGEGIMGMJHN, ::System::Int32& HFMHOELKCAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::EOAHOOCNDHM&, ::System::Int32&))((::PBYTE)hIl2Cpp + AEIFDABEMAO_DNDBFNJGMFE_OFFSET))(this, EGEGIMGMJHN, HFMHOELKCAJ);
	}
};
