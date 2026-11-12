#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFHGPMCHDGL;
class HHCNMGNAIBG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HHCNMGNAIBG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F881320)
#define HHCNMGNAIBG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F881600)
#define HHCNMGNAIBG_CLONE_OFFSET UNITYSDK_OFFSET(0x1F880F00)
#define HHCNMGNAIBG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F880E70)
#define HHCNMGNAIBG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F880E30)
#define HHCNMGNAIBG_ENPOAKILNGK_OFFSET UNITYSDK_OFFSET(0x1F880F30)
#define HHCNMGNAIBG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F881080)
#define HHCNMGNAIBG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F880F40)
#define HHCNMGNAIBG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F8811A0)
#define HHCNMGNAIBG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F880DF0)
#define HHCNMGNAIBG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F881460)
#define HHCNMGNAIBG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F8813C0)
#define HHCNMGNAIBG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F880E20)
#define HHCNMGNAIBG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F881210)
#define HHCNMGNAIBG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F881270)

inline static constexpr unsigned int HHCNMGNAIBG_TypeDefinitionIndex = 26410;

	class HHCNMGNAIBG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::HFHGPMCHDGL*>* GOBDOOKJLMH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::HFHGPMCHDGL*>** StaticGet_GCDHOPLJPAD()
		{
			return (::Google::Protobuf::FieldCodec_1<::HFHGPMCHDGL*>**)UnitySDK::FromName("", "HHCNMGNAIBG")->GetStaticField(0x2F7C0);
		}

		static ::Google::Protobuf::MessageParser_1<::HHCNMGNAIBG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HHCNMGNAIBG*>**)UnitySDK::FromName("", "HHCNMGNAIBG")->GetStaticField(0x2F7C8);
		}

		// static const ::System::Object GIHIAIABDDK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCNMGNAIBG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HHCNMGNAIBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHCNMGNAIBG*))((::PBYTE)hIl2Cpp + HHCNMGNAIBG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHCNMGNAIBG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HHCNMGNAIBG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HHCNMGNAIBG*>*(*)())((::PBYTE)hIl2Cpp + HHCNMGNAIBG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCNMGNAIBG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HHCNMGNAIBG* Clone()
		{
			return ((::HHCNMGNAIBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCNMGNAIBG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HFHGPMCHDGL*>* ENPOAKILNGK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HFHGPMCHDGL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCNMGNAIBG_ENPOAKILNGK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HHCNMGNAIBG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HHCNMGNAIBG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HHCNMGNAIBG*))((::PBYTE)hIl2Cpp + HHCNMGNAIBG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCNMGNAIBG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCNMGNAIBG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HHCNMGNAIBG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCNMGNAIBG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HHCNMGNAIBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHCNMGNAIBG*))((::PBYTE)hIl2Cpp + HHCNMGNAIBG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HHCNMGNAIBG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
