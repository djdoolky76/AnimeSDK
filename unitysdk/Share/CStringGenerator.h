#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SHARE_CSTRINGGENERATOR_GETSTRING_OFFSET UNITYSDK_OFFSET(0x20072B20)

namespace Share
{
	inline static constexpr unsigned int CStringGenerator_TypeDefinitionIndex = 11986;

	class CStringGenerator : public ::System::Object
	{
	public:
		static ::System::String* GetString(::System::Object* x)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SHARE_CSTRINGGENERATOR_GETSTRING_OFFSET))(x);
		}
	};
}
