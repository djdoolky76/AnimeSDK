#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define EED6B35843181046_F4B1F852B1D37478_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define EED6B35843181046_F4B1F852B1D37478__CTOR_OFFSET UNITYSDK_OFFSET(0x22B96A0)

inline static constexpr unsigned int EED6B35843181046_F4B1F852B1D37478_TypeDefinitionIndex = 11970;

class EED6B35843181046_F4B1F852B1D37478 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EED6B35843181046_F4B1F852B1D37478__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::String* E38AC34CA582739D)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EED6B35843181046_F4B1F852B1D37478_INVOKE_OFFSET))(this, E38AC34CA582739D);
	}
};
