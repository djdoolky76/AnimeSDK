#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/OneD/OneDimensionalCodeWriter.h"
#include "unitysdk/ZXing/BarcodeFormat.h"
#include "unitysdk/ZXing/EncodeHintType.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace ZXing::Common { class BitMatrix; }

#define ZXING_ONED_PLESSEYWRITER_CCTOR_OFFSET UNITYSDK_OFFSET(0x17A92C10)
#define ZXING_ONED_PLESSEYWRITER_CTOR_OFFSET UNITYSDK_OFFSET(0x17A83CC0)
#define ZXING_ONED_PLESSEYWRITER_ENCODE_1_OFFSET UNITYSDK_OFFSET(0x17A91A50)
#define ZXING_ONED_PLESSEYWRITER_ENCODE_OFFSET UNITYSDK_OFFSET(0x17A919A0)

namespace ZXing::OneD
{
	inline static constexpr unsigned int PlesseyWriter_TypeDefinitionIndex = 7003;

	class PlesseyWriter : public ::ZXing::OneD::OneDimensionalCodeWriter
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_endWidths()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("ZXing.OneD", "PlesseyWriter")->GetStaticField(0x2ABA0);
		}

		static ::Il2CppArray<::System::Int32>** StaticGet_startWidths()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("ZXing.OneD", "PlesseyWriter")->GetStaticField(0x2ABA8);
		}

		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_numberWidths()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)UnitySDK::FromName("ZXing.OneD", "PlesseyWriter")->GetStaticField(0x2ABB0);
		}

		static ::Il2CppArray<::System::Int32>** StaticGet_terminationWidths()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("ZXing.OneD", "PlesseyWriter")->GetStaticField(0x2ABB8);
		}

		static ::Il2CppArray<::System::Int32>** StaticGet_crc1Widths()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("ZXing.OneD", "PlesseyWriter")->GetStaticField(0x2ABC0);
		}

		static ::Il2CppArray<::System::Int32>** StaticGet_crc0Widths()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("ZXing.OneD", "PlesseyWriter")->GetStaticField(0x2ABC8);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_crcGrid()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("ZXing.OneD", "PlesseyWriter")->GetStaticField(0x2ABD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_ONED_PLESSEYWRITER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_ONED_PLESSEYWRITER_CCTOR_OFFSET))();
		}

		::ZXing::Common::BitMatrix* encode(::System::String* a1, ::ZXing::BarcodeFormat a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>* a5)
		{
			return ((::ZXing::Common::BitMatrix*(*)(::PVOID, ::System::String*, ::ZXing::BarcodeFormat, ::System::Int32, ::System::Int32, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>*))((::PBYTE)hIl2Cpp + ZXING_ONED_PLESSEYWRITER_ENCODE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::Il2CppArray<::System::Boolean>* encode_1(::System::String* a1)
		{
			return ((::Il2CppArray<::System::Boolean>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZXING_ONED_PLESSEYWRITER_ENCODE_1_OFFSET))(this, a1);
		}

	};
}
