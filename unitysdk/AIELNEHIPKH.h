#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GLEINMCDBFC;

#define AIELNEHIPKH__CTOR_OFFSET UNITYSDK_OFFSET(0x14358390)

inline static constexpr unsigned int AIELNEHIPKH_TypeDefinitionIndex = 54505;

class AIELNEHIPKH : public ::System::Object
{
public:
	::GLEINMCDBFC* JMINOGAOFIL; // 0x10
	::System::Boolean NAIOJJBNFEH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIELNEHIPKH__CTOR_OFFSET))(this);
	}
};
