#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define EED6B35843181046_FD7BA787BB9F586B_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define EED6B35843181046_FD7BA787BB9F586B__CTOR_OFFSET UNITYSDK_OFFSET(0x22B96A0)

inline static constexpr unsigned int EED6B35843181046_FD7BA787BB9F586B_TypeDefinitionIndex = 11982;

class EED6B35843181046_FD7BA787BB9F586B : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EED6B35843181046_FD7BA787BB9F586B__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::Il2CppArray<::System::Byte>* F220A2D27F7C6B6C)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EED6B35843181046_FD7BA787BB9F586B_INVOKE_OFFSET))(this, F220A2D27F7C6B6C);
	}
};
