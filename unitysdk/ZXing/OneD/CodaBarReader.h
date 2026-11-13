#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/OneD/OneDReader.h"

#define ZXING_ONED_CODABARREADER_ARRAYCONTAINS_OFFSET UNITYSDK_OFFSET(0x17A83D50)
#define ZXING_ONED_CODABARREADER_CCTOR_OFFSET UNITYSDK_OFFSET(0x17A83D90)

namespace ZXing::OneD
{
	inline static constexpr unsigned int CodaBarReader_TypeDefinitionIndex = 6989;

	class CodaBarReader : public ::ZXing::OneD::OneDReader
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_CHARACTER_ENCODINGS()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("ZXing.OneD", "CodaBarReader")->GetStaticField(0x2A780);
		}

		static ::Il2CppArray<::System::Char>** StaticGet_STARTEND_ENCODING()
		{
			return (::Il2CppArray<::System::Char>**)UnitySDK::FromName("ZXing.OneD", "CodaBarReader")->GetStaticField(0x2A788);
		}

		static ::Il2CppArray<::System::Char>** StaticGet_ALPHABET()
		{
			return (::Il2CppArray<::System::Char>**)UnitySDK::FromName("ZXing.OneD", "CodaBarReader")->GetStaticField(0x2A790);
		}

		static ::System::Int32* StaticGet_PADDING()
		{
			return (::System::Int32*)UnitySDK::FromName("ZXing.OneD", "CodaBarReader")->GetStaticField(0x8980);
		}

		static ::System::Int32* StaticGet_MAX_ACCEPTABLE()
		{
			return (::System::Int32*)UnitySDK::FromName("ZXing.OneD", "CodaBarReader")->GetStaticField(0x8984);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_ONED_CODABARREADER_CCTOR_OFFSET))();
		}

		static ::System::Boolean arrayContains(::Il2CppArray<::System::Char>* a1, ::System::Char a2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Char>*, ::System::Char))((::PBYTE)hIl2Cpp + ZXING_ONED_CODABARREADER_ARRAYCONTAINS_OFFSET))(a1, a2);
		}

	};
}
