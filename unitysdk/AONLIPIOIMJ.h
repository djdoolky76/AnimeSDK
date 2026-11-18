#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BLCIDFMMHIL;

#define AONLIPIOIMJ_DFAKOGHLCMO_OFFSET UNITYSDK_OFFSET(0xF77CA40)
#define AONLIPIOIMJ_GIDLHDLPHIL_OFFSET UNITYSDK_OFFSET(0xF77CC80)
#define AONLIPIOIMJ__CTOR_OFFSET UNITYSDK_OFFSET(0xF77CDE0)

inline static constexpr unsigned int AONLIPIOIMJ_TypeDefinitionIndex = 86918;

class AONLIPIOIMJ : public ::System::Object
{
public:
	::BLCIDFMMHIL* JGHIAHDDIDA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AONLIPIOIMJ__CTOR_OFFSET))(this);
	}

	::System::Boolean DFAKOGHLCMO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AONLIPIOIMJ_DFAKOGHLCMO_OFFSET))(this);
	}

	::System::Boolean GIDLHDLPHIL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AONLIPIOIMJ_GIDLHDLPHIL_OFFSET))(this);
	}
};
