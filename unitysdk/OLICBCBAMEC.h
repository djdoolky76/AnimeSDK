#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GDJAILOIBIM.h"

namespace System { class String; }

#define OLICBCBAMEC_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x11B42CD0)
#define OLICBCBAMEC_EGFJBNHOKHG_OFFSET UNITYSDK_OFFSET(0x11B42CE0)
#define OLICBCBAMEC_IHDMEAEFLCH_OFFSET UNITYSDK_OFFSET(0x11B42D50)
#define OLICBCBAMEC_PEKICGEIHLD_OFFSET UNITYSDK_OFFSET(0x11B42F50)
#define OLICBCBAMEC__CTOR_OFFSET UNITYSDK_OFFSET(0x11B43170)

inline static constexpr unsigned int OLICBCBAMEC_TypeDefinitionIndex = 58640;

class OLICBCBAMEC : public ::GDJAILOIBIM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLICBCBAMEC__CTOR_OFFSET))(this);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLICBCBAMEC_APCKPKCNFJE_OFFSET))(this);
	}

	::System::Boolean EGFJBNHOKHG(::System::String*& MCOHLHMKLIP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + OLICBCBAMEC_EGFJBNHOKHG_OFFSET))(this, MCOHLHMKLIP);
	}

	static ::System::Boolean IHDMEAEFLCH(::System::String*& MCOHLHMKLIP)
	{
		return ((::System::Boolean(*)(::System::String*&))((::PBYTE)hIl2Cpp + OLICBCBAMEC_IHDMEAEFLCH_OFFSET))(MCOHLHMKLIP);
	}

	static ::System::Boolean PEKICGEIHLD(::System::String*& MCOHLHMKLIP)
	{
		return ((::System::Boolean(*)(::System::String*&))((::PBYTE)hIl2Cpp + OLICBCBAMEC_PEKICGEIHLD_OFFSET))(MCOHLHMKLIP);
	}
};
