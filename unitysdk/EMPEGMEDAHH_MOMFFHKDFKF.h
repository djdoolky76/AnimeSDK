#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JEHLBFOILMA;

#define EMPEGMEDAHH_MOMFFHKDFKF_JMCCDIENBFO_OFFSET UNITYSDK_OFFSET(0x169B2B60)
#define EMPEGMEDAHH_MOMFFHKDFKF__CTOR_OFFSET UNITYSDK_OFFSET(0x169B2B50)

inline static constexpr unsigned int EMPEGMEDAHH_MOMFFHKDFKF_TypeDefinitionIndex = 44722;

class EMPEGMEDAHH_MOMFFHKDFKF : public ::System::Object
{
public:
	::System::Int32 ADFNJNOELMG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPEGMEDAHH_MOMFFHKDFKF__CTOR_OFFSET))(this);
	}

	::System::Boolean JMCCDIENBFO(::JEHLBFOILMA* EMIKCAHJLGB)
	{
		return ((::System::Boolean(*)(::PVOID, ::JEHLBFOILMA*))((::PBYTE)hIl2Cpp + EMPEGMEDAHH_MOMFFHKDFKF_JMCCDIENBFO_OFFSET))(this, EMIKCAHJLGB);
	}
};
