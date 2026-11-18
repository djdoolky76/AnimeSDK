#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

class DEAKMFEBBIN_EEIFCEFAHEL;

#define DEAKMFEBBIN_IJGPIDHKBIC_NPIIOHMOELA_OFFSET UNITYSDK_OFFSET(0x19D59D00)
#define DEAKMFEBBIN_IJGPIDHKBIC__CTOR_OFFSET UNITYSDK_OFFSET(0x19D59CF0)

inline static constexpr unsigned int DEAKMFEBBIN_IJGPIDHKBIC_TypeDefinitionIndex = 67717;

class DEAKMFEBBIN_IJGPIDHKBIC : public ::System::Object
{
public:
	::DEAKMFEBBIN_EEIFCEFAHEL* FGBNBFHOKAA; // 0x10
	::Foundation::Coroutine::CoroutineHandle PHHDHIBOCKA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAKMFEBBIN_IJGPIDHKBIC__CTOR_OFFSET))(this);
	}

	::System::Void NPIIOHMOELA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAKMFEBBIN_IJGPIDHKBIC_NPIIOHMOELA_OFFSET))(this);
	}
};
