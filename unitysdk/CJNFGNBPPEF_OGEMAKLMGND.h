#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CJNFGNBPPEF_OGEMAKLMGND_FHPMLOLKCOE_OFFSET UNITYSDK_OFFSET(0x1A1B6A40)
#define CJNFGNBPPEF_OGEMAKLMGND__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1B6A30)

inline static constexpr unsigned int CJNFGNBPPEF_OGEMAKLMGND_TypeDefinitionIndex = 50424;

class CJNFGNBPPEF_OGEMAKLMGND : public ::System::Object
{
public:
	::System::Int32 CHCDKNEEIGG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNFGNBPPEF_OGEMAKLMGND__CTOR_OFFSET))(this);
	}

	static ::CJNFGNBPPEF_OGEMAKLMGND* FHPMLOLKCOE(::System::Int32 OIKFFGKDHME)
	{
		return ((::CJNFGNBPPEF_OGEMAKLMGND*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CJNFGNBPPEF_OGEMAKLMGND_FHPMLOLKCOE_OFFSET))(OIKFFGKDHME);
	}
};
