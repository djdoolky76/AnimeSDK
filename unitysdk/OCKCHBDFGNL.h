#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NKDNFDCFNCP;
class OCKCHBDFGNL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OCKCHBDFGNL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE16AD0)
#define OCKCHBDFGNL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE16EC0)
#define OCKCHBDFGNL_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE16600)
#define OCKCHBDFGNL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE16560)
#define OCKCHBDFGNL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE16520)
#define OCKCHBDFGNL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE167B0)
#define OCKCHBDFGNL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE16660)
#define OCKCHBDFGNL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE168E0)
#define OCKCHBDFGNL_HEBKNMONLDM_OFFSET UNITYSDK_OFFSET(0x1DE16630)
#define OCKCHBDFGNL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE164E0)
#define OCKCHBDFGNL_KFFMBNFGJOB_OFFSET UNITYSDK_OFFSET(0x1DE16650)
#define OCKCHBDFGNL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE16D00)
#define OCKCHBDFGNL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE16C50)
#define OCKCHBDFGNL_OLEJNDFFHPP_OFFSET UNITYSDK_OFFSET(0x1DE16640)
#define OCKCHBDFGNL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE16510)
#define OCKCHBDFGNL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE16960)
#define OCKCHBDFGNL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE169C0)

inline static constexpr unsigned int OCKCHBDFGNL_TypeDefinitionIndex = 30104;

	class OCKCHBDFGNL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::NKDNFDCFNCP*>* MAOHCPCFLFK; // 0x18
		::System::UInt64 HHCEMNIBHIE; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::NKDNFDCFNCP*>** StaticGet_ECNJECDFPOL()
		{
			return (::Google::Protobuf::FieldCodec_1<::NKDNFDCFNCP*>**)UnitySDK::FromName("", "OCKCHBDFGNL")->GetStaticField(0x12E90);
		}

		static ::Google::Protobuf::MessageParser_1<::OCKCHBDFGNL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OCKCHBDFGNL*>**)UnitySDK::FromName("", "OCKCHBDFGNL")->GetStaticField(0x12E98);
		}

		// static const ::System::Object JHCELFPEMFJ; // 0x0
		// static const ::System::Object BDDGFOPHBML; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCKCHBDFGNL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OCKCHBDFGNL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCKCHBDFGNL*))((::PBYTE)hIl2Cpp + OCKCHBDFGNL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCKCHBDFGNL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OCKCHBDFGNL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OCKCHBDFGNL*>*(*)())((::PBYTE)hIl2Cpp + OCKCHBDFGNL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCKCHBDFGNL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OCKCHBDFGNL* Clone()
		{
			return ((::OCKCHBDFGNL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCKCHBDFGNL_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NKDNFDCFNCP*>* HEBKNMONLDM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NKDNFDCFNCP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCKCHBDFGNL_HEBKNMONLDM_OFFSET))(this);
		}

		::System::UInt64 OLEJNDFFHPP()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + OCKCHBDFGNL_OLEJNDFFHPP_OFFSET))(this);
		}

		::System::Void KFFMBNFGJOB(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + OCKCHBDFGNL_KFFMBNFGJOB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OCKCHBDFGNL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OCKCHBDFGNL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OCKCHBDFGNL*))((::PBYTE)hIl2Cpp + OCKCHBDFGNL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCKCHBDFGNL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCKCHBDFGNL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OCKCHBDFGNL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCKCHBDFGNL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OCKCHBDFGNL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCKCHBDFGNL*))((::PBYTE)hIl2Cpp + OCKCHBDFGNL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OCKCHBDFGNL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
