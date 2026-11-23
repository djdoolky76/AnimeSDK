#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define EED6B35843181046_F8DD28A4C0081B2D_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define EED6B35843181046_F8DD28A4C0081B2D__CTOR_OFFSET UNITYSDK_OFFSET(0x2911C70)

inline static constexpr unsigned int EED6B35843181046_F8DD28A4C0081B2D_TypeDefinitionIndex = 11984;

class EED6B35843181046_F8DD28A4C0081B2D : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EED6B35843181046_F8DD28A4C0081B2D__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::String* Invoke(::System::String* EFF983A80A48BB2A)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EED6B35843181046_F8DD28A4C0081B2D_INVOKE_OFFSET))(this, EFF983A80A48BB2A);
	}
};
