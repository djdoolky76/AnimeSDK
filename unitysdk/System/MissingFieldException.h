#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MissingMemberException.h"
#include "unitysdk/B6564CAC678AC465.h"

class E519989062D53DE5;
namespace System { class String; }

#define SYSTEM_MISSINGFIELDEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x3C46AF0)
#define SYSTEM_MISSINGFIELDEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C46A00)
#define SYSTEM_MISSINGFIELDEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3C46AB0)
#define SYSTEM_MISSINGFIELDEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x3C46AD0)
#define SYSTEM_MISSINGFIELDEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x3C46A50)

namespace System
{
	inline static constexpr unsigned int MissingFieldException_TypeDefinitionIndex = 11561;

	class MissingFieldException : public ::System::MissingMemberException
	{
	public:
		::System::Void _ctor(::System::String* FB6493F8788CE54A, ::System::String* F73A520692BC9EA5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGFIELDEXCEPTION__CTOR_OFFSET))(this, FB6493F8788CE54A, F73A520692BC9EA5);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGFIELDEXCEPTION__CTOR_1_OFFSET))(this);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGFIELDEXCEPTION_GET_MESSAGE_OFFSET))(this);
		}

		::System::Void _ctor_2(::System::String* B083BE7841B347C4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGFIELDEXCEPTION__CTOR_2_OFFSET))(this, B083BE7841B347C4);
		}

		::System::Void _ctor_3(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGFIELDEXCEPTION__CTOR_3_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
		}
	};
}
