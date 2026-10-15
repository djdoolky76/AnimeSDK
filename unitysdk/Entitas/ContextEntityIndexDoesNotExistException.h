#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/EntitasException.h"
namespace Entitas { class IContext; }
namespace System { class String; }

#define ENTITAS_CONTEXTENTITYINDEXDOESNOTEXISTEXCEPTION_CTOR_OFFSET UNITYSDK_OFFSET(0x16758E20)

namespace Entitas
{
	class ContextEntityIndexDoesNotExistException : public ::Entitas::EntitasException
	{
	public:
		::System::Void _ctor(::Entitas::IContext* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_CONTEXTENTITYINDEXDOESNOTEXISTEXCEPTION_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
