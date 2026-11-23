#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/SystemException.h"
#include "unitysdk/B6564CAC678AC465.h"

class E519989062D53DE5;
namespace System { class Exception; }
namespace System { class String; }

#define SYSTEM_INVALIDOPERATIONEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3BB38D0)
#define SYSTEM_INVALIDOPERATIONEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3BB3860)
#define SYSTEM_INVALIDOPERATIONEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x3B5EFC0)
#define SYSTEM_INVALIDOPERATIONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x3BB38B0)

namespace System
{
	inline static constexpr unsigned int InvalidOperationException_TypeDefinitionIndex = 11173;

	class InvalidOperationException : public ::System::SystemException
	{
	public:
		::System::Void _ctor(::System::String* B083BE7841B347C4, ::System::Exception* FA644E43CA202E59)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_INVALIDOPERATIONEXCEPTION__CTOR_OFFSET))(this, B083BE7841B347C4, FA644E43CA202E59);
		}

		::System::Void _ctor_1(::System::String* B083BE7841B347C4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_INVALIDOPERATIONEXCEPTION__CTOR_1_OFFSET))(this, B083BE7841B347C4);
		}

		::System::Void _ctor_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INVALIDOPERATIONEXCEPTION__CTOR_2_OFFSET))(this);
		}

		::System::Void _ctor_3(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_INVALIDOPERATIONEXCEPTION__CTOR_3_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
		}
	};
}
