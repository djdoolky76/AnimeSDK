#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGGDDAJLAEB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AGGDDAJLAEB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E12CAA0)
#define AGGDDAJLAEB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E12CD20)
#define AGGDDAJLAEB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E12C520)
#define AGGDDAJLAEB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E12C4E0)
#define AGGDDAJLAEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E12C4D0)
#define AGGDDAJLAEB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E12C640)
#define AGGDDAJLAEB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E12C5E0)
#define AGGDDAJLAEB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E12C830)
#define AGGDDAJLAEB_IEELBOMGFMN_OFFSET UNITYSDK_OFFSET(0x1E12C5A0)
#define AGGDDAJLAEB_IKJGDKMNABI_OFFSET UNITYSDK_OFFSET(0x1E12C5C0)
#define AGGDDAJLAEB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E12C460)
#define AGGDDAJLAEB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E12CBA0)
#define AGGDDAJLAEB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E12CB50)
#define AGGDDAJLAEB_MNJODDBMGCF_OFFSET UNITYSDK_OFFSET(0x1E12C5B0)
#define AGGDDAJLAEB_MPOKENDLOCM_OFFSET UNITYSDK_OFFSET(0x1E12C5D0)
#define AGGDDAJLAEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E12C4C0)
#define AGGDDAJLAEB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E12C950)
#define AGGDDAJLAEB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E12C9B0)

	class AGGDDAJLAEB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JCOCBOBKOMA; // 0x18
		::System::Byte _padding0[0x4];
		::System::Double IPFECLHKCGL; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AGGDDAJLAEB")->GetStaticField(0x308A0);
		}

		// static const ::System::Object IHIPPDJHJAK; // 0x0
		// static const ::System::Object DGJBFAEBAGM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGDDAJLAEB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AGGDDAJLAEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGGDDAJLAEB*))((::PBYTE)hIl2Cpp + AGGDDAJLAEB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGGDDAJLAEB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AGGDDAJLAEB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGDDAJLAEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AGGDDAJLAEB* Clone()
		{
			return ((::AGGDDAJLAEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGDDAJLAEB_CLONE_OFFSET))(this);
		}

		::System::UInt32 IEELBOMGFMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGDDAJLAEB_IEELBOMGFMN_OFFSET))(this);
		}

		::System::Void MNJODDBMGCF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AGGDDAJLAEB_MNJODDBMGCF_OFFSET))(this, a1);
		}

		::System::Double IKJGDKMNABI()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGDDAJLAEB_IKJGDKMNABI_OFFSET))(this);
		}

		::System::Void MPOKENDLOCM(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + AGGDDAJLAEB_MPOKENDLOCM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AGGDDAJLAEB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AGGDDAJLAEB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AGGDDAJLAEB*))((::PBYTE)hIl2Cpp + AGGDDAJLAEB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGDDAJLAEB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGDDAJLAEB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AGGDDAJLAEB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGDDAJLAEB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AGGDDAJLAEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGGDDAJLAEB*))((::PBYTE)hIl2Cpp + AGGDDAJLAEB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AGGDDAJLAEB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
