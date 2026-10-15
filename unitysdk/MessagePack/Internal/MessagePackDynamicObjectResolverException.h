#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackSerializationException.h"
namespace System { class String; }

#define MESSAGEPACK_INTERNAL_MESSAGEPACKDYNAMICOBJECTRESOLVEREXCEPTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBA8360)

namespace MessagePack::Internal
{
	class MessagePackDynamicObjectResolverException : public ::MessagePack::MessagePackSerializationException
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_MESSAGEPACKDYNAMICOBJECTRESOLVEREXCEPTION_CTOR_OFFSET))(this, a1);
		}

	};
}
