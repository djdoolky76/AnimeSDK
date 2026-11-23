#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define AB3F1F7F10B11FBF_BC76E6ECF64A6B66_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define AB3F1F7F10B11FBF_BC76E6ECF64A6B66__CTOR_OFFSET UNITYSDK_OFFSET(0x22B96A0)

namespace AB3F1F7F10B11FBF
{
	inline static constexpr unsigned int BC76E6ECF64A6B66_TypeDefinitionIndex = 15432;

	class BC76E6ECF64A6B66 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + AB3F1F7F10B11FBF_BC76E6ECF64A6B66__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::String* A7714DE08D5D7E93)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AB3F1F7F10B11FBF_BC76E6ECF64A6B66_INVOKE_OFFSET))(this, A7714DE08D5D7E93);
		}
	};
}
