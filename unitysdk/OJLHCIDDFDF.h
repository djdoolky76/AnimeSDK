#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IPGIJFNAFLC;
class OJLHCIDDFDF;
class OKIPFIENKIF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OJLHCIDDFDF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F6A64C0)
#define OJLHCIDDFDF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6A6870)
#define OJLHCIDDFDF_CLONE_OFFSET UNITYSDK_OFFSET(0x1F6A5DB0)
#define OJLHCIDDFDF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F6A5CF0)
#define OJLHCIDDFDF_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6A5CE0)
#define OJLHCIDDFDF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F6A60F0)
#define OJLHCIDDFDF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F6A5EC0)
#define OJLHCIDDFDF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F6A6320)
#define OJLHCIDDFDF_HPDCCNDOIKE_OFFSET UNITYSDK_OFFSET(0x1F6A5E80)
#define OJLHCIDDFDF_IHHKHFKDPGO_OFFSET UNITYSDK_OFFSET(0x1F6A5E90)
#define OJLHCIDDFDF_JBEMODKNGCM_OFFSET UNITYSDK_OFFSET(0x1F6A5EA0)
#define OJLHCIDDFDF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F6A5CA0)
#define OJLHCIDDFDF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F6A6670)
#define OJLHCIDDFDF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F6A6550)
#define OJLHCIDDFDF_NHHLMKKFLNL_OFFSET UNITYSDK_OFFSET(0x1F6A5EB0)
#define OJLHCIDDFDF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F6A5CD0)
#define OJLHCIDDFDF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F6A6380)
#define OJLHCIDDFDF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F6A63E0)

inline static constexpr unsigned int OJLHCIDDFDF_TypeDefinitionIndex = 29382;

	class OJLHCIDDFDF : public ::System::Object
	{
	public:
		::OKIPFIENKIF* DBNDEFGJCHJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::IPGIJFNAFLC* BNNPBILMCPH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::OJLHCIDDFDF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OJLHCIDDFDF*>**)UnitySDK::FromName("", "OJLHCIDDFDF")->GetStaticField(0x1C6E0);
		}

		// static const ::System::Object HDEJMLEIKJP; // 0x0
		// static const ::System::Object BECLLBBADCL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLHCIDDFDF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OJLHCIDDFDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OJLHCIDDFDF*))((::PBYTE)hIl2Cpp + OJLHCIDDFDF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJLHCIDDFDF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OJLHCIDDFDF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OJLHCIDDFDF*>*(*)())((::PBYTE)hIl2Cpp + OJLHCIDDFDF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLHCIDDFDF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OJLHCIDDFDF* Clone()
		{
			return ((::OJLHCIDDFDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLHCIDDFDF_CLONE_OFFSET))(this);
		}

		::IPGIJFNAFLC* HPDCCNDOIKE()
		{
			return ((::IPGIJFNAFLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLHCIDDFDF_HPDCCNDOIKE_OFFSET))(this);
		}

		::System::Void IHHKHFKDPGO(::IPGIJFNAFLC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IPGIJFNAFLC*))((::PBYTE)hIl2Cpp + OJLHCIDDFDF_IHHKHFKDPGO_OFFSET))(this, a1);
		}

		::OKIPFIENKIF* JBEMODKNGCM()
		{
			return ((::OKIPFIENKIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLHCIDDFDF_JBEMODKNGCM_OFFSET))(this);
		}

		::System::Void NHHLMKKFLNL(::OKIPFIENKIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKIPFIENKIF*))((::PBYTE)hIl2Cpp + OJLHCIDDFDF_NHHLMKKFLNL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OJLHCIDDFDF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OJLHCIDDFDF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OJLHCIDDFDF*))((::PBYTE)hIl2Cpp + OJLHCIDDFDF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLHCIDDFDF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLHCIDDFDF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OJLHCIDDFDF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLHCIDDFDF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OJLHCIDDFDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OJLHCIDDFDF*))((::PBYTE)hIl2Cpp + OJLHCIDDFDF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OJLHCIDDFDF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
