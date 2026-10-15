#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALDJDOPBDHP;
class IFCNLKPPPHK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ALDJDOPBDHP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3A8A70)
#define ALDJDOPBDHP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3A8D50)
#define ALDJDOPBDHP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3A8650)
#define ALDJDOPBDHP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3A85C0)
#define ALDJDOPBDHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3A8580)
#define ALDJDOPBDHP_ENPOAKILNGK_OFFSET UNITYSDK_OFFSET(0x1E3A8680)
#define ALDJDOPBDHP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3A87D0)
#define ALDJDOPBDHP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3A8690)
#define ALDJDOPBDHP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3A88F0)
#define ALDJDOPBDHP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3A8540)
#define ALDJDOPBDHP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3A8BB0)
#define ALDJDOPBDHP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3A8B10)
#define ALDJDOPBDHP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3A8570)
#define ALDJDOPBDHP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3A8960)
#define ALDJDOPBDHP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3A89C0)

inline static constexpr unsigned int ALDJDOPBDHP_TypeDefinitionIndex = 33517;

	class ALDJDOPBDHP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::IFCNLKPPPHK*>* GOBDOOKJLMH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::ALDJDOPBDHP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ALDJDOPBDHP*>**)UnitySDK::FromName("", "ALDJDOPBDHP")->GetStaticField(0x40EA0);
		}

		static ::Google::Protobuf::FieldCodec_1<::IFCNLKPPPHK*>** StaticGet_GCDHOPLJPAD()
		{
			return (::Google::Protobuf::FieldCodec_1<::IFCNLKPPPHK*>**)UnitySDK::FromName("", "ALDJDOPBDHP")->GetStaticField(0x40EA8);
		}

		// static const ::System::Object GIHIAIABDDK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDJDOPBDHP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ALDJDOPBDHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALDJDOPBDHP*))((::PBYTE)hIl2Cpp + ALDJDOPBDHP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALDJDOPBDHP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ALDJDOPBDHP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ALDJDOPBDHP*>*(*)())((::PBYTE)hIl2Cpp + ALDJDOPBDHP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDJDOPBDHP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ALDJDOPBDHP* Clone()
		{
			return ((::ALDJDOPBDHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDJDOPBDHP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::IFCNLKPPPHK*>* ENPOAKILNGK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::IFCNLKPPPHK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDJDOPBDHP_ENPOAKILNGK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ALDJDOPBDHP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ALDJDOPBDHP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALDJDOPBDHP*))((::PBYTE)hIl2Cpp + ALDJDOPBDHP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDJDOPBDHP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDJDOPBDHP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ALDJDOPBDHP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDJDOPBDHP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ALDJDOPBDHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALDJDOPBDHP*))((::PBYTE)hIl2Cpp + ALDJDOPBDHP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ALDJDOPBDHP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
