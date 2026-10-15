#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IPKOBBJPKML;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IPKOBBJPKML_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1E6E5DF0)
#define IPKOBBJPKML_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6E6160)
#define IPKOBBJPKML_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6E6380)
#define IPKOBBJPKML_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6E5DB0)
#define IPKOBBJPKML_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6E5D80)
#define IPKOBBJPKML_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6E5D70)
#define IPKOBBJPKML_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1E6E5E00)
#define IPKOBBJPKML_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6E5EE0)
#define IPKOBBJPKML_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6E5E10)
#define IPKOBBJPKML_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6E6050)
#define IPKOBBJPKML_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6E5D30)
#define IPKOBBJPKML_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6E6220)
#define IPKOBBJPKML_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6E61F0)
#define IPKOBBJPKML_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6E5D60)
#define IPKOBBJPKML_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6E6080)
#define IPKOBBJPKML_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6E60E0)

inline static constexpr unsigned int IPKOBBJPKML_TypeDefinitionIndex = 33040;

	class IPKOBBJPKML : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NPFBAFODCBI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::IPKOBBJPKML*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IPKOBBJPKML*>**)UnitySDK::FromName("", "IPKOBBJPKML")->GetStaticField(0x5B440);
		}

		// static const ::System::Object JJDOFLLPDJE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPKOBBJPKML_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IPKOBBJPKML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IPKOBBJPKML*))((::PBYTE)hIl2Cpp + IPKOBBJPKML_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPKOBBJPKML_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IPKOBBJPKML*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IPKOBBJPKML*>*(*)())((::PBYTE)hIl2Cpp + IPKOBBJPKML_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPKOBBJPKML_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IPKOBBJPKML* Clone()
		{
			return ((::IPKOBBJPKML*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPKOBBJPKML_CLONE_OFFSET))(this);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPKOBBJPKML_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IPKOBBJPKML_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IPKOBBJPKML_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IPKOBBJPKML* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IPKOBBJPKML*))((::PBYTE)hIl2Cpp + IPKOBBJPKML_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPKOBBJPKML_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPKOBBJPKML_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IPKOBBJPKML_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPKOBBJPKML_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IPKOBBJPKML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IPKOBBJPKML*))((::PBYTE)hIl2Cpp + IPKOBBJPKML_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IPKOBBJPKML_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
