#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJIEIHEDMME;

#define GEBBOAMJHKL_BCMAMPHFHKM_OFFSET UNITYSDK_OFFSET(0x16CAEBA0)
#define GEBBOAMJHKL__CTOR_OFFSET UNITYSDK_OFFSET(0x16CAEB90)

inline static constexpr unsigned int GEBBOAMJHKL_TypeDefinitionIndex = 56192;

class GEBBOAMJHKL : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEBBOAMJHKL__CTOR_OFFSET))(this);
	}

	static ::System::Int32 BCMAMPHFHKM(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Int32(*)(::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + GEBBOAMJHKL_BCMAMPHFHKM_OFFSET))(LADPIPOMBJM);
	}
};
