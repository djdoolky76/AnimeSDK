#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KACKDABLHCM;

#define NACEPHIIJJA_FNKEAFMJDDC_NMNFEDJIHPB_OFFSET UNITYSDK_OFFSET(0x12C2F020)
#define NACEPHIIJJA_FNKEAFMJDDC__CTOR_OFFSET UNITYSDK_OFFSET(0x12C2F010)

inline static constexpr unsigned int NACEPHIIJJA_FNKEAFMJDDC_TypeDefinitionIndex = 60152;

class NACEPHIIJJA_FNKEAFMJDDC : public ::System::Object
{
public:
	::System::Int32 NJEMNLDCHNN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NACEPHIIJJA_FNKEAFMJDDC__CTOR_OFFSET))(this);
	}

	::System::Boolean NMNFEDJIHPB(::KACKDABLHCM* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::KACKDABLHCM*))((::PBYTE)hIl2Cpp + NACEPHIIJJA_FNKEAFMJDDC_NMNFEDJIHPB_OFFSET))(this, HAAEBCOBKFF);
	}
};
