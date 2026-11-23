#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define B93548963298C8B7_AD404FE4E9AD638E_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define B93548963298C8B7_AD404FE4E9AD638E__CTOR_OFFSET UNITYSDK_OFFSET(0x29BE330)

namespace B93548963298C8B7
{
	inline static constexpr unsigned int AD404FE4E9AD638E_TypeDefinitionIndex = 15762;

	class AD404FE4E9AD638E : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + B93548963298C8B7_AD404FE4E9AD638E__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::IntPtr F220A2D27F7C6B6C)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + B93548963298C8B7_AD404FE4E9AD638E_INVOKE_OFFSET))(this, F220A2D27F7C6B6C);
		}
	};
}
