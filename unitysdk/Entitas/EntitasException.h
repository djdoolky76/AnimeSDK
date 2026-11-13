#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
namespace System { class String; }

#define ENTITAS_ENTITASEXCEPTION_CTOR_OFFSET UNITYSDK_OFFSET(0x20850740)

namespace Entitas
{
	inline static constexpr unsigned int EntitasException_TypeDefinitionIndex = 10010;

	class EntitasException : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITASEXCEPTION_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
