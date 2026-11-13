#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBKIFPOEGGO;
class LKHAJCACPBH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FBKIFPOEGGO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F896E60)
#define FBKIFPOEGGO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F897160)
#define FBKIFPOEGGO_CLONE_OFFSET UNITYSDK_OFFSET(0x1F8969E0)
#define FBKIFPOEGGO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F896930)
#define FBKIFPOEGGO_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8968E0)
#define FBKIFPOEGGO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F896BC0)
#define FBKIFPOEGGO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F896A40)
#define FBKIFPOEGGO_FMHKKPPHLFN_OFFSET UNITYSDK_OFFSET(0x1F896A30)
#define FBKIFPOEGGO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F896CE0)
#define FBKIFPOEGGO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F896870)
#define FBKIFPOEGGO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F896FA0)
#define FBKIFPOEGGO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F896F00)
#define FBKIFPOEGGO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F8968D0)
#define FBKIFPOEGGO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F896D50)
#define FBKIFPOEGGO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F896DB0)

inline static constexpr unsigned int FBKIFPOEGGO_TypeDefinitionIndex = 30554;

	class FBKIFPOEGGO : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::LKHAJCACPBH*>* BFGJHGEEKMG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FBKIFPOEGGO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FBKIFPOEGGO*>**)UnitySDK::FromName("", "FBKIFPOEGGO")->GetStaticField(0x416F0);
		}

		static ::Google::Protobuf::FieldCodec_1<::LKHAJCACPBH*>** StaticGet_NMKLIIIDMHO()
		{
			return (::Google::Protobuf::FieldCodec_1<::LKHAJCACPBH*>**)UnitySDK::FromName("", "FBKIFPOEGGO")->GetStaticField(0x416F8);
		}

		// static const ::System::Object GPGFAOJBAED; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKIFPOEGGO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FBKIFPOEGGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBKIFPOEGGO*))((::PBYTE)hIl2Cpp + FBKIFPOEGGO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBKIFPOEGGO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FBKIFPOEGGO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FBKIFPOEGGO*>*(*)())((::PBYTE)hIl2Cpp + FBKIFPOEGGO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKIFPOEGGO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FBKIFPOEGGO* Clone()
		{
			return ((::FBKIFPOEGGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKIFPOEGGO_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LKHAJCACPBH*>* FMHKKPPHLFN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LKHAJCACPBH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKIFPOEGGO_FMHKKPPHLFN_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBKIFPOEGGO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FBKIFPOEGGO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FBKIFPOEGGO*))((::PBYTE)hIl2Cpp + FBKIFPOEGGO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKIFPOEGGO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKIFPOEGGO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FBKIFPOEGGO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKIFPOEGGO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FBKIFPOEGGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBKIFPOEGGO*))((::PBYTE)hIl2Cpp + FBKIFPOEGGO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FBKIFPOEGGO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
