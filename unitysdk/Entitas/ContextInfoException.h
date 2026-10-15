#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/EntitasException.h"
namespace Entitas { class ContextInfo; }
namespace Entitas { class IContext; }

#define ENTITAS_CONTEXTINFOEXCEPTION_CTOR_OFFSET UNITYSDK_OFFSET(0x16759160)

namespace Entitas
{
	class ContextInfoException : public ::Entitas::EntitasException
	{
	public:
		::System::Void _ctor(::Entitas::IContext* a1, ::Entitas::ContextInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::ContextInfo*))((::PBYTE)hIl2Cpp + ENTITAS_CONTEXTINFOEXCEPTION_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
