#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define E95454FF12DE72AE_F14A957EBF63ED45_OFFSET UNITYSDK_OFFSET(0x3F277E0)
#define E95454FF12DE72AE_FBC7A5C61509924A_OFFSET UNITYSDK_OFFSET(0x3F27830)

inline static constexpr unsigned int E95454FF12DE72AE_TypeDefinitionIndex = 19841;

class E95454FF12DE72AE : public ::System::Object
{
public:
	static ::System::Void FBC7A5C61509924A(::System::String* B083BE7841B347C4)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + E95454FF12DE72AE_FBC7A5C61509924A_OFFSET))(B083BE7841B347C4);
	}

	static ::System::Void F14A957EBF63ED45(::System::String* F1A536645E6067F3)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + E95454FF12DE72AE_F14A957EBF63ED45_OFFSET))(F1A536645E6067F3);
	}
};
