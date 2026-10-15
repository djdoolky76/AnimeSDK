#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCDBIMIBNCD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OCDBIMIBNCD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE0DB80)
#define OCDBIMIBNCD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE0DDF0)
#define OCDBIMIBNCD_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE0D5B0)
#define OCDBIMIBNCD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE0D4C0)
#define OCDBIMIBNCD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE0D430)
#define OCDBIMIBNCD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE0D770)
#define OCDBIMIBNCD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE0D620)
#define OCDBIMIBNCD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE0D880)
#define OCDBIMIBNCD_HNAJJGKKCEF_OFFSET UNITYSDK_OFFSET(0x1DE0D600)
#define OCDBIMIBNCD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE0D3C0)
#define OCDBIMIBNCD_LAIKNHNNPKP_OFFSET UNITYSDK_OFFSET(0x1DE0D610)
#define OCDBIMIBNCD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE0DCB0)
#define OCDBIMIBNCD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE0DC50)
#define OCDBIMIBNCD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE0D420)
#define OCDBIMIBNCD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE0DA40)
#define OCDBIMIBNCD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE0DAA0)

inline static constexpr unsigned int OCDBIMIBNCD_TypeDefinitionIndex = 31014;

	class OCDBIMIBNCD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NPKGDIKMLOI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OHJCGOPKLON; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_HGIPALFPGOG()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "OCDBIMIBNCD")->GetStaticField(0x12370);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_GIEAFENMDAO()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "OCDBIMIBNCD")->GetStaticField(0x12378);
		}

		static ::Google::Protobuf::MessageParser_1<::OCDBIMIBNCD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OCDBIMIBNCD*>**)UnitySDK::FromName("", "OCDBIMIBNCD")->GetStaticField(0x12380);
		}

		// static const ::System::Object PGNPGPPHPAM; // 0x0
		// static const ::System::Object CMGDNDJFMKC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCDBIMIBNCD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OCDBIMIBNCD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCDBIMIBNCD*))((::PBYTE)hIl2Cpp + OCDBIMIBNCD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCDBIMIBNCD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OCDBIMIBNCD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OCDBIMIBNCD*>*(*)())((::PBYTE)hIl2Cpp + OCDBIMIBNCD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCDBIMIBNCD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OCDBIMIBNCD* Clone()
		{
			return ((::OCDBIMIBNCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCDBIMIBNCD_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HNAJJGKKCEF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCDBIMIBNCD_HNAJJGKKCEF_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LAIKNHNNPKP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCDBIMIBNCD_LAIKNHNNPKP_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OCDBIMIBNCD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OCDBIMIBNCD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OCDBIMIBNCD*))((::PBYTE)hIl2Cpp + OCDBIMIBNCD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCDBIMIBNCD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCDBIMIBNCD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OCDBIMIBNCD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCDBIMIBNCD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OCDBIMIBNCD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCDBIMIBNCD*))((::PBYTE)hIl2Cpp + OCDBIMIBNCD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OCDBIMIBNCD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
