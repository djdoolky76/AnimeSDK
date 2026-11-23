#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class BA6A30046E72CB9F;
namespace System { class Object; }
namespace System { class String; }

#define FE82B7B4F269AB02_F20156093ABABEB2_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define FE82B7B4F269AB02_F20156093ABABEB2__CTOR_OFFSET UNITYSDK_OFFSET(0x2911C70)

namespace FE82B7B4F269AB02
{
	inline static constexpr unsigned int F20156093ABABEB2_TypeDefinitionIndex = 14795;

	class F20156093ABABEB2 : public ::System::MulticastDelegate
	{
	public:
		::BA6A30046E72CB9F* Invoke(::System::String* A092BD739612F309)
		{
			return ((::BA6A30046E72CB9F*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FE82B7B4F269AB02_F20156093ABABEB2_INVOKE_OFFSET))(this, A092BD739612F309);
		}

		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FE82B7B4F269AB02_F20156093ABABEB2__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}
	};
}
