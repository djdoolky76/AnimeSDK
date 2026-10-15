#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OJGOBCCMHOH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OJGOBCCMHOH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE54F90)
#define OJGOBCCMHOH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE551F0)
#define OJGOBCCMHOH_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE54B90)
#define OJGOBCCMHOH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE54B00)
#define OJGOBCCMHOH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE54AB0)
#define OJGOBCCMHOH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE54CC0)
#define OJGOBCCMHOH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE54BD0)
#define OJGOBCCMHOH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE54DB0)
#define OJGOBCCMHOH_HBCCHMLMMIL_OFFSET UNITYSDK_OFFSET(0x1DE54BC0)
#define OJGOBCCMHOH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE54A70)
#define OJGOBCCMHOH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE55050)
#define OJGOBCCMHOH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE55000)
#define OJGOBCCMHOH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE54AA0)
#define OJGOBCCMHOH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE54EB0)
#define OJGOBCCMHOH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE54F10)

inline static constexpr unsigned int OJGOBCCMHOH_TypeDefinitionIndex = 33213;

	class OJGOBCCMHOH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FKAEPFJDFBM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_IJJJDLPEMFG()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "OJGOBCCMHOH")->GetStaticField(0x1C1D0);
		}

		static ::Google::Protobuf::MessageParser_1<::OJGOBCCMHOH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OJGOBCCMHOH*>**)UnitySDK::FromName("", "OJGOBCCMHOH")->GetStaticField(0x1C1D8);
		}

		// static const ::System::Object EKLJNBBOABD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJGOBCCMHOH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OJGOBCCMHOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OJGOBCCMHOH*))((::PBYTE)hIl2Cpp + OJGOBCCMHOH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJGOBCCMHOH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OJGOBCCMHOH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OJGOBCCMHOH*>*(*)())((::PBYTE)hIl2Cpp + OJGOBCCMHOH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJGOBCCMHOH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OJGOBCCMHOH* Clone()
		{
			return ((::OJGOBCCMHOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJGOBCCMHOH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HBCCHMLMMIL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJGOBCCMHOH_HBCCHMLMMIL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OJGOBCCMHOH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OJGOBCCMHOH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OJGOBCCMHOH*))((::PBYTE)hIl2Cpp + OJGOBCCMHOH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJGOBCCMHOH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJGOBCCMHOH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OJGOBCCMHOH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJGOBCCMHOH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OJGOBCCMHOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OJGOBCCMHOH*))((::PBYTE)hIl2Cpp + OJGOBCCMHOH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OJGOBCCMHOH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
