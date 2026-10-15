#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/EntitasException.h"
namespace System { class String; }

#define ENTITAS_ENTITYISNOTDESTROYEDEXCEPTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1675CEA0)

namespace Entitas
{
	class EntityIsNotDestroyedException : public ::Entitas::EntitasException
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITYISNOTDESTROYEDEXCEPTION_CTOR_OFFSET))(this, a1);
		}

	};
}
