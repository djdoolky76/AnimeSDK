#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ApplicationException.h"
#include "unitysdk/B6564CAC678AC465.h"

class E519989062D53DE5;
namespace System { class Exception; }
namespace System { class String; }

#define SYSTEM_REFLECTION_TARGETEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3CDD730)
#define SYSTEM_REFLECTION_TARGETEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3CDD710)
#define SYSTEM_REFLECTION_TARGETEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x3CDD760)
#define SYSTEM_REFLECTION_TARGETEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x38A0A20)

namespace System::Reflection
{
	inline static constexpr unsigned int TargetException_TypeDefinitionIndex = 10633;

	class TargetException : public ::System::ApplicationException
	{
	public:
		::System::Void _ctor(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TARGETEXCEPTION__CTOR_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TARGETEXCEPTION__CTOR_1_OFFSET))(this);
		}

		::System::Void _ctor_2(::System::String* B083BE7841B347C4, ::System::Exception* B7AF548FA9CF41FC)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TARGETEXCEPTION__CTOR_2_OFFSET))(this, B083BE7841B347C4, B7AF548FA9CF41FC);
		}

		::System::Void _ctor_3(::System::String* B083BE7841B347C4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TARGETEXCEPTION__CTOR_3_OFFSET))(this, B083BE7841B347C4);
		}
	};
}
