#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMCNDLNONMO;
class PEPPCBMPOJD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PEPPCBMPOJD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF20B60)
#define PEPPCBMPOJD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF20DB0)
#define PEPPCBMPOJD_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF20540)
#define PEPPCBMPOJD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF204D0)
#define PEPPCBMPOJD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF204C0)
#define PEPPCBMPOJD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF20750)
#define PEPPCBMPOJD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF205E0)
#define PEPPCBMPOJD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF20A20)
#define PEPPCBMPOJD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF20480)
#define PEPPCBMPOJD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF20C30)
#define PEPPCBMPOJD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF20BC0)
#define PEPPCBMPOJD_MFCKCOPELOH_OFFSET UNITYSDK_OFFSET(0x1DF205C0)
#define PEPPCBMPOJD_OPBOKNDHHME_OFFSET UNITYSDK_OFFSET(0x1DF205D0)
#define PEPPCBMPOJD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF204B0)
#define PEPPCBMPOJD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF20A70)
#define PEPPCBMPOJD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF20AD0)

inline static constexpr unsigned int PEPPCBMPOJD_TypeDefinitionIndex = 33609;

	class PEPPCBMPOJD : public ::System::Object
	{
	public:
		::BMCNDLNONMO* JIBOHFJHOBA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PEPPCBMPOJD")->GetStaticField(0x3AA90);
		}

		// static const ::System::Object GFCDKOGDHAD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPPCBMPOJD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PEPPCBMPOJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEPPCBMPOJD*))((::PBYTE)hIl2Cpp + PEPPCBMPOJD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEPPCBMPOJD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PEPPCBMPOJD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPPCBMPOJD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PEPPCBMPOJD* Clone()
		{
			return ((::PEPPCBMPOJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPPCBMPOJD_CLONE_OFFSET))(this);
		}

		::BMCNDLNONMO* MFCKCOPELOH()
		{
			return ((::BMCNDLNONMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPPCBMPOJD_MFCKCOPELOH_OFFSET))(this);
		}

		::System::Void OPBOKNDHHME(::BMCNDLNONMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMCNDLNONMO*))((::PBYTE)hIl2Cpp + PEPPCBMPOJD_OPBOKNDHHME_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PEPPCBMPOJD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PEPPCBMPOJD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PEPPCBMPOJD*))((::PBYTE)hIl2Cpp + PEPPCBMPOJD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPPCBMPOJD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPPCBMPOJD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PEPPCBMPOJD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPPCBMPOJD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PEPPCBMPOJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEPPCBMPOJD*))((::PBYTE)hIl2Cpp + PEPPCBMPOJD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PEPPCBMPOJD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
