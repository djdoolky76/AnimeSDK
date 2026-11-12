#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/OneD/OneDReader.h"
namespace System { class String; }

#define ZXING_ONED_MSIREADER_CCTOR_OFFSET UNITYSDK_OFFSET(0x20973800)

namespace ZXing::OneD
{
	inline static constexpr unsigned int MSIReader_TypeDefinitionIndex = 7024;

	class MSIReader : public ::ZXing::OneD::OneDReader
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_ALPHABET()
		{
			return (::Il2CppArray<::System::Char>**)UnitySDK::FromName("ZXing.OneD", "MSIReader")->GetStaticField(0x43450);
		}

		static ::Il2CppArray<::System::Int32>** StaticGet_doubleAndCrossSum()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("ZXing.OneD", "MSIReader")->GetStaticField(0x43458);
		}

		static ::System::String** StaticGet_ALPHABET_STRING()
		{
			return (::System::String**)UnitySDK::FromName("ZXing.OneD", "MSIReader")->GetStaticField(0x43460);
		}

		static ::Il2CppArray<::System::Int32>** StaticGet_CHARACTER_ENCODINGS()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("ZXing.OneD", "MSIReader")->GetStaticField(0x43468);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_ONED_MSIREADER_CCTOR_OFFSET))();
		}

	};
}
