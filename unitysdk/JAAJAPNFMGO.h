#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JAAJAPNFMGO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JAAJAPNFMGO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6BADD0)
#define JAAJAPNFMGO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6BB030)
#define JAAJAPNFMGO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6BA9D0)
#define JAAJAPNFMGO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6BA940)
#define JAAJAPNFMGO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6BA8F0)
#define JAAJAPNFMGO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6BAB00)
#define JAAJAPNFMGO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6BAA10)
#define JAAJAPNFMGO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6BABF0)
#define JAAJAPNFMGO_IAIDMIHMLAM_OFFSET UNITYSDK_OFFSET(0x1E6BAA00)
#define JAAJAPNFMGO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6BA8B0)
#define JAAJAPNFMGO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6BAE90)
#define JAAJAPNFMGO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6BAE40)
#define JAAJAPNFMGO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6BA8E0)
#define JAAJAPNFMGO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6BACF0)
#define JAAJAPNFMGO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6BAD50)

inline static constexpr unsigned int JAAJAPNFMGO_TypeDefinitionIndex = 27194;

	class JAAJAPNFMGO : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GNOBPDFMNBL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_LLFMJBMCIHI()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "JAAJAPNFMGO")->GetStaticField(0x56D50);
		}

		static ::Google::Protobuf::MessageParser_1<::JAAJAPNFMGO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JAAJAPNFMGO*>**)UnitySDK::FromName("", "JAAJAPNFMGO")->GetStaticField(0x56D58);
		}

		// static const ::System::Object OGKEGBEIFFP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAAJAPNFMGO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JAAJAPNFMGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAAJAPNFMGO*))((::PBYTE)hIl2Cpp + JAAJAPNFMGO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JAAJAPNFMGO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JAAJAPNFMGO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JAAJAPNFMGO*>*(*)())((::PBYTE)hIl2Cpp + JAAJAPNFMGO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAAJAPNFMGO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JAAJAPNFMGO* Clone()
		{
			return ((::JAAJAPNFMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAAJAPNFMGO_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IAIDMIHMLAM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAAJAPNFMGO_IAIDMIHMLAM_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JAAJAPNFMGO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JAAJAPNFMGO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JAAJAPNFMGO*))((::PBYTE)hIl2Cpp + JAAJAPNFMGO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JAAJAPNFMGO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAAJAPNFMGO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JAAJAPNFMGO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JAAJAPNFMGO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JAAJAPNFMGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAAJAPNFMGO*))((::PBYTE)hIl2Cpp + JAAJAPNFMGO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JAAJAPNFMGO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
