#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GLDOBMNLEOJ.h"
#include "unitysdk/System/Object.h"

#define NODDFJOBNND_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x11F8E500)
#define NODDFJOBNND__CTOR_OFFSET UNITYSDK_OFFSET(0x11F8E4F0)

inline static constexpr unsigned int NODDFJOBNND_TypeDefinitionIndex = 59033;

class NODDFJOBNND : public ::System::Object
{
public:
	::GLDOBMNLEOJ OCOJFKMOKMK; // 0x10
	::System::Single COFOHOFOLHO; // 0x14
	::System::Boolean EJHFFDBOPCD; // 0x18
	::System::Boolean GHLDDLDPPLC; // 0x19
	::System::Boolean DDMIAALDBND; // 0x1A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODDFJOBNND__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODDFJOBNND_PHOADBJGFBE_OFFSET))(this);
	}
};
