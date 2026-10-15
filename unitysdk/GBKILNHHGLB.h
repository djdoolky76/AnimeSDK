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

#define GBKILNHHGLB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E42E9D0)
#define GBKILNHHGLB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E42EC30)
#define GBKILNHHGLB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E42E5D0)
#define GBKILNHHGLB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E42E540)
#define GBKILNHHGLB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E42E4F0)
#define GBKILNHHGLB_DBMNDHCADIF_OFFSET UNITYSDK_OFFSET(0x1E42E600)
#define GBKILNHHGLB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E42E700)
#define GBKILNHHGLB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E42E610)
#define GBKILNHHGLB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E42E7F0)
#define GBKILNHHGLB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E42E4B0)
#define GBKILNHHGLB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E42EA90)
#define GBKILNHHGLB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E42EA40)
#define GBKILNHHGLB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E42E4E0)
#define GBKILNHHGLB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E42E8F0)
#define GBKILNHHGLB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E42E950)

inline static constexpr unsigned int GBKILNHHGLB_TypeDefinitionIndex = 33170;

	class GBKILNHHGLB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AMFDJHAGHOI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GBKILNHHGLB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GBKILNHHGLB*>**)UnitySDK::FromName("", "GBKILNHHGLB")->GetStaticField(0xD600);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_LNPPAGGPPLF()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GBKILNHHGLB")->GetStaticField(0xD608);
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
