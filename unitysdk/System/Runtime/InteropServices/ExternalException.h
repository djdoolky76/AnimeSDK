#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/SystemException.h"
#include "unitysdk/B6564CAC678AC465.h"

class E519989062D53DE5;
namespace System { class String; }

#define SYSTEM_RUNTIME_INTEROPSERVICES_EXTERNALEXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3B98A30)
#define SYSTEM_RUNTIME_INTEROPSERVICES_EXTERNALEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3B98C10)
#define SYSTEM_RUNTIME_INTEROPSERVICES_EXTERNALEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3B5EFC0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_EXTERNALEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x3B98C30)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int ExternalException_TypeDefinitionIndex = 11134;

	class ExternalException : public ::System::SystemException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_EXTERNALEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_EXTERNALEXCEPTION_TOSTRING_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* B083BE7841B347C4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_EXTERNALEXCEPTION__CTOR_1_OFFSET))(this, B083BE7841B347C4);
		}

		::System::Void _ctor_2(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_EXTERNALEXCEPTION__CTOR_2_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
		}
	};
}
