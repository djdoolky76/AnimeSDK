#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define FBFC10534E0E2C24_AC16F973B708727B_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define FBFC10534E0E2C24_AC16F973B708727B__CTOR_OFFSET UNITYSDK_OFFSET(0x22B96A0)

inline static constexpr unsigned int FBFC10534E0E2C24_AC16F973B708727B_TypeDefinitionIndex = 12682;

class FBFC10534E0E2C24_AC16F973B708727B : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FBFC10534E0E2C24_AC16F973B708727B__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + FBFC10534E0E2C24_AC16F973B708727B_INVOKE_OFFSET))(this, E04D2BE64FCE9814);
	}
};
