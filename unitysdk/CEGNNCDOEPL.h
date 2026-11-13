#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEGNNCDOEPL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CEGNNCDOEPL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x204C9C40)
#define CEGNNCDOEPL_CCTOR_OFFSET UNITYSDK_OFFSET(0x204C9F00)
#define CEGNNCDOEPL_CLONE_OFFSET UNITYSDK_OFFSET(0x204C97C0)
#define CEGNNCDOEPL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x204C9730)
#define CEGNNCDOEPL_CTOR_OFFSET UNITYSDK_OFFSET(0x204C96E0)
#define CEGNNCDOEPL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x204C9940)
#define CEGNNCDOEPL_EQUALS_OFFSET UNITYSDK_OFFSET(0x204C9820)
#define CEGNNCDOEPL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x204C9A30)
#define CEGNNCDOEPL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x204C9670)
#define CEGNNCDOEPL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x204C9D30)
#define CEGNNCDOEPL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x204C9CE0)
#define CEGNNCDOEPL_MMLKOMDDFOH_OFFSET UNITYSDK_OFFSET(0x204C9810)
#define CEGNNCDOEPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x204C96D0)
#define CEGNNCDOEPL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x204C9B30)
#define CEGNNCDOEPL_WRITETO_OFFSET UNITYSDK_OFFSET(0x204C9B90)

inline static constexpr unsigned int CEGNNCDOEPL_TypeDefinitionIndex = 30586;

	class CEGNNCDOEPL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EAGFJDCKFEP; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_HFANLCKNLFO()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "CEGNNCDOEPL")->GetStaticField(0x62CF0);
		}

		static ::Google::Protobuf::MessageParser_1<::CEGNNCDOEPL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CEGNNCDOEPL*>**)UnitySDK::FromName("", "CEGNNCDOEPL")->GetStaticField(0x62CF8);
		}

		// static const ::System::Object CDFAKKKFJJN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEGNNCDOEPL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CEGNNCDOEPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEGNNCDOEPL*))((::PBYTE)hIl2Cpp + CEGNNCDOEPL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEGNNCDOEPL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CEGNNCDOEPL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CEGNNCDOEPL*>*(*)())((::PBYTE)hIl2Cpp + CEGNNCDOEPL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEGNNCDOEPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CEGNNCDOEPL* Clone()
		{
			return ((::CEGNNCDOEPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEGNNCDOEPL_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MMLKOMDDFOH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEGNNCDOEPL_MMLKOMDDFOH_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CEGNNCDOEPL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CEGNNCDOEPL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CEGNNCDOEPL*))((::PBYTE)hIl2Cpp + CEGNNCDOEPL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEGNNCDOEPL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEGNNCDOEPL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CEGNNCDOEPL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEGNNCDOEPL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CEGNNCDOEPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEGNNCDOEPL*))((::PBYTE)hIl2Cpp + CEGNNCDOEPL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CEGNNCDOEPL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
