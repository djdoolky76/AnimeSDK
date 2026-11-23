#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define A0F28B7671C52743_F72BC52625A45E4F_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define A0F28B7671C52743_F72BC52625A45E4F__CTOR_OFFSET UNITYSDK_OFFSET(0x38B6C30)

inline static constexpr unsigned int A0F28B7671C52743_F72BC52625A45E4F_TypeDefinitionIndex = 12824;

class A0F28B7671C52743_F72BC52625A45E4F : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A0F28B7671C52743_F72BC52625A45E4F__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Object* F70AC30395956F92, ::System::String* B960AC235824C6C8, ::System::Boolean FF7BFF2B02E93373)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + A0F28B7671C52743_F72BC52625A45E4F_INVOKE_OFFSET))(this, F70AC30395956F92, B960AC235824C6C8, FF7BFF2B02E93373);
	}
};
