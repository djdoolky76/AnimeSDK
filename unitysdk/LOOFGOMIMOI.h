#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/EOAHOOCNDHM.h"

#define LOOFGOMIMOI_DBLKNCELBOA_OFFSET UNITYSDK_OFFSET(0x151B5830)
#define LOOFGOMIMOI_LAEDJIBGDHI_OFFSET UNITYSDK_OFFSET(0x151B58B0)
#define LOOFGOMIMOI_OMJECMNKBMO_1_OFFSET UNITYSDK_OFFSET(0x151B5630)
#define LOOFGOMIMOI_OMJECMNKBMO_OFFSET UNITYSDK_OFFSET(0x151B5510)
#define LOOFGOMIMOI__CTOR_OFFSET UNITYSDK_OFFSET(0x151B58A0)

inline static constexpr unsigned int LOOFGOMIMOI_TypeDefinitionIndex = 50061;

class LOOFGOMIMOI : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOOFGOMIMOI__CTOR_OFFSET))(this);
	}

	::EOAHOOCNDHM OMJECMNKBMO(::System::Double EGEGIMGMJHN)
	{
		return ((::EOAHOOCNDHM(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + LOOFGOMIMOI_OMJECMNKBMO_OFFSET))(this, EGEGIMGMJHN);
	}

	::EOAHOOCNDHM OMJECMNKBMO_1(::System::Object* EGEGIMGMJHN)
	{
		return ((::EOAHOOCNDHM(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LOOFGOMIMOI_OMJECMNKBMO_1_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean DBLKNCELBOA(::EOAHOOCNDHM& EGEGIMGMJHN, ::System::Double& HFMHOELKCAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::EOAHOOCNDHM&, ::System::Double&))((::PBYTE)hIl2Cpp + LOOFGOMIMOI_DBLKNCELBOA_OFFSET))(this, EGEGIMGMJHN, HFMHOELKCAJ);
	}

	::System::Boolean LAEDJIBGDHI(::EOAHOOCNDHM& EGEGIMGMJHN, ::System::Double& HFMHOELKCAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::EOAHOOCNDHM&, ::System::Double&))((::PBYTE)hIl2Cpp + LOOFGOMIMOI_LAEDJIBGDHI_OFFSET))(this, EGEGIMGMJHN, HFMHOELKCAJ);
	}
};
