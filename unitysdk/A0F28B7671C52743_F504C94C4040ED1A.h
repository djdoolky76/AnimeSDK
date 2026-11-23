#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class FF1237522147A967;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define A0F28B7671C52743_F504C94C4040ED1A_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define A0F28B7671C52743_F504C94C4040ED1A__CTOR_OFFSET UNITYSDK_OFFSET(0x2978430)

inline static constexpr unsigned int A0F28B7671C52743_F504C94C4040ED1A_TypeDefinitionIndex = 12819;

class A0F28B7671C52743_F504C94C4040ED1A : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A0F28B7671C52743_F504C94C4040ED1A__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Object* B8334CB64332323A, ::System::String* E4135297864DFC33, ::System::Action_1<::FF1237522147A967*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::Action_1<::FF1237522147A967*>*))((::PBYTE)hIl2Cpp + A0F28B7671C52743_F504C94C4040ED1A_INVOKE_OFFSET))(this, B8334CB64332323A, E4135297864DFC33, E04D2BE64FCE9814);
	}
};
