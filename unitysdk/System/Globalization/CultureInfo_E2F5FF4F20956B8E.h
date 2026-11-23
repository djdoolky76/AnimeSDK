#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_GLOBALIZATION_CULTUREINFO_E2F5FF4F20956B8E_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_E2F5FF4F20956B8E__CTOR_OFFSET UNITYSDK_OFFSET(0x22B96A0)

namespace System::Globalization
{
	inline static constexpr unsigned int CultureInfo_E2F5FF4F20956B8E_TypeDefinitionIndex = 11075;

	class CultureInfo_E2F5FF4F20956B8E : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_E2F5FF4F20956B8E__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::String* E12C54348FF6AA6D)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_E2F5FF4F20956B8E_INVOKE_OFFSET))(this, E12C54348FF6AA6D);
		}
	};
}
