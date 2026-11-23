#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define FF1001379F73B8E1_CLIPPEREXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x2A90E60)

inline static constexpr unsigned int FF1001379F73B8E1_ClipperException_TypeDefinitionIndex = 18465;

class FF1001379F73B8E1_ClipperException : public ::System::Exception
{
public:
	::System::Void _ctor(::System::String* A90E48A7BCFA135B)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FF1001379F73B8E1_CLIPPEREXCEPTION__CTOR_OFFSET))(this, A90E48A7BCFA135B);
	}
};
