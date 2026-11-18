#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KCKJCNDLCEM;
class LDIENANCAPG;
namespace System { class String; }

#define MOLEMOLE_CONFIG_REALTIMEQTESTYLEENTRYBASE_GETBUTTONSTYLE_OFFSET UNITYSDK_OFFSET(0x1A04BBF0)
#define MOLEMOLE_CONFIG_REALTIMEQTESTYLEENTRYBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A04BC40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int RealtimeQTEStyleEntryBase_TypeDefinitionIndex = 87313;

	class RealtimeQTEStyleEntryBase : public ::System::Object
	{
	public:
		::System::String* OverrideHintTextKey; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REALTIMEQTESTYLEENTRYBASE__CTOR_OFFSET))(this);
		}

		::KCKJCNDLCEM* GetButtonStyle(::LDIENANCAPG* task)
		{
			return ((::KCKJCNDLCEM*(*)(::PVOID, ::LDIENANCAPG*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REALTIMEQTESTYLEENTRYBASE_GETBUTTONSTYLE_OFFSET))(this, task);
		}
	};
}
