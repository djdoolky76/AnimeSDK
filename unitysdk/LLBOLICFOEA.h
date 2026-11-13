#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LLBOLICFOEA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LLBOLICFOEA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FF43310)
#define LLBOLICFOEA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF43600)
#define LLBOLICFOEA_CLONE_OFFSET UNITYSDK_OFFSET(0x1FF42E80)
#define LLBOLICFOEA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FF42DF0)
#define LLBOLICFOEA_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF42DA0)
#define LLBOLICFOEA_DIEHCNJKJKE_OFFSET UNITYSDK_OFFSET(0x1FF42EC0)
#define LLBOLICFOEA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FF42FE0)
#define LLBOLICFOEA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FF42EE0)
#define LLBOLICFOEA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FF430D0)
#define LLBOLICFOEA_IOKBHFOIEKH_OFFSET UNITYSDK_OFFSET(0x1FF42EB0)
#define LLBOLICFOEA_JCPDLCEMDBC_OFFSET UNITYSDK_OFFSET(0x1FF42ED0)
#define LLBOLICFOEA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FF42D60)
#define LLBOLICFOEA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FF43450)
#define LLBOLICFOEA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FF43400)
#define LLBOLICFOEA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FF42D90)
#define LLBOLICFOEA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FF431D0)
#define LLBOLICFOEA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FF43230)

inline static constexpr unsigned int LLBOLICFOEA_TypeDefinitionIndex = 27922;

	class LLBOLICFOEA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OGKKDOELDPJ; // 0x18
		::System::UInt32 GDNNKAAPOBM; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_PAMIBPNBFGJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "LLBOLICFOEA")->GetStaticField(0x3FF40);
		}

		static ::Google::Protobuf::MessageParser_1<::LLBOLICFOEA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LLBOLICFOEA*>**)UnitySDK::FromName("", "LLBOLICFOEA")->GetStaticField(0x3FF48);
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

		static ::Google::Protobuf::MessageParser_1<::LLBOLICFOEA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LLBOLICFOEA*>*(*)())((::PBYTE)hIl2Cpp + LLBOLICFOEA_JJGHOBBFNJD_OFFSET))();
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
