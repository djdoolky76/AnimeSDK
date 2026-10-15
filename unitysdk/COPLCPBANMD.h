#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class COPLCPBANMD;
class PDFEPMMIKDF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define COPLCPBANMD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1398C0)
#define COPLCPBANMD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E139BB0)
#define COPLCPBANMD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1393D0)
#define COPLCPBANMD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E139340)
#define COPLCPBANMD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E139300)
#define COPLCPBANMD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E139590)
#define COPLCPBANMD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E139430)
#define COPLCPBANMD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1396C0)
#define COPLCPBANMD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1392C0)
#define COPLCPBANMD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1399F0)
#define COPLCPBANMD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E139950)
#define COPLCPBANMD_MOFFLKMBGAE_OFFSET UNITYSDK_OFFSET(0x1E139410)
#define COPLCPBANMD_OCADIIIBEGK_OFFSET UNITYSDK_OFFSET(0x1E139420)
#define COPLCPBANMD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1392F0)
#define COPLCPBANMD_PDJHNLCGKBA_OFFSET UNITYSDK_OFFSET(0x1E139400)
#define COPLCPBANMD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E139730)
#define COPLCPBANMD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E139790)

	class COPLCPBANMD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::PDFEPMMIKDF*>* IJNPHIPLHKJ; // 0x18
		::System::Boolean LNBPIGDCOAG; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "COPLCPBANMD")->GetStaticField(0x21E40);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_OKPKIJKMGOF()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "COPLCPBANMD")->GetStaticField(0x21E48);
		}

		// static const ::System::Object HELLCIHJGIM; // 0x0
		// static const ::System::Object JGJGNPMEGDJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COPLCPBANMD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::COPLCPBANMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::COPLCPBANMD*))((::PBYTE)hIl2Cpp + COPLCPBANMD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COPLCPBANMD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + COPLCPBANMD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + COPLCPBANMD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::COPLCPBANMD* Clone()
		{
			return ((::COPLCPBANMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + COPLCPBANMD_CLONE_OFFSET))(this);
		}

		::System::Boolean PDJHNLCGKBA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COPLCPBANMD_PDJHNLCGKBA_OFFSET))(this);
		}

		::System::Void MOFFLKMBGAE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + COPLCPBANMD_MOFFLKMBGAE_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PDFEPMMIKDF*>* OCADIIIBEGK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PDFEPMMIKDF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + COPLCPBANMD_OCADIIIBEGK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + COPLCPBANMD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::COPLCPBANMD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::COPLCPBANMD*))((::PBYTE)hIl2Cpp + COPLCPBANMD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COPLCPBANMD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COPLCPBANMD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + COPLCPBANMD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COPLCPBANMD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::COPLCPBANMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::COPLCPBANMD*))((::PBYTE)hIl2Cpp + COPLCPBANMD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + COPLCPBANMD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
