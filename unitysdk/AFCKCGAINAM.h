#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFCKCGAINAM;
class HOLOFJGPNGL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AFCKCGAINAM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E114750)
#define AFCKCGAINAM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E114A30)
#define AFCKCGAINAM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E114330)
#define AFCKCGAINAM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1142A0)
#define AFCKCGAINAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E114260)
#define AFCKCGAINAM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1144B0)
#define AFCKCGAINAM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E114370)
#define AFCKCGAINAM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1145D0)
#define AFCKCGAINAM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E114220)
#define AFCKCGAINAM_JLLJKDOACOF_OFFSET UNITYSDK_OFFSET(0x1E114360)
#define AFCKCGAINAM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E114890)
#define AFCKCGAINAM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1147F0)
#define AFCKCGAINAM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E114250)
#define AFCKCGAINAM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E114640)
#define AFCKCGAINAM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1146A0)

inline static constexpr unsigned int AFCKCGAINAM_TypeDefinitionIndex = 34127;

	class AFCKCGAINAM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::HOLOFJGPNGL*>* NKFGHOCAIDF; // 0x18
		static ::Google::Protobuf::MessageParser_1<::AFCKCGAINAM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AFCKCGAINAM*>**)UnitySDK::FromName("", "AFCKCGAINAM")->GetStaticField(0x2E190);
		}

		static ::Google::Protobuf::FieldCodec_1<::HOLOFJGPNGL*>** StaticGet_OKLKNIFAEED()
		{
			return (::Google::Protobuf::FieldCodec_1<::HOLOFJGPNGL*>**)UnitySDK::FromName("", "AFCKCGAINAM")->GetStaticField(0x2E198);
		}

		// static const ::System::Object CFEBFCMGDOB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCKCGAINAM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AFCKCGAINAM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFCKCGAINAM*))((::PBYTE)hIl2Cpp + AFCKCGAINAM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFCKCGAINAM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AFCKCGAINAM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AFCKCGAINAM*>*(*)())((::PBYTE)hIl2Cpp + AFCKCGAINAM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCKCGAINAM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AFCKCGAINAM* Clone()
		{
			return ((::AFCKCGAINAM*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCKCGAINAM_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HOLOFJGPNGL*>* JLLJKDOACOF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HOLOFJGPNGL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCKCGAINAM_JLLJKDOACOF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AFCKCGAINAM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AFCKCGAINAM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AFCKCGAINAM*))((::PBYTE)hIl2Cpp + AFCKCGAINAM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCKCGAINAM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCKCGAINAM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AFCKCGAINAM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCKCGAINAM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AFCKCGAINAM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFCKCGAINAM*))((::PBYTE)hIl2Cpp + AFCKCGAINAM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AFCKCGAINAM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
