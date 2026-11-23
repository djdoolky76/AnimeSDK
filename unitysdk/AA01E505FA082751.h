#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define AA01E505FA082751_E10B23E941A679AE_OFFSET UNITYSDK_OFFSET(0x43FF5A0)

inline static constexpr unsigned int AA01E505FA082751_TypeDefinitionIndex = 19418;

class AA01E505FA082751 : public ::System::Object
{
public:
	static ::System::String* E10B23E941A679AE(::System::IntPtr F3564468954B2D16)
	{
		return ((::System::String*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + AA01E505FA082751_E10B23E941A679AE_OFFSET))(F3564468954B2D16);
	}
};
