#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NCFFIOJPHJM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NCFFIOJPHJM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EADA0B0)
#define NCFFIOJPHJM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EADA2D0)
#define NCFFIOJPHJM_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAD9D00)
#define NCFFIOJPHJM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAD9CD0)
#define NCFFIOJPHJM_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAD9CC0)
#define NCFFIOJPHJM_EMNEFBFCKDJ_OFFSET UNITYSDK_OFFSET(0x1EAD9D50)
#define NCFFIOJPHJM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAD9E30)
#define NCFFIOJPHJM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAD9D60)
#define NCFFIOJPHJM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAD9FA0)
#define NCFFIOJPHJM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAD9C80)
#define NCFFIOJPHJM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EADA170)
#define NCFFIOJPHJM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EADA140)
#define NCFFIOJPHJM_MNBHLAJGKOH_OFFSET UNITYSDK_OFFSET(0x1EAD9D40)
#define NCFFIOJPHJM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAD9CB0)
#define NCFFIOJPHJM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAD9FD0)
#define NCFFIOJPHJM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EADA030)

	class NCFFIOJPHJM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MJIMFDKFGDE; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NCFFIOJPHJM")->GetStaticField(0x5D180);
		}

		// static const ::System::Object MJJGNBCFCOH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFFIOJPHJM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NCFFIOJPHJM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCFFIOJPHJM*))((::PBYTE)hIl2Cpp + NCFFIOJPHJM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCFFIOJPHJM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NCFFIOJPHJM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFFIOJPHJM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NCFFIOJPHJM* Clone()
		{
			return ((::NCFFIOJPHJM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFFIOJPHJM_CLONE_OFFSET))(this);
		}

		::System::UInt32 MNBHLAJGKOH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFFIOJPHJM_MNBHLAJGKOH_OFFSET))(this);
		}

		::System::Void EMNEFBFCKDJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NCFFIOJPHJM_EMNEFBFCKDJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NCFFIOJPHJM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NCFFIOJPHJM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NCFFIOJPHJM*))((::PBYTE)hIl2Cpp + NCFFIOJPHJM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFFIOJPHJM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFFIOJPHJM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NCFFIOJPHJM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFFIOJPHJM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NCFFIOJPHJM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCFFIOJPHJM*))((::PBYTE)hIl2Cpp + NCFFIOJPHJM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NCFFIOJPHJM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
