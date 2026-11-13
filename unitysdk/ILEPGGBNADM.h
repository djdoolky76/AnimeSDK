#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILEPGGBNADM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ILEPGGBNADM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x206B1D30)
#define ILEPGGBNADM_CCTOR_OFFSET UNITYSDK_OFFSET(0x206B1FF0)
#define ILEPGGBNADM_CLONE_OFFSET UNITYSDK_OFFSET(0x206B18B0)
#define ILEPGGBNADM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x206B1820)
#define ILEPGGBNADM_CTOR_OFFSET UNITYSDK_OFFSET(0x206B17D0)
#define ILEPGGBNADM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x206B1A30)
#define ILEPGGBNADM_EQUALS_OFFSET UNITYSDK_OFFSET(0x206B1910)
#define ILEPGGBNADM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x206B1B20)
#define ILEPGGBNADM_GHHECLFJFJP_OFFSET UNITYSDK_OFFSET(0x206B1900)
#define ILEPGGBNADM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x206B1760)
#define ILEPGGBNADM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x206B1E20)
#define ILEPGGBNADM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x206B1DD0)
#define ILEPGGBNADM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x206B17C0)
#define ILEPGGBNADM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x206B1C20)
#define ILEPGGBNADM_WRITETO_OFFSET UNITYSDK_OFFSET(0x206B1C80)

inline static constexpr unsigned int ILEPGGBNADM_TypeDefinitionIndex = 29927;

	class ILEPGGBNADM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FFDKJHFPMGL; // 0x18
		static ::Google::Protobuf::MessageParser_1<::ILEPGGBNADM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ILEPGGBNADM*>**)UnitySDK::FromName("", "ILEPGGBNADM")->GetStaticField(0x4C3E0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_LPCNIAJMIOB()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "ILEPGGBNADM")->GetStaticField(0x4C3E8);
		}

		// static const ::System::Object BPECIEAJIIN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEPGGBNADM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ILEPGGBNADM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILEPGGBNADM*))((::PBYTE)hIl2Cpp + ILEPGGBNADM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILEPGGBNADM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ILEPGGBNADM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ILEPGGBNADM*>*(*)())((::PBYTE)hIl2Cpp + ILEPGGBNADM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEPGGBNADM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ILEPGGBNADM* Clone()
		{
			return ((::ILEPGGBNADM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEPGGBNADM_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GHHECLFJFJP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEPGGBNADM_GHHECLFJFJP_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ILEPGGBNADM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ILEPGGBNADM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ILEPGGBNADM*))((::PBYTE)hIl2Cpp + ILEPGGBNADM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEPGGBNADM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEPGGBNADM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ILEPGGBNADM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEPGGBNADM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ILEPGGBNADM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILEPGGBNADM*))((::PBYTE)hIl2Cpp + ILEPGGBNADM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ILEPGGBNADM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
