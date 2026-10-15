#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EDDIFENDEFG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EDDIFENDEFG_AOFBBABEJCB_OFFSET UNITYSDK_OFFSET(0x1E25BC00)
#define EDDIFENDEFG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E25C030)
#define EDDIFENDEFG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E25C3C0)
#define EDDIFENDEFG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E25BB70)
#define EDDIFENDEFG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E25BAD0)
#define EDDIFENDEFG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E25BA90)
#define EDDIFENDEFG_EKPDJJIHBCB_OFFSET UNITYSDK_OFFSET(0x1E25BBE0)
#define EDDIFENDEFG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E25BC40)
#define EDDIFENDEFG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E25BC10)
#define EDDIFENDEFG_FNBFMKADPEH_OFFSET UNITYSDK_OFFSET(0x1E25BBA0)
#define EDDIFENDEFG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E25BD80)
#define EDDIFENDEFG_HPMICBAKODC_OFFSET UNITYSDK_OFFSET(0x1E25BBB0)
#define EDDIFENDEFG_IPLBECBNJLK_OFFSET UNITYSDK_OFFSET(0x1E25BBC0)
#define EDDIFENDEFG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E25BA50)
#define EDDIFENDEFG_LMLKAECMDNH_OFFSET UNITYSDK_OFFSET(0x1E25BBD0)
#define EDDIFENDEFG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E25C2D0)
#define EDDIFENDEFG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E25C240)
#define EDDIFENDEFG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E25BA80)
#define EDDIFENDEFG_PPBHLLMLNLH_OFFSET UNITYSDK_OFFSET(0x1E25BBF0)
#define EDDIFENDEFG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E25BE00)
#define EDDIFENDEFG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E25BE60)

	class EDDIFENDEFG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>* CCIAIDIACBE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 DKLCPIAINIK; // 0x20
		::System::UInt32 BHFEEGICLMK; // 0x24
		::System::UInt32 DNCBIIBLFOO; // 0x28
		static ::System::Object** StaticGet_DFMGBGOEHNO()
		{
			return (::System::Object**)UnitySDK::FromName("", "EDDIFENDEFG")->GetStaticField(0x3F860);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EDDIFENDEFG")->GetStaticField(0x3F868);
		}

		// static const ::System::Object NBCBOBPECPD; // 0x0
		// static const ::System::Object OEMNIDFIJEO; // 0x0
		// static const ::System::Object MDHHACEKNNO; // 0x0
		// static const ::System::Object JFFKLDOPFOJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDDIFENDEFG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EDDIFENDEFG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDDIFENDEFG*))((::PBYTE)hIl2Cpp + EDDIFENDEFG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDDIFENDEFG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EDDIFENDEFG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDDIFENDEFG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EDDIFENDEFG* Clone()
		{
			return ((::EDDIFENDEFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDDIFENDEFG_CLONE_OFFSET))(this);
		}

		::System::UInt32 FNBFMKADPEH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDDIFENDEFG_FNBFMKADPEH_OFFSET))(this);
		}

		::System::Void HPMICBAKODC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EDDIFENDEFG_HPMICBAKODC_OFFSET))(this, a1);
		}

		::System::UInt32 IPLBECBNJLK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDDIFENDEFG_IPLBECBNJLK_OFFSET))(this);
		}

		::System::Void LMLKAECMDNH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EDDIFENDEFG_LMLKAECMDNH_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>* EKPDJJIHBCB()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDDIFENDEFG_EKPDJJIHBCB_OFFSET))(this);
		}

		::System::UInt32 PPBHLLMLNLH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDDIFENDEFG_PPBHLLMLNLH_OFFSET))(this);
		}

		::System::Void AOFBBABEJCB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EDDIFENDEFG_AOFBBABEJCB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EDDIFENDEFG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EDDIFENDEFG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EDDIFENDEFG*))((::PBYTE)hIl2Cpp + EDDIFENDEFG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDDIFENDEFG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDDIFENDEFG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EDDIFENDEFG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDDIFENDEFG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EDDIFENDEFG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDDIFENDEFG*))((::PBYTE)hIl2Cpp + EDDIFENDEFG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EDDIFENDEFG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
