#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F5D9B2730D543D46/AD49453349AFE166.h"

namespace System { class String; }
namespace UnityEngine::EventSystems { class EventSystem; }

#define EC6356779BFF1817_EA28CF291EBB2931_OFFSET UNITYSDK_OFFSET(0x3FDF150)
#define EC6356779BFF1817__CTOR_OFFSET UNITYSDK_OFFSET(0x3FDF1F0)

inline static constexpr unsigned int EC6356779BFF1817_TypeDefinitionIndex = 14457;

class EC6356779BFF1817 : public ::F5D9B2730D543D46::AD49453349AFE166
{
public:
	::System::String* EA28CF291EBB2931()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EC6356779BFF1817_EA28CF291EBB2931_OFFSET))(this);
	}

	::System::Void _ctor(::UnityEngine::EventSystems::EventSystem* BE2C08ABFD5A1419)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::EventSystem*))((::PBYTE)hIl2Cpp + EC6356779BFF1817__CTOR_OFFSET))(this, BE2C08ABFD5A1419);
	}
};
