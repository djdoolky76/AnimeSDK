#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define LGAEADMCBKI_GMFNFEEBOLC_OFFSET UNITYSDK_OFFSET(0x15DF78E0)

inline static constexpr unsigned int LGAEADMCBKI_TypeDefinitionIndex = 53508;

class LGAEADMCBKI : public ::System::Object
{
public:
	// static const ::System::String* DHAPKKCOLPE; // 0x0
	// static const ::System::String* GBJHBLAEOMJ; // 0x0
	// static const ::System::String* POOJIIMMNCD; // 0x0

	static ::System::Boolean GMFNFEEBOLC(::System::String* JNEPCCIHBMB)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + LGAEADMCBKI_GMFNFEEBOLC_OFFSET))(JNEPCCIHBMB);
	}
};
