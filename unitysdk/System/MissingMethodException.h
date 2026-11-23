#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MissingMemberException.h"
#include "unitysdk/B6564CAC678AC465.h"

class E519989062D53DE5;
namespace System { class String; }

#define SYSTEM_MISSINGMETHODEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x3C68B50)
#define SYSTEM_MISSINGMETHODEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C46AD0)
#define SYSTEM_MISSINGMETHODEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3C68AE0)
#define SYSTEM_MISSINGMETHODEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x3C68B30)
#define SYSTEM_MISSINGMETHODEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x3C46A50)

namespace System
{
	inline static constexpr unsigned int MissingMethodException_TypeDefinitionIndex = 11625;

	class MissingMethodException : public ::System::MissingMemberException
	{
	public:
		::System::Void _ctor(::System::String* FB6493F8788CE54A, ::System::String* FC1D29B360A1527E)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGMETHODEXCEPTION__CTOR_OFFSET))(this, FB6493F8788CE54A, FC1D29B360A1527E);
		}

		::System::Void _ctor_1(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGMETHODEXCEPTION__CTOR_1_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
		}

		::System::Void _ctor_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGMETHODEXCEPTION__CTOR_2_OFFSET))(this);
		}

		::System::Void _ctor_3(::System::String* B083BE7841B347C4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGMETHODEXCEPTION__CTOR_3_OFFSET))(this, B083BE7841B347C4);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGMETHODEXCEPTION_GET_MESSAGE_OFFSET))(this);
		}
	};
}
