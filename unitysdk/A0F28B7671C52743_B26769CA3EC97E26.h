#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define A0F28B7671C52743_B26769CA3EC97E26_INVOKE_OFFSET UNITYSDK_OFFSET(0x39FF2E0)
#define A0F28B7671C52743_B26769CA3EC97E26__CTOR_OFFSET UNITYSDK_OFFSET(0x39FF300)

inline static constexpr unsigned int A0F28B7671C52743_B26769CA3EC97E26_TypeDefinitionIndex = 12810;

class A0F28B7671C52743_B26769CA3EC97E26 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A0F28B7671C52743_B26769CA3EC97E26__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Object* B8334CB64332323A, ::System::String* EA8FABEC6D125B33, ::System::String* F1BF0FE85E9DD584, ::System::Boolean BCDD129CD2944FC2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + A0F28B7671C52743_B26769CA3EC97E26_INVOKE_OFFSET))(this, B8334CB64332323A, EA8FABEC6D125B33, F1BF0FE85E9DD584, BCDD129CD2944FC2);
	}
};
