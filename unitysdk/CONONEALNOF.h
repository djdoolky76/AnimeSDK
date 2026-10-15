#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CONONEALNOF;
class IJDLENJJBHJ;
class LALKBPJANIH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CONONEALNOF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E137B20)
#define CONONEALNOF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E137F20)
#define CONONEALNOF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E137720)
#define CONONEALNOF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E137620)
#define CONONEALNOF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1375B0)
#define CONONEALNOF_DCKAMLHKADM_OFFSET UNITYSDK_OFFSET(0x1E137770)
#define CONONEALNOF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1377F0)
#define CONONEALNOF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E137790)
#define CONONEALNOF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E137940)
#define CONONEALNOF_IDOPMHEDPMA_OFFSET UNITYSDK_OFFSET(0x1E137780)
#define CONONEALNOF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E137540)
#define CONONEALNOF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E137CF0)
#define CONONEALNOF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E137C00)
#define CONONEALNOF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1375A0)
#define CONONEALNOF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1379D0)
#define CONONEALNOF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E137A30)

	class CONONEALNOF : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::LALKBPJANIH*>* OAIBICEGFLD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::IJDLENJJBHJ*>* ELBGFDFFBPH; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_EHPMIHMAMFE()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "CONONEALNOF")->GetStaticField(0x21A00);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CONONEALNOF")->GetStaticField(0x21A08);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_ACIBBOKEOBN()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "CONONEALNOF")->GetStaticField(0x21A10);
		}

		// static const ::System::Object JBKGNCCMBND; // 0x0
		// static const ::System::Object HIDJPDFBCLN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONONEALNOF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CONONEALNOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CONONEALNOF*))((::PBYTE)hIl2Cpp + CONONEALNOF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CONONEALNOF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CONONEALNOF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONONEALNOF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CONONEALNOF* Clone()
		{
			return ((::CONONEALNOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONONEALNOF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::IJDLENJJBHJ*>* DCKAMLHKADM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::IJDLENJJBHJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONONEALNOF_DCKAMLHKADM_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LALKBPJANIH*>* IDOPMHEDPMA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LALKBPJANIH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONONEALNOF_IDOPMHEDPMA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CONONEALNOF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CONONEALNOF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CONONEALNOF*))((::PBYTE)hIl2Cpp + CONONEALNOF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONONEALNOF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONONEALNOF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CONONEALNOF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONONEALNOF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CONONEALNOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CONONEALNOF*))((::PBYTE)hIl2Cpp + CONONEALNOF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CONONEALNOF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
