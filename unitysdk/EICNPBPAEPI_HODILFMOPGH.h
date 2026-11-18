#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class Object; }
namespace System { class String; }

#define EICNPBPAEPI_HODILFMOPGH__CTOR_OFFSET UNITYSDK_OFFSET(0x161457D0)

inline static constexpr unsigned int EICNPBPAEPI_HODILFMOPGH_TypeDefinitionIndex = 78102;

class EICNPBPAEPI_HODILFMOPGH : public ::System::Exception
{
public:
	::System::Void _ctor(::System::String* EJGKCFKNONL, ::System::String* FKMHMOELCIO, ::System::Object* MOEKEKKJGBB)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + EICNPBPAEPI_HODILFMOPGH__CTOR_OFFSET))(this, EJGKCFKNONL, FKMHMOELCIO, MOEKEKKJGBB);
	}
};
