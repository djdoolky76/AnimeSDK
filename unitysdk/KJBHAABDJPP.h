#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJIEIHEDMME;
namespace System { class String; }

#define KJBHAABDJPP_PAGBJIPEPNO_OFFSET UNITYSDK_OFFSET(0x15B93A70)
#define KJBHAABDJPP__CTOR_OFFSET UNITYSDK_OFFSET(0x15B93A60)

inline static constexpr unsigned int KJBHAABDJPP_TypeDefinitionIndex = 51114;

class KJBHAABDJPP : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJBHAABDJPP__CTOR_OFFSET))(this);
	}

	static ::System::String* PAGBJIPEPNO(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::String*(*)(::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + KJBHAABDJPP_PAGBJIPEPNO_OFFSET))(LADPIPOMBJM);
	}
};
