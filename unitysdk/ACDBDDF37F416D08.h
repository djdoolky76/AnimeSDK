#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Reflection { class F60CD5AA5C2080DF; }

#define ACDBDDF37F416D08_F686D92E2E80ADC1_OFFSET UNITYSDK_OFFSET(0x3C5B8E0)
#define ACDBDDF37F416D08__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18D5180)
#define ACDBDDF37F416D08__CTOR_OFFSET UNITYSDK_OFFSET(0x1778980)

inline static constexpr unsigned int ACDBDDF37F416D08_TypeDefinitionIndex = 11642;

class ACDBDDF37F416D08 : public ::System::Object
{
public:
	::System::String* F0332E54BE3EB603; // 0x10
	::System::Reflection::F60CD5AA5C2080DF* B476B7AD17F6C7E5; // 0x18

	::System::Void _ctor(::System::String* F0332E54BE3EB603)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ACDBDDF37F416D08__CTOR_OFFSET))(this, F0332E54BE3EB603);
	}

	::System::Reflection::F60CD5AA5C2080DF* F686D92E2E80ADC1()
	{
		return ((::System::Reflection::F60CD5AA5C2080DF*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACDBDDF37F416D08_F686D92E2E80ADC1_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::String* F0332E54BE3EB603, ::System::Reflection::F60CD5AA5C2080DF* B476B7AD17F6C7E5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Reflection::F60CD5AA5C2080DF*))((::PBYTE)hIl2Cpp + ACDBDDF37F416D08__CTOR_1_OFFSET))(this, F0332E54BE3EB603, B476B7AD17F6C7E5);
	}
};
