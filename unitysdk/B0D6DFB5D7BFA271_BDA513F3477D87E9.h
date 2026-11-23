#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B0D6DFB5D7BFA271.h"

namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define B0D6DFB5D7BFA271_BDA513F3477D87E9__CCTOR_OFFSET UNITYSDK_OFFSET(0x3C2CAA0)

inline static constexpr unsigned int B0D6DFB5D7BFA271_BDA513F3477D87E9_TypeDefinitionIndex = 11488;

class B0D6DFB5D7BFA271_BDA513F3477D87E9 : public ::B0D6DFB5D7BFA271
{
public:
	static ::System::Action_1<::System::Object*>** StaticGet_AE97F3CA6CA1F1C3()
	{
		return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(B0D6DFB5D7BFA271_BDA513F3477D87E9_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B0D6DFB5D7BFA271_BDA513F3477D87E9__CCTOR_OFFSET))();
	}
};
