#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FEDNIHCAHGP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FEDNIHCAHGP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3612D0)
#define FEDNIHCAHGP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E361540)
#define FEDNIHCAHGP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E360D00)
#define FEDNIHCAHGP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E360C10)
#define FEDNIHCAHGP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E360B80)
#define FEDNIHCAHGP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E360EC0)
#define FEDNIHCAHGP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E360D70)
#define FEDNIHCAHGP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E360FD0)
#define FEDNIHCAHGP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E360B10)
#define FEDNIHCAHGP_KMCKJKFEHBP_OFFSET UNITYSDK_OFFSET(0x1E360D60)
#define FEDNIHCAHGP_KOJEFBMPKOF_OFFSET UNITYSDK_OFFSET(0x1E360D50)
#define FEDNIHCAHGP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E361400)
#define FEDNIHCAHGP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3613A0)
#define FEDNIHCAHGP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E360B70)
#define FEDNIHCAHGP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E361190)
#define FEDNIHCAHGP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3611F0)

inline static constexpr unsigned int FEDNIHCAHGP_TypeDefinitionIndex = 29837;

	class FEDNIHCAHGP : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LAOPLDLFLLB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CHGHMIJENPG; // 0x20
		static ::Google::Protobuf::MessageParser_1<::FEDNIHCAHGP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FEDNIHCAHGP*>**)UnitySDK::FromName("", "FEDNIHCAHGP")->GetStaticField(0x5C140);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KPKOBHGFHJG()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "FEDNIHCAHGP")->GetStaticField(0x5C148);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_MFEAFKHLDDP()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "FEDNIHCAHGP")->GetStaticField(0x5C150);
		}

		// static const ::System::Object FABCCNICBDC; // 0x0
		// static const ::System::Object HIBPMEMIFIA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDNIHCAHGP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FEDNIHCAHGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FEDNIHCAHGP*))((::PBYTE)hIl2Cpp + FEDNIHCAHGP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEDNIHCAHGP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FEDNIHCAHGP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FEDNIHCAHGP*>*(*)())((::PBYTE)hIl2Cpp + FEDNIHCAHGP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDNIHCAHGP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FEDNIHCAHGP* Clone()
		{
			return ((::FEDNIHCAHGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDNIHCAHGP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KOJEFBMPKOF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDNIHCAHGP_KOJEFBMPKOF_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KMCKJKFEHBP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDNIHCAHGP_KMCKJKFEHBP_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FEDNIHCAHGP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FEDNIHCAHGP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FEDNIHCAHGP*))((::PBYTE)hIl2Cpp + FEDNIHCAHGP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDNIHCAHGP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDNIHCAHGP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FEDNIHCAHGP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDNIHCAHGP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FEDNIHCAHGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FEDNIHCAHGP*))((::PBYTE)hIl2Cpp + FEDNIHCAHGP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FEDNIHCAHGP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
