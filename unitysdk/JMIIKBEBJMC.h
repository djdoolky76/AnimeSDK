#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPIBAIPJCMD;
class JMIIKBEBJMC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JMIIKBEBJMC_BFLBEIIBIKN_OFFSET UNITYSDK_OFFSET(0x1E78C670)
#define JMIIKBEBJMC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E78CC20)
#define JMIIKBEBJMC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E78CEA0)
#define JMIIKBEBJMC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E78C5E0)
#define JMIIKBEBJMC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E78C560)
#define JMIIKBEBJMC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E78C550)
#define JMIIKBEBJMC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E78C800)
#define JMIIKBEBJMC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E78C690)
#define JMIIKBEBJMC_FLJOBDNCFEP_OFFSET UNITYSDK_OFFSET(0x1E78C680)
#define JMIIKBEBJMC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E78CAD0)
#define JMIIKBEBJMC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E78C510)
#define JMIIKBEBJMC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E78CD20)
#define JMIIKBEBJMC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E78CC80)
#define JMIIKBEBJMC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E78C540)
#define JMIIKBEBJMC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E78CB30)
#define JMIIKBEBJMC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E78CB90)

	class JMIIKBEBJMC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::FPIBAIPJCMD* ILEOLMKCJMB; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JMIIKBEBJMC")->GetStaticField(0x6C0F0);
		}

		// static const ::System::Object IBBLPNOMPNG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIIKBEBJMC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JMIIKBEBJMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMIIKBEBJMC*))((::PBYTE)hIl2Cpp + JMIIKBEBJMC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMIIKBEBJMC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JMIIKBEBJMC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIIKBEBJMC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JMIIKBEBJMC* Clone()
		{
			return ((::JMIIKBEBJMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIIKBEBJMC_CLONE_OFFSET))(this);
		}

		::FPIBAIPJCMD* BFLBEIIBIKN()
		{
			return ((::FPIBAIPJCMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIIKBEBJMC_BFLBEIIBIKN_OFFSET))(this);
		}

		::System::Void FLJOBDNCFEP(::FPIBAIPJCMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPIBAIPJCMD*))((::PBYTE)hIl2Cpp + JMIIKBEBJMC_FLJOBDNCFEP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JMIIKBEBJMC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JMIIKBEBJMC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JMIIKBEBJMC*))((::PBYTE)hIl2Cpp + JMIIKBEBJMC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIIKBEBJMC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIIKBEBJMC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JMIIKBEBJMC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIIKBEBJMC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JMIIKBEBJMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMIIKBEBJMC*))((::PBYTE)hIl2Cpp + JMIIKBEBJMC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JMIIKBEBJMC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
