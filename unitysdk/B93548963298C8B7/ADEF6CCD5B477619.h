#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class B3F4502DE428DD6D;
namespace System { class Object; }

#define B93548963298C8B7_ADEF6CCD5B477619_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define B93548963298C8B7_ADEF6CCD5B477619__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE7D60)

namespace B93548963298C8B7
{
	inline static constexpr unsigned int ADEF6CCD5B477619_TypeDefinitionIndex = 15751;

	class ADEF6CCD5B477619 : public ::System::MulticastDelegate
	{
	public:
		::System::Void Invoke(::B3F4502DE428DD6D* F220A2D27F7C6B6C)
		{
			return ((::System::Void(*)(::PVOID, ::B3F4502DE428DD6D*))((::PBYTE)hIl2Cpp + B93548963298C8B7_ADEF6CCD5B477619_INVOKE_OFFSET))(this, F220A2D27F7C6B6C);
		}

		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + B93548963298C8B7_ADEF6CCD5B477619__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}
	};
}
