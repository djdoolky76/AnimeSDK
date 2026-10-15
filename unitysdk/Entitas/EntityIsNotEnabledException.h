#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/EntitasException.h"
namespace System { class String; }

#define ENTITAS_ENTITYISNOTENABLEDEXCEPTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1675AEF0)

namespace Entitas
{
	class EntityIsNotEnabledException : public ::Entitas::EntitasException
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITYISNOTENABLEDEXCEPTION_CTOR_OFFSET))(this, a1);
		}

	};
}
