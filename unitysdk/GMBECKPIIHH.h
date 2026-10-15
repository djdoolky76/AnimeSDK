#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMBECKPIIHH;
class MNKGDKAIELH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GMBECKPIIHH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4C93A0)
#define GMBECKPIIHH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4C9710)
#define GMBECKPIIHH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4C8ED0)
#define GMBECKPIIHH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4C8DD0)
#define GMBECKPIIHH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4C8D50)
#define GMBECKPIIHH_EBPIAKEFHBA_OFFSET UNITYSDK_OFFSET(0x1E4C8F30)
#define GMBECKPIIHH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4C8F70)
#define GMBECKPIIHH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4C8F40)
#define GMBECKPIIHH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E4C8F20)
#define GMBECKPIIHH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4C90C0)
#define GMBECKPIIHH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4C8D10)
#define GMBECKPIIHH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4C95E0)
#define GMBECKPIIHH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4C9520)
#define GMBECKPIIHH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E4C8F10)
#define GMBECKPIIHH_OBBJCJCLBDF_OFFSET UNITYSDK_OFFSET(0x1E4C8F00)
#define GMBECKPIIHH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4C8D40)
#define GMBECKPIIHH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4C9200)
#define GMBECKPIIHH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4C9260)

	class GMBECKPIIHH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NPKDCDOLFGL; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::MNKGDKAIELH*>* JEDPGLIAEFN; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GMBECKPIIHH")->GetStaticField(0x20250);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_EPBCHHIHPID()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GMBECKPIIHH")->GetStaticField(0x20258);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_DLLDOHDNIBC()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GMBECKPIIHH")->GetStaticField(0x20260);
		}

		// static const ::System::Object EIPPAOMOJAI; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object IFKBHGJHEIH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBECKPIIHH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GMBECKPIIHH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMBECKPIIHH*))((::PBYTE)hIl2Cpp + GMBECKPIIHH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMBECKPIIHH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GMBECKPIIHH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBECKPIIHH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GMBECKPIIHH* Clone()
		{
			return ((::GMBECKPIIHH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBECKPIIHH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OBBJCJCLBDF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBECKPIIHH_OBBJCJCLBDF_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBECKPIIHH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GMBECKPIIHH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::MNKGDKAIELH*>* EBPIAKEFHBA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::MNKGDKAIELH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBECKPIIHH_EBPIAKEFHBA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GMBECKPIIHH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GMBECKPIIHH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GMBECKPIIHH*))((::PBYTE)hIl2Cpp + GMBECKPIIHH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBECKPIIHH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBECKPIIHH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GMBECKPIIHH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBECKPIIHH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GMBECKPIIHH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMBECKPIIHH*))((::PBYTE)hIl2Cpp + GMBECKPIIHH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GMBECKPIIHH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
