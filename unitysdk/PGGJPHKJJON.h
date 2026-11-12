#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PGGJPHKJJON;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PGGJPHKJJON_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F1FD440)
#define PGGJPHKJJON_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1FD700)
#define PGGJPHKJJON_CLONE_OFFSET UNITYSDK_OFFSET(0x1F1FCFC0)
#define PGGJPHKJJON_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F1FCF30)
#define PGGJPHKJJON_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1FCEE0)
#define PGGJPHKJJON_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F1FD140)
#define PGGJPHKJJON_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F1FD020)
#define PGGJPHKJJON_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F1FD230)
#define PGGJPHKJJON_IJBGIOCCAKD_OFFSET UNITYSDK_OFFSET(0x1F1FD010)
#define PGGJPHKJJON_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F1FCE70)
#define PGGJPHKJJON_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F1FD530)
#define PGGJPHKJJON_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F1FD4E0)
#define PGGJPHKJJON_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F1FCED0)
#define PGGJPHKJJON_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F1FD330)
#define PGGJPHKJJON_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F1FD390)

inline static constexpr unsigned int PGGJPHKJJON_TypeDefinitionIndex = 30309;

	class PGGJPHKJJON : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EDAFJBOHEBN; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PGGJPHKJJON*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PGGJPHKJJON*>**)UnitySDK::FromName("", "PGGJPHKJJON")->GetStaticField(0x34060);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_DIPJANOMIFB()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "PGGJPHKJJON")->GetStaticField(0x34068);
		}

		// static const ::System::Object AHIEIJCLMJO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGGJPHKJJON_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PGGJPHKJJON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PGGJPHKJJON*))((::PBYTE)hIl2Cpp + PGGJPHKJJON_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGGJPHKJJON_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PGGJPHKJJON*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PGGJPHKJJON*>*(*)())((::PBYTE)hIl2Cpp + PGGJPHKJJON_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGGJPHKJJON_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PGGJPHKJJON* Clone()
		{
			return ((::PGGJPHKJJON*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGGJPHKJJON_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IJBGIOCCAKD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGGJPHKJJON_IJBGIOCCAKD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PGGJPHKJJON_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PGGJPHKJJON* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PGGJPHKJJON*))((::PBYTE)hIl2Cpp + PGGJPHKJJON_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGGJPHKJJON_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGGJPHKJJON_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PGGJPHKJJON_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGGJPHKJJON_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PGGJPHKJJON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PGGJPHKJJON*))((::PBYTE)hIl2Cpp + PGGJPHKJJON_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PGGJPHKJJON_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
