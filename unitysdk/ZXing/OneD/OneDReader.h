#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ZXING_ONED_ONEDREADER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6C51C0)

namespace ZXing::OneD
{
	class OneDReader : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_PATTERN_MATCH_RESULT_SCALE_FACTOR()
		{
			return (::System::Int32*)UnitySDK::FromName("ZXing.OneD", "OneDReader")->GetStaticField(0x7A90);
		}

		static ::System::Int32* StaticGet_INTEGER_MATH_SHIFT()
		{
			return (::System::Int32*)UnitySDK::FromName("ZXing.OneD", "OneDReader")->GetStaticField(0x7A94);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_ONED_ONEDREADER_CCTOR_OFFSET))();
		}

	};
}
