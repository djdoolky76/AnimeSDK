#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/OneD/OneDReader.h"
namespace System { class String; }

#define ZXING_ONED_CODE39READER_CCTOR_OFFSET UNITYSDK_OFFSET(0x2096D830)

namespace ZXing::OneD
{
	inline static constexpr unsigned int Code39Reader_TypeDefinitionIndex = 7053;

	class Code39Reader : public ::ZXing::OneD::OneDReader
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_CHARACTER_ENCODINGS()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("ZXing.OneD", "Code39Reader")->GetStaticField(0x43130);
		}

		static ::System::String** StaticGet_ALPHABET_STRING()
		{
			return (::System::String**)UnitySDK::FromName("ZXing.OneD", "Code39Reader")->GetStaticField(0x43138);
		}

		static ::System::String** StaticGet_CHECK_DIGIT_STRING()
		{
			return (::System::String**)UnitySDK::FromName("ZXing.OneD", "Code39Reader")->GetStaticField(0x43140);
		}

		static ::System::Int32* StaticGet_ASTERISK_ENCODING()
		{
			return (::System::Int32*)UnitySDK::FromName("ZXing.OneD", "Code39Reader")->GetStaticField(0xE2E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_ONED_CODE39READER_CCTOR_OFFSET))();
		}

	};
}
