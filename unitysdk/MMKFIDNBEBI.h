#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MMKFIDNBEBI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MMKFIDNBEBI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FDC5CE0)
#define MMKFIDNBEBI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDC5FA0)
#define MMKFIDNBEBI_CLONE_OFFSET UNITYSDK_OFFSET(0x1FDC5860)
#define MMKFIDNBEBI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FDC57D0)
#define MMKFIDNBEBI_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDC5780)
#define MMKFIDNBEBI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FDC59E0)
#define MMKFIDNBEBI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FDC58C0)
#define MMKFIDNBEBI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FDC5AD0)
#define MMKFIDNBEBI_IHHGLAIBGIK_OFFSET UNITYSDK_OFFSET(0x1FDC58B0)
#define MMKFIDNBEBI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FDC5710)
#define MMKFIDNBEBI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FDC5DD0)
#define MMKFIDNBEBI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FDC5D80)
#define MMKFIDNBEBI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FDC5770)
#define MMKFIDNBEBI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FDC5BD0)
#define MMKFIDNBEBI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FDC5C30)

inline static constexpr unsigned int MMKFIDNBEBI_TypeDefinitionIndex = 29925;

	class MMKFIDNBEBI : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OHKPMKPDJPF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MMKFIDNBEBI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MMKFIDNBEBI*>**)UnitySDK::FromName("", "MMKFIDNBEBI")->GetStaticField(0x5E740);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_PFCGFMFKNHP()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "MMKFIDNBEBI")->GetStaticField(0x5E748);
		}

		// static const ::System::Object BINNAAACDDE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKFIDNBEBI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MMKFIDNBEBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMKFIDNBEBI*))((::PBYTE)hIl2Cpp + MMKFIDNBEBI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMKFIDNBEBI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MMKFIDNBEBI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MMKFIDNBEBI*>*(*)())((::PBYTE)hIl2Cpp + MMKFIDNBEBI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKFIDNBEBI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MMKFIDNBEBI* Clone()
		{
			return ((::MMKFIDNBEBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKFIDNBEBI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IHHGLAIBGIK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKFIDNBEBI_IHHGLAIBGIK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMKFIDNBEBI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MMKFIDNBEBI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MMKFIDNBEBI*))((::PBYTE)hIl2Cpp + MMKFIDNBEBI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKFIDNBEBI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKFIDNBEBI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MMKFIDNBEBI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKFIDNBEBI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MMKFIDNBEBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMKFIDNBEBI*))((::PBYTE)hIl2Cpp + MMKFIDNBEBI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MMKFIDNBEBI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
