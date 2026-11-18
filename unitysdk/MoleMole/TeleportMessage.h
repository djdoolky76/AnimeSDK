#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LogicMessageBase.h"

class FGECBJCAGBC;

#define MOLEMOLE_TELEPORTMESSAGE_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x10D5EC00)
#define MOLEMOLE_TELEPORTMESSAGE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x10D5EBA0)
#define MOLEMOLE_TELEPORTMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x10D5EB80)
#define MOLEMOLE_TELEPORTMESSAGE___BASE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x10D5EC60)

namespace MoleMole
{
	inline static constexpr unsigned int TeleportMessage_TypeDefinitionIndex = 79049;

	class TeleportMessage : public ::MoleMole::LogicMessageBase
	{
	public:
		::FGECBJCAGBC* _teleport; // 0x20

		::System::Void _ctor(::FGECBJCAGBC* teleport)
		{
			return ((::System::Void(*)(::PVOID, ::FGECBJCAGBC*))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTMESSAGE__CTOR_OFFSET))(this, teleport);
		}

		::System::Void SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTMESSAGE_SETMESSAGECONFIG_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTMESSAGE_ONPROCESS_OFFSET))(this);
		}

		::System::Void __base_SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTMESSAGE___BASE_SETMESSAGECONFIG_OFFSET))(this);
		}
	};
}
