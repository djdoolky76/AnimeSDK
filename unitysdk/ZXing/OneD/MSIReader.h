#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/OneD/OneDReader.h"
namespace System { class String; }

#define ZXING_ONED_MSIREADER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6C40D0)

namespace ZXing::OneD
{
	class MSIReader : public ::ZXing::OneD::OneDReader
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_CHARACTER_ENCODINGS()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("ZXing.OneD", "MSIReader")->GetStaticField(0x22D60);
		}

		static ::Il2CppArray<::System::Int32>** StaticGet_doubleAndCrossSum()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("ZXing.OneD", "MSIReader")->GetStaticField(0x22D68);
		}

		static ::System::String** StaticGet_ALPHABET_STRING()
		{
			return (::System::String**)UnitySDK::FromName("ZXing.OneD", "MSIReader")->GetStaticField(0x22D70);
		}

		static ::Il2CppArray<::System::Char>** StaticGet_ALPHABET()
		{
			return (::Il2CppArray<::System::Char>**)UnitySDK::FromName("ZXing.OneD", "MSIReader")->GetStaticField(0x22D78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_ONED_MSIREADER_CCTOR_OFFSET))();
		}

	};
}
