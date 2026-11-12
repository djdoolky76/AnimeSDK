#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/OneD/OneDReader.h"

#define ZXING_ONED_CODE128READER_CCTOR_OFFSET UNITYSDK_OFFSET(0x20967D20)

namespace ZXing::OneD
{
	inline static constexpr unsigned int Code128Reader_TypeDefinitionIndex = 7054;

	class Code128Reader : public ::ZXing::OneD::OneDReader
	{
	public:
		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_CODE_PATTERNS()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)UnitySDK::FromName("ZXing.OneD", "Code128Reader")->GetStaticField(0x43050);
		}

		static ::System::Int32* StaticGet_MAX_INDIVIDUAL_VARIANCE()
		{
			return (::System::Int32*)UnitySDK::FromName("ZXing.OneD", "Code128Reader")->GetStaticField(0xE2A0);
		}

		static ::System::Int32* StaticGet_MAX_AVG_VARIANCE()
		{
			return (::System::Int32*)UnitySDK::FromName("ZXing.OneD", "Code128Reader")->GetStaticField(0xE2A4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_ONED_CODE128READER_CCTOR_OFFSET))();
		}

	};
}
