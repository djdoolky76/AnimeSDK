#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLPLICDMFEL;
class MJEIKNGOCJO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BLPLICDMFEL_AOFBBABEJCB_OFFSET UNITYSDK_OFFSET(0x1E01CA20)
#define BLPLICDMFEL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E01CED0)
#define BLPLICDMFEL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E01D250)
#define BLPLICDMFEL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E01C9C0)
#define BLPLICDMFEL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E01C900)
#define BLPLICDMFEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E01C8B0)
#define BLPLICDMFEL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E01CBD0)
#define BLPLICDMFEL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E01CA40)
#define BLPLICDMFEL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E01CD00)
#define BLPLICDMFEL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E01C840)
#define BLPLICDMFEL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E01D080)
#define BLPLICDMFEL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E01CFE0)
#define BLPLICDMFEL_OHEPJBDKDHF_OFFSET UNITYSDK_OFFSET(0x1E01CA30)
#define BLPLICDMFEL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E01C8A0)
#define BLPLICDMFEL_PPBHLLMLNLH_OFFSET UNITYSDK_OFFSET(0x1E01CA10)
#define BLPLICDMFEL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E01CD70)
#define BLPLICDMFEL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E01CDD0)

	class BLPLICDMFEL : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::MJEIKNGOCJO*>* OFNCNFGNELH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 DKLCPIAINIK; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BLPLICDMFEL")->GetStaticField(0x4DBC0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_NIBPIAIHLCC()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "BLPLICDMFEL")->GetStaticField(0x4DBC8);
		}

		// static const ::System::Object JFFKLDOPFOJ; // 0x0
		// static const ::System::Object JFCKPKEICHK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPLICDMFEL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BLPLICDMFEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BLPLICDMFEL*))((::PBYTE)hIl2Cpp + BLPLICDMFEL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLPLICDMFEL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BLPLICDMFEL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPLICDMFEL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BLPLICDMFEL* Clone()
		{
			return ((::BLPLICDMFEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPLICDMFEL_CLONE_OFFSET))(this);
		}

		::System::UInt32 PPBHLLMLNLH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPLICDMFEL_PPBHLLMLNLH_OFFSET))(this);
		}

		::System::Void AOFBBABEJCB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLPLICDMFEL_AOFBBABEJCB_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::MJEIKNGOCJO*>* OHEPJBDKDHF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::MJEIKNGOCJO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPLICDMFEL_OHEPJBDKDHF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLPLICDMFEL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BLPLICDMFEL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BLPLICDMFEL*))((::PBYTE)hIl2Cpp + BLPLICDMFEL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPLICDMFEL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPLICDMFEL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BLPLICDMFEL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPLICDMFEL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BLPLICDMFEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BLPLICDMFEL*))((::PBYTE)hIl2Cpp + BLPLICDMFEL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BLPLICDMFEL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
