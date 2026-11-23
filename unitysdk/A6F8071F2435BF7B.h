#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/E9B96C9FF4E971D6.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Reflection { class F60CD5AA5C2080DF; }

#define A6F8071F2435BF7B__CTOR_OFFSET UNITYSDK_OFFSET(0x3865790)

inline static constexpr unsigned int A6F8071F2435BF7B_TypeDefinitionIndex = 10710;

class A6F8071F2435BF7B : public ::System::Object
{
public:
	::System::Reflection::F60CD5AA5C2080DF* BE0981BB3E5FFAE0; // 0x10
	::System::String* ECE02AE1339803CE; // 0x18
	::System::Reflection::E9B96C9FF4E971D6 A6C4A192EF4D80AD; // 0x20

	::System::Void _ctor(::System::Reflection::F60CD5AA5C2080DF* B2D0B61900D45C49, ::System::String* A9D7DD920EB2E81D, ::System::Reflection::E9B96C9FF4E971D6 BCB27B32CEC9387A)
	{
		return ((::System::Void(*)(::PVOID, ::System::Reflection::F60CD5AA5C2080DF*, ::System::String*, ::System::Reflection::E9B96C9FF4E971D6))((::PBYTE)hIl2Cpp + A6F8071F2435BF7B__CTOR_OFFSET))(this, B2D0B61900D45C49, A9D7DD920EB2E81D, BCB27B32CEC9387A);
	}
};
