#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAOAINDGCDK;
class EOHAFICJPIP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CAOAINDGCDK_AKFAOMBJHDC_OFFSET UNITYSDK_OFFSET(0x1E060040)
#define CAOAINDGCDK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0604C0)
#define CAOAINDGCDK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E060860)
#define CAOAINDGCDK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E060010)
#define CAOAINDGCDK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E05FF50)
#define CAOAINDGCDK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E05FF00)
#define CAOAINDGCDK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0601C0)
#define CAOAINDGCDK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E060070)
#define CAOAINDGCDK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E060060)
#define CAOAINDGCDK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0602E0)
#define CAOAINDGCDK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E05FEC0)
#define CAOAINDGCDK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E060690)
#define CAOAINDGCDK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0605F0)
#define CAOAINDGCDK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E060050)
#define CAOAINDGCDK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E05FEF0)
#define CAOAINDGCDK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E060350)
#define CAOAINDGCDK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0603B0)

	class CAOAINDGCDK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::EOHAFICJPIP*>* NNGDHPGKKEN; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_KKEEFMIJAGA()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "CAOAINDGCDK")->GetStaticField(0x31B0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CAOAINDGCDK")->GetStaticField(0x31B8);
		}

		// static const ::System::Object GPCMGIKPOML; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOAINDGCDK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CAOAINDGCDK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAOAINDGCDK*))((::PBYTE)hIl2Cpp + CAOAINDGCDK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAOAINDGCDK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CAOAINDGCDK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOAINDGCDK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CAOAINDGCDK* Clone()
		{
			return ((::CAOAINDGCDK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOAINDGCDK_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::EOHAFICJPIP*>* AKFAOMBJHDC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::EOHAFICJPIP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOAINDGCDK_AKFAOMBJHDC_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOAINDGCDK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CAOAINDGCDK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CAOAINDGCDK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CAOAINDGCDK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CAOAINDGCDK*))((::PBYTE)hIl2Cpp + CAOAINDGCDK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOAINDGCDK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOAINDGCDK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CAOAINDGCDK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOAINDGCDK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CAOAINDGCDK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAOAINDGCDK*))((::PBYTE)hIl2Cpp + CAOAINDGCDK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CAOAINDGCDK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
