#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/InvalidOperationException.h"

namespace System { class String; }

#define CYSHARP_TEXT_NESTEDSTRINGBUILDERCREATIONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x4410A70)

namespace Cysharp::Text
{
	inline static constexpr unsigned int NestedStringBuilderCreationException_TypeDefinitionIndex = 21132;

	class NestedStringBuilderCreationException : public ::System::InvalidOperationException
	{
	public:
		::System::Void _ctor(::System::String* EC2038339CE86133, ::System::String* AFE9B4008E58BF0A)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_NESTEDSTRINGBUILDERCREATIONEXCEPTION__CTOR_OFFSET))(this, EC2038339CE86133, AFE9B4008E58BF0A);
		}
	};
}
