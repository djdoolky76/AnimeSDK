#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1_075EFA8CFBE0DE9A.h"
namespace System { class String; }
namespace System::Text { class Encoding; }

#define MESSAGEPACK_STRINGENCODING_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBB7C10)
#define MESSAGEPACK_STRINGENCODING_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1BB9BE30)

namespace MessagePack
{
	inline static constexpr unsigned int StringEncoding_TypeDefinitionIndex = 7246;

	class StringEncoding : public ::System::Object
	{
	public:
		static ::System::Text::Encoding** StaticGet_UTF8()
		{
			return (::System::Text::Encoding**)UnitySDK::FromName("MessagePack", "StringEncoding")->GetStaticField(0x49C10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_STRINGENCODING_CCTOR_OFFSET))();
		}

		static ::System::String* GetString(::System::Text::Encoding* a1, ::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Byte> a2)
		{
			return ((::System::String*(*)(::System::Text::Encoding*, ::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_STRINGENCODING_GETSTRING_OFFSET))(a1, a2);
		}

	};
}
