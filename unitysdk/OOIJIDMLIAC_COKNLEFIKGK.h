#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OOIJIDMLIAC_COKGMOGPHBA;

#define OOIJIDMLIAC_COKNLEFIKGK_EFJOGMAAHHF_OFFSET UNITYSDK_OFFSET(0x16F90390)
#define OOIJIDMLIAC_COKNLEFIKGK__CTOR_OFFSET UNITYSDK_OFFSET(0x16F90380)

inline static constexpr unsigned int OOIJIDMLIAC_COKNLEFIKGK_TypeDefinitionIndex = 70896;

class OOIJIDMLIAC_COKNLEFIKGK : public ::System::Object
{
public:
	::OOIJIDMLIAC_COKGMOGPHBA* EEMOEMFLABI; // 0x10
	::System::Int32 GLPGONDHMLI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIJIDMLIAC_COKNLEFIKGK__CTOR_OFFSET))(this);
	}

	::System::Boolean EFJOGMAAHHF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIJIDMLIAC_COKNLEFIKGK_EFJOGMAAHHF_OFFSET))(this);
	}
};
