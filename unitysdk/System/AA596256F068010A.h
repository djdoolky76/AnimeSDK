#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class B867DE75E54C5703;
namespace System { class Object; }

#define SYSTEM_AA596256F068010A_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define SYSTEM_AA596256F068010A__CTOR_OFFSET UNITYSDK_OFFSET(0x20F9B00)

namespace System
{
	inline static constexpr unsigned int AA596256F068010A_TypeDefinitionIndex = 11429;

	class AA596256F068010A : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_AA596256F068010A__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::Object* AD0CAFBAFB8B01EA, ::B867DE75E54C5703* F0D3F87128A7C4CA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::B867DE75E54C5703*))((::PBYTE)hIl2Cpp + SYSTEM_AA596256F068010A_INVOKE_OFFSET))(this, AD0CAFBAFB8B01EA, F0D3F87128A7C4CA);
		}
	};
}
