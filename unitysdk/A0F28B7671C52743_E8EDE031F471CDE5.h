#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define A0F28B7671C52743_E8EDE031F471CDE5_INVOKE_OFFSET UNITYSDK_OFFSET(0x39FF2E0)
#define A0F28B7671C52743_E8EDE031F471CDE5__CTOR_OFFSET UNITYSDK_OFFSET(0x39FF300)

inline static constexpr unsigned int A0F28B7671C52743_E8EDE031F471CDE5_TypeDefinitionIndex = 12811;

class A0F28B7671C52743_E8EDE031F471CDE5 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A0F28B7671C52743_E8EDE031F471CDE5__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Object* B8334CB64332323A, ::System::String* E4135297864DFC33, ::System::String* E38AC34CA582739D, ::System::Boolean BCDD129CD2944FC2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + A0F28B7671C52743_E8EDE031F471CDE5_INVOKE_OFFSET))(this, B8334CB64332323A, E4135297864DFC33, E38AC34CA582739D, BCDD129CD2944FC2);
	}
};
