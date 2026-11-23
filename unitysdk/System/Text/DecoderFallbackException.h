#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArgumentException.h"
#include "unitysdk/B6564CAC678AC465.h"

class E519989062D53DE5;
namespace System { class String; }

#define SYSTEM_TEXT_DECODERFALLBACKEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3D5A3F0)
#define SYSTEM_TEXT_DECODERFALLBACKEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3D5A3A0)
#define SYSTEM_TEXT_DECODERFALLBACKEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x3B765A0)

namespace System::Text
{
	inline static constexpr unsigned int DecoderFallbackException_TypeDefinitionIndex = 11005;

	class DecoderFallbackException : public ::System::ArgumentException
	{
	public:
		::Il2CppArray<::System::Byte>* _bytesUnknown; // 0x98
		::System::Int32 _index; // 0xA0

		::System::Void _ctor(::E519989062D53DE5* EE8EA789BF8D394F, ::B6564CAC678AC465 B2E673F362AA060E)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERFALLBACKEXCEPTION__CTOR_OFFSET))(this, EE8EA789BF8D394F, B2E673F362AA060E);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERFALLBACKEXCEPTION__CTOR_1_OFFSET))(this);
		}

		::System::Void _ctor_2(::System::String* B083BE7841B347C4, ::Il2CppArray<::System::Byte>* BA6F94B3198B063E, ::System::Int32 B48C66E5FB2449C6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERFALLBACKEXCEPTION__CTOR_2_OFFSET))(this, B083BE7841B347C4, BA6F94B3198B063E, B48C66E5FB2449C6);
		}
	};
}
