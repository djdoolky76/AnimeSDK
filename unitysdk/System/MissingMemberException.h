#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MemberAccessException.h"
#include "unitysdk/B6564CAC678AC465.h"

class E519989062D53DE5;
namespace System { class String; }

#define SYSTEM_MISSINGMEMBEREXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x3C2CCA0)
#define SYSTEM_MISSINGMEMBEREXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x3C2D020)
#define SYSTEM_MISSINGMEMBEREXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C2CE10)
#define SYSTEM_MISSINGMEMBEREXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3C2CE60)
#define SYSTEM_MISSINGMEMBEREXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x3C2CE80)

namespace System
{
	inline static constexpr unsigned int MissingMemberException_TypeDefinitionIndex = 11509;

	class MissingMemberException : public ::System::MemberAccessException
	{
	public:
		::System::String* ClassName; // 0x90
		::System::String* MemberName; // 0x98
		::Il2CppArray<::System::Byte>* Signature; // 0xA0

		::System::Void GetObjectData(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGMEMBEREXCEPTION_GETOBJECTDATA_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
		}

		::System::Void _ctor(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGMEMBEREXCEPTION__CTOR_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGMEMBEREXCEPTION__CTOR_1_OFFSET))(this);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGMEMBEREXCEPTION_GET_MESSAGE_OFFSET))(this);
		}

		::System::Void _ctor_2(::System::String* B083BE7841B347C4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGMEMBEREXCEPTION__CTOR_2_OFFSET))(this, B083BE7841B347C4);
		}
	};
}
