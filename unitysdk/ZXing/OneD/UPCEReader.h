#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/OneD/UPCEANReader.h"
namespace System { class String; }

#define ZXING_ONED_UPCEREADER_CCTOR_OFFSET UNITYSDK_OFFSET(0x20977AF0)
#define ZXING_ONED_UPCEREADER_CONVERTUPCETOUPCA_OFFSET UNITYSDK_OFFSET(0x20977580)

namespace ZXing::OneD
{
	inline static constexpr unsigned int UPCEReader_TypeDefinitionIndex = 7035;

	class UPCEReader : public ::ZXing::OneD::UPCEANReader
	{
	public:
		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_NUMSYS_AND_CHECK_DIGIT_PATTERNS()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)UnitySDK::FromName("ZXing.OneD", "UPCEReader")->GetStaticField(0x439A0);
		}

		static ::Il2CppArray<::System::Int32>** StaticGet_MIDDLE_END_PATTERN()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("ZXing.OneD", "UPCEReader")->GetStaticField(0x439A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_ONED_UPCEREADER_CCTOR_OFFSET))();
		}

		static ::System::String* convertUPCEtoUPCA(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + ZXING_ONED_UPCEREADER_CONVERTUPCETOUPCA_OFFSET))(a1);
		}

	};
}
