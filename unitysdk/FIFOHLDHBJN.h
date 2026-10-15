#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FIFOHLDHBJN;
class HNBOHDBLMBE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FIFOHLDHBJN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3975C0)
#define FIFOHLDHBJN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3978C0)
#define FIFOHLDHBJN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E397140)
#define FIFOHLDHBJN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E397090)
#define FIFOHLDHBJN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E397040)
#define FIFOHLDHBJN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E397320)
#define FIFOHLDHBJN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3971A0)
#define FIFOHLDHBJN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E397440)
#define FIFOHLDHBJN_GOAHOGGOLOJ_OFFSET UNITYSDK_OFFSET(0x1E397190)
#define FIFOHLDHBJN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E396FD0)
#define FIFOHLDHBJN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E397700)
#define FIFOHLDHBJN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E397660)
#define FIFOHLDHBJN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E397030)
#define FIFOHLDHBJN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3974B0)
#define FIFOHLDHBJN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E397510)

	class FIFOHLDHBJN : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::HNBOHDBLMBE*>* BDGHBBABABH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FIFOHLDHBJN")->GetStaticField(0x5FFC0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_HPDECJBEECG()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "FIFOHLDHBJN")->GetStaticField(0x5FFC8);
		}

		// static const ::System::Object OIDEIBKKMCB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIFOHLDHBJN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FIFOHLDHBJN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FIFOHLDHBJN*))((::PBYTE)hIl2Cpp + FIFOHLDHBJN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIFOHLDHBJN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FIFOHLDHBJN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIFOHLDHBJN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FIFOHLDHBJN* Clone()
		{
			return ((::FIFOHLDHBJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIFOHLDHBJN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HNBOHDBLMBE*>* GOAHOGGOLOJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HNBOHDBLMBE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIFOHLDHBJN_GOAHOGGOLOJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FIFOHLDHBJN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FIFOHLDHBJN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FIFOHLDHBJN*))((::PBYTE)hIl2Cpp + FIFOHLDHBJN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIFOHLDHBJN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIFOHLDHBJN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FIFOHLDHBJN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIFOHLDHBJN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FIFOHLDHBJN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FIFOHLDHBJN*))((::PBYTE)hIl2Cpp + FIFOHLDHBJN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FIFOHLDHBJN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
