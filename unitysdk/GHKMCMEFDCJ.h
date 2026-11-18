#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/EOAHOOCNDHM.h"

#define GHKMCMEFDCJ_BBIGNDJPFGF_OFFSET UNITYSDK_OFFSET(0x116F77A0)
#define GHKMCMEFDCJ_DBLKNCELBOA_OFFSET UNITYSDK_OFFSET(0x116F7710)
#define GHKMCMEFDCJ_OMJECMNKBMO_1_OFFSET UNITYSDK_OFFSET(0x116F7510)
#define GHKMCMEFDCJ_OMJECMNKBMO_OFFSET UNITYSDK_OFFSET(0x116F73F0)
#define GHKMCMEFDCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x116F7790)

inline static constexpr unsigned int GHKMCMEFDCJ_TypeDefinitionIndex = 89765;

class GHKMCMEFDCJ : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHKMCMEFDCJ__CTOR_OFFSET))(this);
	}

	::EOAHOOCNDHM OMJECMNKBMO(::System::UInt64 EGEGIMGMJHN)
	{
		return ((::EOAHOOCNDHM(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + GHKMCMEFDCJ_OMJECMNKBMO_OFFSET))(this, EGEGIMGMJHN);
	}

	::EOAHOOCNDHM OMJECMNKBMO_1(::System::Object* EGEGIMGMJHN)
	{
		return ((::EOAHOOCNDHM(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GHKMCMEFDCJ_OMJECMNKBMO_1_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean DBLKNCELBOA(::EOAHOOCNDHM& EGEGIMGMJHN, ::System::UInt64& HFMHOELKCAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::EOAHOOCNDHM&, ::System::UInt64&))((::PBYTE)hIl2Cpp + GHKMCMEFDCJ_DBLKNCELBOA_OFFSET))(this, EGEGIMGMJHN, HFMHOELKCAJ);
	}

	::System::Boolean BBIGNDJPFGF(::EOAHOOCNDHM& EGEGIMGMJHN, ::System::UInt64& HFMHOELKCAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::EOAHOOCNDHM&, ::System::UInt64&))((::PBYTE)hIl2Cpp + GHKMCMEFDCJ_BBIGNDJPFGF_OFFSET))(this, EGEGIMGMJHN, HFMHOELKCAJ);
	}
};
