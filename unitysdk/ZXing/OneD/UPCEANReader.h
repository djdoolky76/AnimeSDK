#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/OneD/OneDReader.h"
#include "unitysdk/System/Nullable_1.h"
namespace System { class String; }

#define ZXING_ONED_UPCEANREADER_CCTOR_OFFSET UNITYSDK_OFFSET(0x17A939C0)
#define ZXING_ONED_UPCEANREADER_CHECKSTANDARDUPCEANCHECKSUM_OFFSET UNITYSDK_OFFSET(0x17A8D8D0)
#define ZXING_ONED_UPCEANREADER_GETSTANDARDUPCEANCHECKSUM_OFFSET UNITYSDK_OFFSET(0x17A8D6B0)

namespace ZXing::OneD
{
	inline static constexpr unsigned int UPCEANReader_TypeDefinitionIndex = 6998;

	class UPCEANReader : public ::ZXing::OneD::OneDReader
	{
	public:
		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_L_PATTERNS()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)UnitySDK::FromName("ZXing.OneD", "UPCEANReader")->GetStaticField(0x2AA10);
		}

		static ::Il2CppArray<::System::Int32>** StaticGet_MIDDLE_PATTERN()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("ZXing.OneD", "UPCEANReader")->GetStaticField(0x2AA18);
		}

		static ::Il2CppArray<::System::Int32>** StaticGet_START_END_PATTERN()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("ZXing.OneD", "UPCEANReader")->GetStaticField(0x2AA20);
		}

		static ::Il2CppArray<::System::Int32>** StaticGet_END_PATTERN()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("ZXing.OneD", "UPCEANReader")->GetStaticField(0x2AA28);
		}

		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_L_AND_G_PATTERNS()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)UnitySDK::FromName("ZXing.OneD", "UPCEANReader")->GetStaticField(0x2AA30);
		}

		static ::System::Int32* StaticGet_MAX_INDIVIDUAL_VARIANCE()
		{
			return (::System::Int32*)UnitySDK::FromName("ZXing.OneD", "UPCEANReader")->GetStaticField(0x8A00);
		}

		static ::System::Int32* StaticGet_MAX_AVG_VARIANCE()
		{
			return (::System::Int32*)UnitySDK::FromName("ZXing.OneD", "UPCEANReader")->GetStaticField(0x8A04);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_ONED_UPCEANREADER_CCTOR_OFFSET))();
		}

		static ::System::Boolean checkStandardUPCEANChecksum(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + ZXING_ONED_UPCEANREADER_CHECKSTANDARDUPCEANCHECKSUM_OFFSET))(a1);
		}

		static ::System::Nullable_1<::System::Int32> getStandardUPCEANChecksum(::System::String* a1)
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::System::String*))((::PBYTE)hIl2Cpp + ZXING_ONED_UPCEANREADER_GETSTANDARDUPCEANCHECKSUM_OFFSET))(a1);
		}

	};
}
