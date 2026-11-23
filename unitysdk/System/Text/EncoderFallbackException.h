#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArgumentException.h"
#include "unitysdk/B6564CAC678AC465.h"

class E519989062D53DE5;
namespace System { class String; }

#define SYSTEM_TEXT_ENCODERFALLBACKEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3D1A490)
#define SYSTEM_TEXT_ENCODERFALLBACKEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3D1A6B0)
#define SYSTEM_TEXT_ENCODERFALLBACKEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x3B765A0)
#define SYSTEM_TEXT_ENCODERFALLBACKEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x3D1A440)

namespace System::Text
{
	inline static constexpr unsigned int EncoderFallbackException_TypeDefinitionIndex = 10883;

	class EncoderFallbackException : public ::System::ArgumentException
	{
	public:
		::System::Char _charUnknown; // 0x98
		::System::Char _charUnknownHigh; // 0x9A
		::System::Char _charUnknownLow; // 0x9C
		::System::Byte _padding0[0x2];
		::System::Int32 _index; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACKEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* B083BE7841B347C4, ::System::Char F263CE17DB43C0BE, ::System::Char FA21F3D140613A43, ::System::Int32 B48C66E5FB2449C6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Char, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACKEXCEPTION__CTOR_1_OFFSET))(this, B083BE7841B347C4, F263CE17DB43C0BE, FA21F3D140613A43, B48C66E5FB2449C6);
		}

		::System::Void _ctor_2(::System::String* B083BE7841B347C4, ::System::Char E6AF82C3F1A57230, ::System::Int32 B48C66E5FB2449C6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACKEXCEPTION__CTOR_2_OFFSET))(this, B083BE7841B347C4, E6AF82C3F1A57230, B48C66E5FB2449C6);
		}

		::System::Void _ctor_3(::E519989062D53DE5* EE8EA789BF8D394F, ::B6564CAC678AC465 B2E673F362AA060E)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACKEXCEPTION__CTOR_3_OFFSET))(this, EE8EA789BF8D394F, B2E673F362AA060E);
		}
	};
}
