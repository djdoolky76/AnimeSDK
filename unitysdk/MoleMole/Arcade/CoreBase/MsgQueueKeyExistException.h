#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define MOLEMOLE_ARCADE_COREBASE_MSGQUEUEKEYEXISTEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EFA5C70)
#define MOLEMOLE_ARCADE_COREBASE_MSGQUEUEKEYEXISTEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1EFA5CF0)
#define MOLEMOLE_ARCADE_COREBASE_MSGQUEUEKEYEXISTEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFA5BF0)

namespace MoleMole::Arcade::CoreBase
{
	inline static constexpr unsigned int MsgQueueKeyExistException_TypeDefinitionIndex = 29112;

	class MsgQueueKeyExistException : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COREBASE_MSGQUEUEKEYEXISTEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* NAPFALLANDL)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COREBASE_MSGQUEUEKEYEXISTEXCEPTION__CTOR_1_OFFSET))(this, NAPFALLANDL);
		}

		::System::Void _ctor_2(::System::String* NAPFALLANDL, ::System::Exception* BDLKAKKCAII)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COREBASE_MSGQUEUEKEYEXISTEXCEPTION__CTOR_2_OFFSET))(this, NAPFALLANDL, BDLKAKKCAII);
		}
	};
}
