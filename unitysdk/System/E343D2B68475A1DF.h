#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class BEE1F3B6E9801174;
namespace System { class Object; }

#define SYSTEM_E343D2B68475A1DF_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define SYSTEM_E343D2B68475A1DF__CTOR_OFFSET UNITYSDK_OFFSET(0x2991280)

namespace System
{
	inline static constexpr unsigned int E343D2B68475A1DF_TypeDefinitionIndex = 15021;

	class E343D2B68475A1DF : public ::System::MulticastDelegate
	{
	public:
		::System::Void Invoke(::BEE1F3B6E9801174* FA47ECD658029454)
		{
			return ((::System::Void(*)(::PVOID, ::BEE1F3B6E9801174*))((::PBYTE)hIl2Cpp + SYSTEM_E343D2B68475A1DF_INVOKE_OFFSET))(this, FA47ECD658029454);
		}

		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_E343D2B68475A1DF__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}
	};
}
