#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NGOKMAABDJJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NGOKMAABDJJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB17F10)
#define NGOKMAABDJJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB181D0)
#define NGOKMAABDJJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB17A90)
#define NGOKMAABDJJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB17A00)
#define NGOKMAABDJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB179B0)
#define NGOKMAABDJJ_DBMNDHCADIF_OFFSET UNITYSDK_OFFSET(0x1EB17AE0)
#define NGOKMAABDJJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB17C10)
#define NGOKMAABDJJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB17AF0)
#define NGOKMAABDJJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB17D00)
#define NGOKMAABDJJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB17940)
#define NGOKMAABDJJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB18000)
#define NGOKMAABDJJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB17FB0)
#define NGOKMAABDJJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB179A0)
#define NGOKMAABDJJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB17E00)
#define NGOKMAABDJJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB17E60)

inline static constexpr unsigned int NGOKMAABDJJ_TypeDefinitionIndex = 33362;

	class NGOKMAABDJJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AMFDJHAGHOI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_LNPPAGGPPLF()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "NGOKMAABDJJ")->GetStaticField(0x5FF50);
		}

		static ::Google::Protobuf::MessageParser_1<::NGOKMAABDJJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NGOKMAABDJJ*>**)UnitySDK::FromName("", "NGOKMAABDJJ")->GetStaticField(0x5FF58);
		}

		// static const ::System::Object MEIFMNDKCPG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOKMAABDJJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NGOKMAABDJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGOKMAABDJJ*))((::PBYTE)hIl2Cpp + NGOKMAABDJJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGOKMAABDJJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NGOKMAABDJJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NGOKMAABDJJ*>*(*)())((::PBYTE)hIl2Cpp + NGOKMAABDJJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOKMAABDJJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NGOKMAABDJJ* Clone()
		{
			return ((::NGOKMAABDJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOKMAABDJJ_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DBMNDHCADIF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOKMAABDJJ_DBMNDHCADIF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NGOKMAABDJJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NGOKMAABDJJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NGOKMAABDJJ*))((::PBYTE)hIl2Cpp + NGOKMAABDJJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOKMAABDJJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOKMAABDJJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NGOKMAABDJJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOKMAABDJJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NGOKMAABDJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGOKMAABDJJ*))((::PBYTE)hIl2Cpp + NGOKMAABDJJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NGOKMAABDJJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
