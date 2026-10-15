#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/OneD/OneDReader.h"

#define ZXING_ONED_CODE128READER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6B8600)

namespace ZXing::OneD
{
	class Code128Reader : public ::ZXing::OneD::OneDReader
	{
	public:
		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_CODE_PATTERNS()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)UnitySDK::FromName("ZXing.OneD", "Code128Reader")->GetStaticField(0x227F0);
		}

		static ::System::Int32* StaticGet_MAX_AVG_VARIANCE()
		{
			return (::System::Int32*)UnitySDK::FromName("ZXing.OneD", "Code128Reader")->GetStaticField(0x7B00);
		}

		static ::System::Int32* StaticGet_MAX_INDIVIDUAL_VARIANCE()
		{
			return (::System::Int32*)UnitySDK::FromName("ZXing.OneD", "Code128Reader")->GetStaticField(0x7B04);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_ONED_CODE128READER_CCTOR_OFFSET))();
		}

	};
}
