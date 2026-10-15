#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/OneD/OneDReader.h"

#define ZXING_ONED_CODE93READER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6912A0)

namespace ZXing::OneD
{
	inline static constexpr unsigned int Code93Reader_TypeDefinitionIndex = 6976;

	class Code93Reader : public ::ZXing::OneD::OneDReader
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_CHARACTER_ENCODINGS()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("ZXing.OneD", "Code93Reader")->GetStaticField(0x45DD0);
		}

		static ::Il2CppArray<::System::Char>** StaticGet_ALPHABET()
		{
			return (::Il2CppArray<::System::Char>**)UnitySDK::FromName("ZXing.OneD", "Code93Reader")->GetStaticField(0x45DD8);
		}

		static ::System::Int32* StaticGet_ASTERISK_ENCODING()
		{
			return (::System::Int32*)UnitySDK::FromName("ZXing.OneD", "Code93Reader")->GetStaticField(0x10720);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_ONED_CODE93READER_CCTOR_OFFSET))();
		}

	};
}
