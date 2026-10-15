#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/EntitasException.h"
namespace Entitas { class IContext; }
namespace System { class String; }

#define ENTITAS_CONTEXTENTITYINDEXDOESALREADYEXISTEXCEPTION_CTOR_OFFSET UNITYSDK_OFFSET(0x16758C40)

namespace Entitas
{
	class ContextEntityIndexDoesAlreadyExistException : public ::Entitas::EntitasException
	{
	public:
		::System::Void _ctor(::Entitas::IContext* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_CONTEXTENTITYINDEXDOESALREADYEXISTEXCEPTION_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
