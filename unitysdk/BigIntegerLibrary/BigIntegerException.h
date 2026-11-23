#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define BIGINTEGERLIBRARY_BIGINTEGEREXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x44366C0)

namespace BigIntegerLibrary
{
	inline static constexpr unsigned int BigIntegerException_TypeDefinitionIndex = 19023;

	class BigIntegerException : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* B083BE7841B347C4, ::System::Exception* FA644E43CA202E59)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGEREXCEPTION__CTOR_OFFSET))(this, B083BE7841B347C4, FA644E43CA202E59);
		}
	};
}
