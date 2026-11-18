#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }

#define OIBDKPJMDLO_LHEAOEPDAEL_CMAKJDHDIKD_OFFSET UNITYSDK_OFFSET(0xF1943A0)
#define OIBDKPJMDLO_LHEAOEPDAEL_EOCMNEOEGDL_OFFSET UNITYSDK_OFFSET(0xF1944B0)
#define OIBDKPJMDLO_LHEAOEPDAEL_HLJDNOOHEEE_OFFSET UNITYSDK_OFFSET(0xF194320)
#define OIBDKPJMDLO_LHEAOEPDAEL_JJLGIFMBIHD_OFFSET UNITYSDK_OFFSET(0xF194430)
#define OIBDKPJMDLO_LHEAOEPDAEL__CTOR_OFFSET UNITYSDK_OFFSET(0xF194310)

inline static constexpr unsigned int OIBDKPJMDLO_LHEAOEPDAEL_TypeDefinitionIndex = 52480;

class OIBDKPJMDLO_LHEAOEPDAEL : public ::System::Object
{
public:
	::UnityEngine::Material* EBIDGDBLDPI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIBDKPJMDLO_LHEAOEPDAEL__CTOR_OFFSET))(this);
	}

	::System::Single HLJDNOOHEEE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OIBDKPJMDLO_LHEAOEPDAEL_HLJDNOOHEEE_OFFSET))(this);
	}

	::System::Void CMAKJDHDIKD(::System::Single HAAEBCOBKFF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OIBDKPJMDLO_LHEAOEPDAEL_CMAKJDHDIKD_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::Single JJLGIFMBIHD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OIBDKPJMDLO_LHEAOEPDAEL_JJLGIFMBIHD_OFFSET))(this);
	}

	::System::Void EOCMNEOEGDL(::System::Single HAAEBCOBKFF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OIBDKPJMDLO_LHEAOEPDAEL_EOCMNEOEGDL_OFFSET))(this, HAAEBCOBKFF);
	}
};
