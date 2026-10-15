#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PPNADCDDNNP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PPNADCDDNNP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFDF360)
#define PPNADCDDNNP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFDF680)
#define PPNADCDDNNP_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFDEFA0)
#define PPNADCDDNNP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFDEF60)
#define PPNADCDDNNP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFDEF50)
#define PPNADCDDNNP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFDF110)
#define PPNADCDDNNP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFDF030)
#define PPNADCDDNNP_FGGBMGCGCKF_OFFSET UNITYSDK_OFFSET(0x1DFDF020)
#define PPNADCDDNNP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFDF1E0)
#define PPNADCDDNNP_JAOPBIKPOMI_OFFSET UNITYSDK_OFFSET(0x1DFDF010)
#define PPNADCDDNNP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFDEF10)
#define PPNADCDDNNP_LKBDNLAMPPG_OFFSET UNITYSDK_OFFSET(0x1DFDF000)
#define PPNADCDDNNP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFDF500)
#define PPNADCDDNNP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFDF4C0)
#define PPNADCDDNNP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFDEF40)
#define PPNADCDDNNP_PFNPJNPKHHG_OFFSET UNITYSDK_OFFSET(0x1DFDEFF0)
#define PPNADCDDNNP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFDF220)
#define PPNADCDDNNP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFDF280)

	class PPNADCDDNNP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AENFHPAGFOI; // 0x18
		::System::Byte _padding0[0x4];
		::System::UInt64 BHDCGBNFPKI; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PPNADCDDNNP")->GetStaticField(0x43830);
		}

		// static const ::System::Object KGAMBJABCOJ; // 0x0
		// static const ::System::Object HLGEDBNIHII; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNADCDDNNP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PPNADCDDNNP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPNADCDDNNP*))((::PBYTE)hIl2Cpp + PPNADCDDNNP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPNADCDDNNP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PPNADCDDNNP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNADCDDNNP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PPNADCDDNNP* Clone()
		{
			return ((::PPNADCDDNNP*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNADCDDNNP_CLONE_OFFSET))(this);
		}

		::System::UInt64 PFNPJNPKHHG()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNADCDDNNP_PFNPJNPKHHG_OFFSET))(this);
		}

		::System::Void LKBDNLAMPPG(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + PPNADCDDNNP_LKBDNLAMPPG_OFFSET))(this, a1);
		}

		::System::UInt32 JAOPBIKPOMI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNADCDDNNP_JAOPBIKPOMI_OFFSET))(this);
		}

		::System::Void FGGBMGCGCKF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PPNADCDDNNP_FGGBMGCGCKF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PPNADCDDNNP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PPNADCDDNNP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PPNADCDDNNP*))((::PBYTE)hIl2Cpp + PPNADCDDNNP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNADCDDNNP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNADCDDNNP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PPNADCDDNNP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNADCDDNNP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PPNADCDDNNP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPNADCDDNNP*))((::PBYTE)hIl2Cpp + PPNADCDDNNP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PPNADCDDNNP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
