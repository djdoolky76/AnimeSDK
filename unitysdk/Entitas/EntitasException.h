#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
namespace System { class String; }

#define ENTITAS_ENTITASEXCEPTION_CTOR_OFFSET UNITYSDK_OFFSET(0x167589B0)

namespace Entitas
{
	class EntitasException : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITASEXCEPTION_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
