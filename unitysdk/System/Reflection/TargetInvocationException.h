#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ApplicationException.h"
#include "unitysdk/B6564CAC678AC465.h"

class E519989062D53DE5;
namespace System { class Exception; }
namespace System { class String; }

#define SYSTEM_REFLECTION_TARGETINVOCATIONEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3CC5F00)
#define SYSTEM_REFLECTION_TARGETINVOCATIONEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3CC5F60)
#define SYSTEM_REFLECTION_TARGETINVOCATIONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x38A0A20)

namespace System::Reflection
{
	inline static constexpr unsigned int TargetInvocationException_TypeDefinitionIndex = 10547;

	class TargetInvocationException : public ::System::ApplicationException
	{
	public:
		::System::Void _ctor(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TARGETINVOCATIONEXCEPTION__CTOR_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
		}

		::System::Void _ctor_1(::System::Exception* B7AF548FA9CF41FC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TARGETINVOCATIONEXCEPTION__CTOR_1_OFFSET))(this, B7AF548FA9CF41FC);
		}

		::System::Void _ctor_2(::System::String* B083BE7841B347C4, ::System::Exception* B7AF548FA9CF41FC)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TARGETINVOCATIONEXCEPTION__CTOR_2_OFFSET))(this, B083BE7841B347C4, B7AF548FA9CF41FC);
		}
	};
}
