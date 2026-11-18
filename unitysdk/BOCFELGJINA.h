#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANJGEPEJADI.h"
#include "unitysdk/System/Object.h"

#define BOCFELGJINA_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x18588440)
#define BOCFELGJINA_ILEEFLAOOOM_OFFSET UNITYSDK_OFFSET(0x185884A0)
#define BOCFELGJINA__CTOR_OFFSET UNITYSDK_OFFSET(0x18588510)

inline static constexpr unsigned int BOCFELGJINA_TypeDefinitionIndex = 64468;

class BOCFELGJINA : public ::System::Object
{
public:
	::ANJGEPEJADI KKNEENIHPFJ; // 0x10
	::ANJGEPEJADI PJFNIPABPDL; // 0x30
	::System::Boolean IJEDJOIFJOM; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCFELGJINA__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCFELGJINA_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 ILEEFLAOOOM()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCFELGJINA_ILEEFLAOOOM_OFFSET))(this);
	}
};
