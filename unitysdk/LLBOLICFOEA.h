#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LLBOLICFOEA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LLBOLICFOEA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E997050)
#define LLBOLICFOEA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E997340)
#define LLBOLICFOEA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E996BC0)
#define LLBOLICFOEA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E996B30)
#define LLBOLICFOEA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E996AE0)
#define LLBOLICFOEA_DIEHCNJKJKE_OFFSET UNITYSDK_OFFSET(0x1E996C00)
#define LLBOLICFOEA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E996D20)
#define LLBOLICFOEA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E996C20)
#define LLBOLICFOEA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E996E10)
#define LLBOLICFOEA_IOKBHFOIEKH_OFFSET UNITYSDK_OFFSET(0x1E996BF0)
#define LLBOLICFOEA_JCPDLCEMDBC_OFFSET UNITYSDK_OFFSET(0x1E996C10)
#define LLBOLICFOEA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E996AA0)
#define LLBOLICFOEA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E997190)
#define LLBOLICFOEA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E997140)
#define LLBOLICFOEA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E996AD0)
#define LLBOLICFOEA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E996F10)
#define LLBOLICFOEA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E996F70)

	class LLBOLICFOEA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OGKKDOELDPJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 GDNNKAAPOBM; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_PAMIBPNBFGJ()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "LLBOLICFOEA")->GetStaticField(0x4B510);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LLBOLICFOEA")->GetStaticField(0x4B518);
		}

		// static const ::System::Object BDJJKOKKDID; // 0x0
		// static const ::System::Object NDDAKDFJBOD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBOLICFOEA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LLBOLICFOEA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLBOLICFOEA*))((::PBYTE)hIl2Cpp + LLBOLICFOEA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLBOLICFOEA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LLBOLICFOEA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBOLICFOEA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LLBOLICFOEA* Clone()
		{
			return ((::LLBOLICFOEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBOLICFOEA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IOKBHFOIEKH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBOLICFOEA_IOKBHFOIEKH_OFFSET))(this);
		}

		::System::UInt32 DIEHCNJKJKE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBOLICFOEA_DIEHCNJKJKE_OFFSET))(this);
		}

		::System::Void JCPDLCEMDBC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LLBOLICFOEA_JCPDLCEMDBC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LLBOLICFOEA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LLBOLICFOEA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LLBOLICFOEA*))((::PBYTE)hIl2Cpp + LLBOLICFOEA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBOLICFOEA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBOLICFOEA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LLBOLICFOEA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBOLICFOEA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LLBOLICFOEA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLBOLICFOEA*))((::PBYTE)hIl2Cpp + LLBOLICFOEA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LLBOLICFOEA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
