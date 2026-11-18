#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class CAOKACBLMBH;

#define MOLEMOLE_UNLOCKDISPLAYMESSAGE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x170DC420)
#define MOLEMOLE_UNLOCKDISPLAYMESSAGE_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x170DC460)
#define MOLEMOLE_UNLOCKDISPLAYMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x170DC430)

namespace MoleMole
{
	inline static constexpr unsigned int UnlockDisplayMessage_TypeDefinitionIndex = 78982;

	class UnlockDisplayMessage : public ::MoleMole::DisplayMessageBase
	{
	public:
		::CAOKACBLMBH* unlockConfig; // 0x28

		::System::Void _ctor(::CAOKACBLMBH* unlockConfig)
		{
			return ((::System::Void(*)(::PVOID, ::CAOKACBLMBH*))((::PBYTE)hIl2Cpp + MOLEMOLE_UNLOCKDISPLAYMESSAGE__CTOR_OFFSET))(this, unlockConfig);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNLOCKDISPLAYMESSAGE_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNLOCKDISPLAYMESSAGE_ONPROCESS_OFFSET))(this);
		}
	};
}
