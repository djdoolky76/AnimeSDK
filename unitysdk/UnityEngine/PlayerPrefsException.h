#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define UNITYENGINE_PLAYERPREFSEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x413C000)

namespace UnityEngine
{
	inline static constexpr unsigned int PlayerPrefsException_TypeDefinitionIndex = 17281;

	class PlayerPrefsException : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* E22BCD4736CD9DF9)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERPREFSEXCEPTION__CTOR_OFFSET))(this, E22BCD4736CD9DF9);
		}
	};
}
