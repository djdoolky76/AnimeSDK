#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IAMLGPGAFAC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IAMLGPGAFAC_AKBNGOCLOCI_OFFSET UNITYSDK_OFFSET(0x1E608EA0)
#define IAMLGPGAFAC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E609200)
#define IAMLGPGAFAC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E609420)
#define IAMLGPGAFAC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E608E50)
#define IAMLGPGAFAC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E608E20)
#define IAMLGPGAFAC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E608E10)
#define IAMLGPGAFAC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E608F80)
#define IAMLGPGAFAC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E608EB0)
#define IAMLGPGAFAC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6090F0)
#define IAMLGPGAFAC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E608DD0)
#define IAMLGPGAFAC_MBHDGNNCJGH_OFFSET UNITYSDK_OFFSET(0x1E608E90)
#define IAMLGPGAFAC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6092C0)
#define IAMLGPGAFAC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E609290)
#define IAMLGPGAFAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E608E00)
#define IAMLGPGAFAC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E609120)
#define IAMLGPGAFAC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E609180)

inline static constexpr unsigned int IAMLGPGAFAC_TypeDefinitionIndex = 34487;

	class IAMLGPGAFAC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CIIPNEBKCLI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IAMLGPGAFAC")->GetStaticField(0x3FC70);
		}

		// static const ::System::Object GOBJOHKBCFI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMLGPGAFAC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IAMLGPGAFAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAMLGPGAFAC*))((::PBYTE)hIl2Cpp + IAMLGPGAFAC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAMLGPGAFAC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IAMLGPGAFAC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMLGPGAFAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IAMLGPGAFAC* Clone()
		{
			return ((::IAMLGPGAFAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMLGPGAFAC_CLONE_OFFSET))(this);
		}

		::System::UInt32 MBHDGNNCJGH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMLGPGAFAC_MBHDGNNCJGH_OFFSET))(this);
		}

		::System::Void AKBNGOCLOCI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IAMLGPGAFAC_AKBNGOCLOCI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IAMLGPGAFAC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IAMLGPGAFAC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IAMLGPGAFAC*))((::PBYTE)hIl2Cpp + IAMLGPGAFAC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMLGPGAFAC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMLGPGAFAC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IAMLGPGAFAC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMLGPGAFAC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IAMLGPGAFAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAMLGPGAFAC*))((::PBYTE)hIl2Cpp + IAMLGPGAFAC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IAMLGPGAFAC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
