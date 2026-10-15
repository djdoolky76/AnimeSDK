#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NBPEJFHIKJL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NBPEJFHIKJL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAD6C60)
#define NBPEJFHIKJL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAD6F20)
#define NBPEJFHIKJL_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAD67E0)
#define NBPEJFHIKJL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAD6750)
#define NBPEJFHIKJL_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAD6700)
#define NBPEJFHIKJL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAD6960)
#define NBPEJFHIKJL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAD6840)
#define NBPEJFHIKJL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAD6A50)
#define NBPEJFHIKJL_HDLCCJJBGAO_OFFSET UNITYSDK_OFFSET(0x1EAD6830)
#define NBPEJFHIKJL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAD6690)
#define NBPEJFHIKJL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAD6D50)
#define NBPEJFHIKJL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAD6D00)
#define NBPEJFHIKJL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAD66F0)
#define NBPEJFHIKJL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAD6B50)
#define NBPEJFHIKJL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAD6BB0)

inline static constexpr unsigned int NBPEJFHIKJL_TypeDefinitionIndex = 29143;

	class NBPEJFHIKJL : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JEOKCOLONMO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_MJJMBOJKJDE()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "NBPEJFHIKJL")->GetStaticField(0x5D050);
		}

		static ::Google::Protobuf::MessageParser_1<::NBPEJFHIKJL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NBPEJFHIKJL*>**)UnitySDK::FromName("", "NBPEJFHIKJL")->GetStaticField(0x5D058);
		}

		// static const ::System::Object IHAFPOIEINF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBPEJFHIKJL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NBPEJFHIKJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBPEJFHIKJL*))((::PBYTE)hIl2Cpp + NBPEJFHIKJL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBPEJFHIKJL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NBPEJFHIKJL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NBPEJFHIKJL*>*(*)())((::PBYTE)hIl2Cpp + NBPEJFHIKJL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBPEJFHIKJL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NBPEJFHIKJL* Clone()
		{
			return ((::NBPEJFHIKJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBPEJFHIKJL_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HDLCCJJBGAO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBPEJFHIKJL_HDLCCJJBGAO_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NBPEJFHIKJL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NBPEJFHIKJL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NBPEJFHIKJL*))((::PBYTE)hIl2Cpp + NBPEJFHIKJL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBPEJFHIKJL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBPEJFHIKJL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NBPEJFHIKJL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBPEJFHIKJL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NBPEJFHIKJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBPEJFHIKJL*))((::PBYTE)hIl2Cpp + NBPEJFHIKJL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NBPEJFHIKJL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
