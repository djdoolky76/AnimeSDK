#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AGFBDEFDLAM;

#define IDNIOLMFLDD_ODMOGPLLEKP_FIGDBNOKOCO_OFFSET UNITYSDK_OFFSET(0x10138270)
#define IDNIOLMFLDD_ODMOGPLLEKP__CTOR_OFFSET UNITYSDK_OFFSET(0x10138260)

inline static constexpr unsigned int IDNIOLMFLDD_ODMOGPLLEKP_TypeDefinitionIndex = 38327;

class IDNIOLMFLDD_ODMOGPLLEKP : public ::System::Object
{
public:
	::AGFBDEFDLAM* IKHHLFCGLBP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNIOLMFLDD_ODMOGPLLEKP__CTOR_OFFSET))(this);
	}

	::System::Void FIGDBNOKOCO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNIOLMFLDD_ODMOGPLLEKP_FIGDBNOKOCO_OFFSET))(this);
	}
};
