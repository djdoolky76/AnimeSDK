#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGLIFHIAIEH.h"
#include "unitysdk/System/Object.h"

#define GLMBBIOPNLM__CTOR_OFFSET UNITYSDK_OFFSET(0x14CFB3E0)

inline static constexpr unsigned int GLMBBIOPNLM_TypeDefinitionIndex = 84726;

class GLMBBIOPNLM : public ::System::Object
{
public:
	::System::UInt32 DJJGLILJKEA; // 0x10
	::System::UInt32 DOIGGLOKNML; // 0x14
	::JGLIFHIAIEH ILOJFPNKJII; // 0x18
	::System::UInt32 LEEJEBIJDPL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMBBIOPNLM__CTOR_OFFSET))(this);
	}
};
