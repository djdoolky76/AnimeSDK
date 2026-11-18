#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define AKEPEGEKMCJ_EGDKPEBOIFJ_OFFSET UNITYSDK_OFFSET(0x17DDC4E0)
#define AKEPEGEKMCJ_IFHHANELJMP_OFFSET UNITYSDK_OFFSET(0x17DDC570)

inline static constexpr unsigned int AKEPEGEKMCJ_TypeDefinitionIndex = 56628;

class AKEPEGEKMCJ : public ::System::Object
{
public:
	static ::System::Boolean EGDKPEBOIFJ(::System::String* NAPFALLANDL)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + AKEPEGEKMCJ_EGDKPEBOIFJ_OFFSET))(NAPFALLANDL);
	}

	static ::System::Boolean IFHHANELJMP(::System::String* NAPFALLANDL)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + AKEPEGEKMCJ_IFHHANELJMP_OFFSET))(NAPFALLANDL);
	}
};
