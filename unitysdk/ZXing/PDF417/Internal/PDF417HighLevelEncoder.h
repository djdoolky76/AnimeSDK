#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZXing/PDF417/Internal/Compaction.h"
namespace System { class String; }
namespace System::Text { class Encoding; }
namespace System::Text { class StringBuilder; }

#define ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_CCTOR_OFFSET UNITYSDK_OFFSET(0x17A98590)
#define ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_DETERMINECONSECUTIVEBINARYCOUNT_OFFSET UNITYSDK_OFFSET(0x17A9B3A0)
#define ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_DETERMINECONSECUTIVEDIGITCOUNT_OFFSET UNITYSDK_OFFSET(0x17A9AED0)
#define ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_DETERMINECONSECUTIVETEXTCOUNT_OFFSET UNITYSDK_OFFSET(0x17A9B0B0)
#define ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_ENCODEBINARY_OFFSET UNITYSDK_OFFSET(0x17A99EB0)
#define ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_ENCODEHIGHLEVEL_OFFSET UNITYSDK_OFFSET(0x17A969B0)
#define ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_ENCODENUMERIC_OFFSET UNITYSDK_OFFSET(0x17A9A690)
#define ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_ENCODETEXT_OFFSET UNITYSDK_OFFSET(0x17A98C20)
#define ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_ENCODINGECI_OFFSET UNITYSDK_OFFSET(0x17A98890)
#define ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_GETENCODER_OFFSET UNITYSDK_OFFSET(0x17A9BF80)
#define ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_ISALPHALOWER_OFFSET UNITYSDK_OFFSET(0x17A9C300)
#define ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_ISALPHAUPPER_OFFSET UNITYSDK_OFFSET(0x17A9C2E0)
#define ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_ISDIGIT_OFFSET UNITYSDK_OFFSET(0x17A9C440)
#define ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_ISMIXED_OFFSET UNITYSDK_OFFSET(0x17A9C320)
#define ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_ISPUNCTUATION_OFFSET UNITYSDK_OFFSET(0x17A9C3B0)
#define ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_ISTEXT_OFFSET UNITYSDK_OFFSET(0x17A9C450)
#define ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_TOBYTES_1_OFFSET UNITYSDK_OFFSET(0x17A9C1D0)
#define ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_TOBYTES_OFFSET UNITYSDK_OFFSET(0x17A99DC0)

namespace ZXing::PDF417::Internal
{
	inline static constexpr unsigned int PDF417HighLevelEncoder_TypeDefinitionIndex = 7061;

	class PDF417HighLevelEncoder : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_DEFAULT_ENCODING_NAME()
		{
			return (::System::String**)UnitySDK::FromName("ZXing.PDF417.Internal", "PDF417HighLevelEncoder")->GetStaticField(0x2B0A0);
		}

		static ::Il2CppArray<::System::SByte>** StaticGet_PUNCTUATION()
		{
			return (::Il2CppArray<::System::SByte>**)UnitySDK::FromName("ZXing.PDF417.Internal", "PDF417HighLevelEncoder")->GetStaticField(0x2B0A8);
		}

		static ::Il2CppArray<::System::SByte>** StaticGet_MIXED()
		{
			return (::Il2CppArray<::System::SByte>**)UnitySDK::FromName("ZXing.PDF417.Internal", "PDF417HighLevelEncoder")->GetStaticField(0x2B0B0);
		}

		static ::Il2CppArray<::System::SByte>** StaticGet_TEXT_MIXED_RAW()
		{
			return (::Il2CppArray<::System::SByte>**)UnitySDK::FromName("ZXing.PDF417.Internal", "PDF417HighLevelEncoder")->GetStaticField(0x2B0B8);
		}

		static ::Il2CppArray<::System::SByte>** StaticGet_TEXT_PUNCTUATION_RAW()
		{
			return (::Il2CppArray<::System::SByte>**)UnitySDK::FromName("ZXing.PDF417.Internal", "PDF417HighLevelEncoder")->GetStaticField(0x2B0C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_CCTOR_OFFSET))();
		}

		static ::System::String* encodeHighLevel(::System::String* a1, ::ZXing::PDF417::Internal::Compaction a2, ::System::Text::Encoding* a3, ::System::Boolean a4)
		{
			return ((::System::String*(*)(::System::String*, ::ZXing::PDF417::Internal::Compaction, ::System::Text::Encoding*, ::System::Boolean))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_ENCODEHIGHLEVEL_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Text::Encoding* getEncoder(::System::Text::Encoding* a1)
		{
			return ((::System::Text::Encoding*(*)(::System::Text::Encoding*))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_GETENCODER_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* toBytes(::System::String* a1, ::System::Text::Encoding* a2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_TOBYTES_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Byte>* toBytes_1(::System::Char a1, ::System::Text::Encoding* a2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Char, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_TOBYTES_1_OFFSET))(a1, a2);
		}

		static ::System::Int32 encodeText(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Text::StringBuilder* a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Text::StringBuilder*, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_ENCODETEXT_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void encodeBinary(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Text::StringBuilder* a5)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_ENCODEBINARY_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void encodeNumeric(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Text::StringBuilder* a4)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_ENCODENUMERIC_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean isDigit(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_ISDIGIT_OFFSET))(a1);
		}

		static ::System::Boolean isAlphaUpper(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_ISALPHAUPPER_OFFSET))(a1);
		}

		static ::System::Boolean isAlphaLower(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_ISALPHALOWER_OFFSET))(a1);
		}

		static ::System::Boolean isMixed(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_ISMIXED_OFFSET))(a1);
		}

		static ::System::Boolean isPunctuation(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_ISPUNCTUATION_OFFSET))(a1);
		}

		static ::System::Boolean isText(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_ISTEXT_OFFSET))(a1);
		}

		static ::System::Int32 determineConsecutiveDigitCount(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_DETERMINECONSECUTIVEDIGITCOUNT_OFFSET))(a1, a2);
		}

		static ::System::Int32 determineConsecutiveTextCount(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_DETERMINECONSECUTIVETEXTCOUNT_OFFSET))(a1, a2);
		}

		static ::System::Int32 determineConsecutiveBinaryCount(::System::String* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::System::Text::Encoding* a4)
		{
			return ((::System::Int32(*)(::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_DETERMINECONSECUTIVEBINARYCOUNT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void encodingECI(::System::Int32 a1, ::System::Text::StringBuilder* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_ENCODINGECI_OFFSET))(a1, a2);
		}

	};
}
