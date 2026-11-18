#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BIMJHGOMMMI;
class CIFBOKELGMC;

#define HGKJHKLMIFE_PANNCIANDFF_JGENMCPANHM_OFFSET UNITYSDK_OFFSET(0x15B48B50)
#define HGKJHKLMIFE_PANNCIANDFF__CTOR_OFFSET UNITYSDK_OFFSET(0x15B48B40)

inline static constexpr unsigned int HGKJHKLMIFE_PANNCIANDFF_TypeDefinitionIndex = 49484;

class HGKJHKLMIFE_PANNCIANDFF : public ::System::Object
{
public:
	::BIMJHGOMMMI* ECCGHEFMJDA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKJHKLMIFE_PANNCIANDFF__CTOR_OFFSET))(this);
	}

	::System::Boolean JGENMCPANHM(::CIFBOKELGMC* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::CIFBOKELGMC*))((::PBYTE)hIl2Cpp + HGKJHKLMIFE_PANNCIANDFF_JGENMCPANHM_OFFSET))(this, HAAEBCOBKFF);
	}
};
