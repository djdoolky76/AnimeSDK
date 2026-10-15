#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/EntitasException.h"
namespace System { class String; }

#define ENTITAS_ENTITYINDEXEXCEPTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1675CBB0)

namespace Entitas
{
	class EntityIndexException : public ::Entitas::EntitasException
	{
	public:
		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITYINDEXEXCEPTION_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
