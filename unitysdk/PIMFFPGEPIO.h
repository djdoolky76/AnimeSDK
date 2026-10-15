#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMHIHBHECKD.h"
#include "unitysdk/System/Object.h"
class PIMFFPGEPIO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PIMFFPGEPIO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF6DAC0)
#define PIMFFPGEPIO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF6DE40)
#define PIMFFPGEPIO_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF6D5D0)
#define PIMFFPGEPIO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF6D4D0)
#define PIMFFPGEPIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF6D450)
#define PIMFFPGEPIO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF6D670)
#define PIMFFPGEPIO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF6D640)
#define PIMFFPGEPIO_FCIACLFENJO_OFFSET UNITYSDK_OFFSET(0x1DF6D630)
#define PIMFFPGEPIO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF6D7C0)
#define PIMFFPGEPIO_IGMALHMOLNF_OFFSET UNITYSDK_OFFSET(0x1DF6D620)
#define PIMFFPGEPIO_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1DF6D610)
#define PIMFFPGEPIO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF6D410)
#define PIMFFPGEPIO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF6DD30)
#define PIMFFPGEPIO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF6DC70)
#define PIMFFPGEPIO_OPIADCNNMLL_OFFSET UNITYSDK_OFFSET(0x1DF6D600)
#define PIMFFPGEPIO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF6D440)
#define PIMFFPGEPIO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF6D910)
#define PIMFFPGEPIO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF6D970)

	class PIMFFPGEPIO : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* OGKKNAMOCCL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GKOHBFHOFKN; // 0x20
		::BMHIHBHECKD GMPNCOBOFDM; // 0x28
		static ::Google::Protobuf::FieldCodec** StaticGet_AEHICDCPNGI()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "PIMFFPGEPIO")->GetStaticField(0x44850);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_JPFOCMAFMHN()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "PIMFFPGEPIO")->GetStaticField(0x44858);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PIMFFPGEPIO")->GetStaticField(0x44860);
		}

		// static const ::System::Object FADFMLLHOMO; // 0x0
		// static const ::System::Object GDFHGOOLLFD; // 0x0
		// static const ::System::Object OOGFOPMFOHP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMFFPGEPIO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PIMFFPGEPIO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIMFFPGEPIO*))((::PBYTE)hIl2Cpp + PIMFFPGEPIO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIMFFPGEPIO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PIMFFPGEPIO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMFFPGEPIO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PIMFFPGEPIO* Clone()
		{
			return ((::PIMFFPGEPIO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMFFPGEPIO_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* OPIADCNNMLL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMFFPGEPIO_OPIADCNNMLL_OFFSET))(this);
		}

		::BMHIHBHECKD JBIOGKPHKKC()
		{
			return ((::BMHIHBHECKD(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMFFPGEPIO_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Void IGMALHMOLNF(::BMHIHBHECKD a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMHIHBHECKD))((::PBYTE)hIl2Cpp + PIMFFPGEPIO_IGMALHMOLNF_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FCIACLFENJO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMFFPGEPIO_FCIACLFENJO_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PIMFFPGEPIO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PIMFFPGEPIO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PIMFFPGEPIO*))((::PBYTE)hIl2Cpp + PIMFFPGEPIO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMFFPGEPIO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMFFPGEPIO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PIMFFPGEPIO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMFFPGEPIO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PIMFFPGEPIO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIMFFPGEPIO*))((::PBYTE)hIl2Cpp + PIMFFPGEPIO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PIMFFPGEPIO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
