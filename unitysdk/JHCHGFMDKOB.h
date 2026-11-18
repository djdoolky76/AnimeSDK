#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJENDAPFHMC.h"
#include "unitysdk/System/Object.h"

#define JHCHGFMDKOB_EBBPFEMNOKI_OFFSET UNITYSDK_OFFSET(0x1E1CB200)
#define JHCHGFMDKOB_GDGENGCOEFP_OFFSET UNITYSDK_OFFSET(0x1E1CB1C0)
#define JHCHGFMDKOB_IAODGFFBJEJ_OFFSET UNITYSDK_OFFSET(0x1E1CB180)
#define JHCHGFMDKOB_PIOPCDKLKHK_OFFSET UNITYSDK_OFFSET(0x1E1CB140)

inline static constexpr unsigned int JHCHGFMDKOB_TypeDefinitionIndex = 93839;

class JHCHGFMDKOB : public ::System::Object
{
public:
	static ::System::Boolean PIOPCDKLKHK(::MJENDAPFHMC JKBLDFBGBPK)
	{
		return ((::System::Boolean(*)(::MJENDAPFHMC))((::PBYTE)hIl2Cpp + JHCHGFMDKOB_PIOPCDKLKHK_OFFSET))(JKBLDFBGBPK);
	}

	static ::System::Boolean IAODGFFBJEJ(::MJENDAPFHMC JKBLDFBGBPK)
	{
		return ((::System::Boolean(*)(::MJENDAPFHMC))((::PBYTE)hIl2Cpp + JHCHGFMDKOB_IAODGFFBJEJ_OFFSET))(JKBLDFBGBPK);
	}

	static ::System::Boolean GDGENGCOEFP(::MJENDAPFHMC JKBLDFBGBPK)
	{
		return ((::System::Boolean(*)(::MJENDAPFHMC))((::PBYTE)hIl2Cpp + JHCHGFMDKOB_GDGENGCOEFP_OFFSET))(JKBLDFBGBPK);
	}

	static ::System::Boolean EBBPFEMNOKI(::MJENDAPFHMC JKBLDFBGBPK)
	{
		return ((::System::Boolean(*)(::MJENDAPFHMC))((::PBYTE)hIl2Cpp + JHCHGFMDKOB_EBBPFEMNOKI_OFFSET))(JKBLDFBGBPK);
	}
};
