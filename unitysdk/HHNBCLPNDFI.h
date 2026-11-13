#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HHNBCLPNDFI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HHNBCLPNDFI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20516D90)
#define HHNBCLPNDFI_CCTOR_OFFSET UNITYSDK_OFFSET(0x20517050)
#define HHNBCLPNDFI_CLONE_OFFSET UNITYSDK_OFFSET(0x20516910)
#define HHNBCLPNDFI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20516880)
#define HHNBCLPNDFI_CTOR_OFFSET UNITYSDK_OFFSET(0x20516830)
#define HHNBCLPNDFI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20516A90)
#define HHNBCLPNDFI_EQUALS_OFFSET UNITYSDK_OFFSET(0x20516970)
#define HHNBCLPNDFI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20516B80)
#define HHNBCLPNDFI_IHHGLAIBGIK_OFFSET UNITYSDK_OFFSET(0x20516960)
#define HHNBCLPNDFI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x205167C0)
#define HHNBCLPNDFI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20516E80)
#define HHNBCLPNDFI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20516E30)
#define HHNBCLPNDFI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20516820)
#define HHNBCLPNDFI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20516C80)
#define HHNBCLPNDFI_WRITETO_OFFSET UNITYSDK_OFFSET(0x20516CE0)

inline static constexpr unsigned int HHNBCLPNDFI_TypeDefinitionIndex = 29923;

	class HHNBCLPNDFI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OHKPMKPDJPF; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HHNBCLPNDFI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HHNBCLPNDFI*>**)UnitySDK::FromName("", "HHNBCLPNDFI")->GetStaticField(0x2E820);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_PFCGFMFKNHP()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "HHNBCLPNDFI")->GetStaticField(0x2E828);
		}

		// static const ::System::Object BINNAAACDDE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNBCLPNDFI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HHNBCLPNDFI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHNBCLPNDFI*))((::PBYTE)hIl2Cpp + HHNBCLPNDFI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHNBCLPNDFI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HHNBCLPNDFI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HHNBCLPNDFI*>*(*)())((::PBYTE)hIl2Cpp + HHNBCLPNDFI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNBCLPNDFI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HHNBCLPNDFI* Clone()
		{
			return ((::HHNBCLPNDFI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNBCLPNDFI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IHHGLAIBGIK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNBCLPNDFI_IHHGLAIBGIK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HHNBCLPNDFI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HHNBCLPNDFI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HHNBCLPNDFI*))((::PBYTE)hIl2Cpp + HHNBCLPNDFI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNBCLPNDFI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNBCLPNDFI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HHNBCLPNDFI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNBCLPNDFI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HHNBCLPNDFI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHNBCLPNDFI*))((::PBYTE)hIl2Cpp + HHNBCLPNDFI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HHNBCLPNDFI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
