#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define AB3F1F7F10B11FBF_E3A9F767C10AFECA_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7C20)
#define AB3F1F7F10B11FBF_E3A9F767C10AFECA__CTOR_OFFSET UNITYSDK_OFFSET(0x2A00700)

namespace AB3F1F7F10B11FBF
{
	inline static constexpr unsigned int E3A9F767C10AFECA_TypeDefinitionIndex = 15754;

	class E3A9F767C10AFECA : public ::System::MulticastDelegate
	{
	public:
		::System::Void Invoke(::System::Int32 A43537863E8D53C3, ::System::Boolean AD09E42C80D4B5FC, ::System::String* EBB48589FD801E34, ::System::String* A7714DE08D5D7E93)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + AB3F1F7F10B11FBF_E3A9F767C10AFECA_INVOKE_OFFSET))(this, A43537863E8D53C3, AD09E42C80D4B5FC, EBB48589FD801E34, A7714DE08D5D7E93);
		}

		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + AB3F1F7F10B11FBF_E3A9F767C10AFECA__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}
	};
}
