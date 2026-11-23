#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AD61077CFCBEFAEA.h"

namespace System { class String; }

#define BDF919D5FF28A5C4_B5343E78C49D3D28_OFFSET UNITYSDK_OFFSET(0x2544460)
#define BDF919D5FF28A5C4_B8BBFA398E001815_OFFSET UNITYSDK_OFFSET(0x25443C0)

inline static constexpr unsigned int BDF919D5FF28A5C4_TypeDefinitionIndex = 5391;

class BDF919D5FF28A5C4 : public ::System::Object
{
public:
	static ::System::Boolean B5343E78C49D3D28(::AD61077CFCBEFAEA E97E8D008427A296)
	{
		return ((::System::Boolean(*)(::AD61077CFCBEFAEA))((::PBYTE)hIl2Cpp + BDF919D5FF28A5C4_B5343E78C49D3D28_OFFSET))(E97E8D008427A296);
	}

	static ::System::String* B8BBFA398E001815(::AD61077CFCBEFAEA E97E8D008427A296)
	{
		return ((::System::String*(*)(::AD61077CFCBEFAEA))((::PBYTE)hIl2Cpp + BDF919D5FF28A5C4_B8BBFA398E001815_OFFSET))(E97E8D008427A296);
	}
};
