#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NPEBOLNHFAL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NPEBOLNHFAL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FB79D60)
#define NPEBOLNHFAL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB79FC0)
#define NPEBOLNHFAL_CLONE_OFFSET UNITYSDK_OFFSET(0x1FB79960)
#define NPEBOLNHFAL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB798D0)
#define NPEBOLNHFAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB79880)
#define NPEBOLNHFAL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FB79A90)
#define NPEBOLNHFAL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FB799A0)
#define NPEBOLNHFAL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FB79B80)
#define NPEBOLNHFAL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FB79840)
#define NPEBOLNHFAL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FB79E20)
#define NPEBOLNHFAL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FB79DD0)
#define NPEBOLNHFAL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FB79870)
#define NPEBOLNHFAL_PFDDHIAMLOF_OFFSET UNITYSDK_OFFSET(0x1FB79990)
#define NPEBOLNHFAL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FB79C80)
#define NPEBOLNHFAL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FB79CE0)

inline static constexpr unsigned int NPEBOLNHFAL_TypeDefinitionIndex = 35837;

	class NPEBOLNHFAL : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PODCDMMHHGN; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::NPEBOLNHFAL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NPEBOLNHFAL*>**)UnitySDK::FromName("", "NPEBOLNHFAL")->GetStaticField(0x54610);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_EDKAPIAIBLM()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "NPEBOLNHFAL")->GetStaticField(0x54618);
		}

		// static const ::System::Object ALMLDLPFCCA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEBOLNHFAL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NPEBOLNHFAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPEBOLNHFAL*))((::PBYTE)hIl2Cpp + NPEBOLNHFAL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPEBOLNHFAL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NPEBOLNHFAL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NPEBOLNHFAL*>*(*)())((::PBYTE)hIl2Cpp + NPEBOLNHFAL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEBOLNHFAL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NPEBOLNHFAL* Clone()
		{
			return ((::NPEBOLNHFAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEBOLNHFAL_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PFDDHIAMLOF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEBOLNHFAL_PFDDHIAMLOF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPEBOLNHFAL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NPEBOLNHFAL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPEBOLNHFAL*))((::PBYTE)hIl2Cpp + NPEBOLNHFAL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEBOLNHFAL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEBOLNHFAL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NPEBOLNHFAL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEBOLNHFAL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NPEBOLNHFAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPEBOLNHFAL*))((::PBYTE)hIl2Cpp + NPEBOLNHFAL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NPEBOLNHFAL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
