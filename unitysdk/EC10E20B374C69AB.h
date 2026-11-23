#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EC10E20B374C69AB_E6EB0033B89416AB_OFFSET UNITYSDK_OFFSET(0x411F5F0)

inline static constexpr unsigned int EC10E20B374C69AB_TypeDefinitionIndex = 17082;

class EC10E20B374C69AB : public ::System::Object
{
public:
	static ::System::String* E6EB0033B89416AB()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + EC10E20B374C69AB_E6EB0033B89416AB_OFFSET))();
	}
};
