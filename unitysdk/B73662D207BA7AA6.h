#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define B73662D207BA7AA6_AC5C9E62FFDE6CC6_OFFSET UNITYSDK_OFFSET(0x41611D0)
#define B73662D207BA7AA6__CCTOR_OFFSET UNITYSDK_OFFSET(0x4161350)

inline static constexpr unsigned int B73662D207BA7AA6_TypeDefinitionIndex = 17539;

class B73662D207BA7AA6 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_AFF06AB1F9E01EF2()
	{
		return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(B73662D207BA7AA6_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void AC5C9E62FFDE6CC6()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B73662D207BA7AA6_AC5C9E62FFDE6CC6_OFFSET))();
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B73662D207BA7AA6__CCTOR_OFFSET))();
	}
};
