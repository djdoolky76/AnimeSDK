#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define EB0D50DE6F105A6A_E5F17F98DA9D83FB_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define EB0D50DE6F105A6A_E5F17F98DA9D83FB__CTOR_OFFSET UNITYSDK_OFFSET(0x22B96A0)

inline static constexpr unsigned int EB0D50DE6F105A6A_E5F17F98DA9D83FB_TypeDefinitionIndex = 15644;

class EB0D50DE6F105A6A_E5F17F98DA9D83FB : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EB0D50DE6F105A6A_E5F17F98DA9D83FB__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::String* E41EB813C7FB644A)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EB0D50DE6F105A6A_E5F17F98DA9D83FB_INVOKE_OFFSET))(this, E41EB813C7FB644A);
	}
};
