#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/OneD/OneDReader.h"

#define ZXING_ONED_ITFREADER_CCTOR_OFFSET UNITYSDK_OFFSET(0x17A8F0C0)

namespace ZXing::OneD
{
	inline static constexpr unsigned int ITFReader_TypeDefinitionIndex = 6984;

	class ITFReader : public ::ZXing::OneD::OneDReader
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_START_PATTERN()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("ZXing.OneD", "ITFReader")->GetStaticField(0x2AA70);
		}

		static ::Il2CppArray<::System::Int32>** StaticGet_DEFAULT_ALLOWED_LENGTHS()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("ZXing.OneD", "ITFReader")->GetStaticField(0x2AA78);
		}

		static ::Il2CppArray<::System::Int32>** StaticGet_END_PATTERN_REVERSED()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("ZXing.OneD", "ITFReader")->GetStaticField(0x2AA80);
		}

		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_PATTERNS()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)UnitySDK::FromName("ZXing.OneD", "ITFReader")->GetStaticField(0x2AA88);
		}

		static ::System::Int32* StaticGet_MAX_AVG_VARIANCE()
		{
			return (::System::Int32*)UnitySDK::FromName("ZXing.OneD", "ITFReader")->GetStaticField(0x8A10);
		}

		static ::System::Int32* StaticGet_MAX_INDIVIDUAL_VARIANCE()
		{
			return (::System::Int32*)UnitySDK::FromName("ZXing.OneD", "ITFReader")->GetStaticField(0x8A14);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_ONED_ITFREADER_CCTOR_OFFSET))();
		}

	};
}
