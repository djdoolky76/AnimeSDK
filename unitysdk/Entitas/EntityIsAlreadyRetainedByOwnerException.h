#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/EntitasException.h"
namespace Entitas { class IEntity; }
namespace System { class Object; }

#define ENTITAS_ENTITYISALREADYRETAINEDBYOWNEREXCEPTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1675CC30)

namespace Entitas
{
	class EntityIsAlreadyRetainedByOwnerException : public ::Entitas::EntitasException
	{
	public:
		::System::Void _ctor(::Entitas::IEntity* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Object*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITYISALREADYRETAINEDBYOWNEREXCEPTION_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
