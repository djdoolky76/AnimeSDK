#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GBKILNHHGLB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GBKILNHHGLB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FC4EE50)
#define GBKILNHHGLB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC4F0B0)
#define GBKILNHHGLB_CLONE_OFFSET UNITYSDK_OFFSET(0x1FC4EA50)
#define GBKILNHHGLB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FC4E9C0)
#define GBKILNHHGLB_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC4E970)
#define GBKILNHHGLB_DBMNDHCADIF_OFFSET UNITYSDK_OFFSET(0x1FC4EA80)
#define GBKILNHHGLB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FC4EB80)
#define GBKILNHHGLB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FC4EA90)
#define GBKILNHHGLB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FC4EC70)
#define GBKILNHHGLB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FC4E930)
#define GBKILNHHGLB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FC4EF10)
#define GBKILNHHGLB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FC4EEC0)
#define GBKILNHHGLB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FC4E960)
#define GBKILNHHGLB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FC4ED70)
#define GBKILNHHGLB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FC4EDD0)

inline static constexpr unsigned int GBKILNHHGLB_TypeDefinitionIndex = 34085;

	class GBKILNHHGLB : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AMFDJHAGHOI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GBKILNHHGLB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GBKILNHHGLB*>**)UnitySDK::FromName("", "GBKILNHHGLB")->GetStaticField(0x577F0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_LNPPAGGPPLF()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GBKILNHHGLB")->GetStaticField(0x577F8);
		}

		// static const ::System::Object MEIFMNDKCPG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKILNHHGLB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GBKILNHHGLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBKILNHHGLB*))((::PBYTE)hIl2Cpp + GBKILNHHGLB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBKILNHHGLB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GBKILNHHGLB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GBKILNHHGLB*>*(*)())((::PBYTE)hIl2Cpp + GBKILNHHGLB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKILNHHGLB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GBKILNHHGLB* Clone()
		{
			return ((::GBKILNHHGLB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKILNHHGLB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DBMNDHCADIF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKILNHHGLB_DBMNDHCADIF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GBKILNHHGLB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GBKILNHHGLB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GBKILNHHGLB*))((::PBYTE)hIl2Cpp + GBKILNHHGLB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKILNHHGLB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKILNHHGLB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GBKILNHHGLB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKILNHHGLB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GBKILNHHGLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBKILNHHGLB*))((::PBYTE)hIl2Cpp + GBKILNHHGLB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GBKILNHHGLB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
