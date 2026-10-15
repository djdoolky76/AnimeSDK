#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HEGGPIEGBIN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HEGGPIEGBIN_AHDMAMMBDIC_OFFSET UNITYSDK_OFFSET(0x1E559C20)
#define HEGGPIEGBIN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E559FD0)
#define HEGGPIEGBIN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E55A2E0)
#define HEGGPIEGBIN_CJCOLPJIACP_OFFSET UNITYSDK_OFFSET(0x1E559C30)
#define HEGGPIEGBIN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E559B80)
#define HEGGPIEGBIN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E559B40)
#define HEGGPIEGBIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E559B30)
#define HEGGPIEGBIN_DIPFOJPJHHF_OFFSET UNITYSDK_OFFSET(0x1E559C40)
#define HEGGPIEGBIN_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1E559C00)
#define HEGGPIEGBIN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E559CF0)
#define HEGGPIEGBIN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E559C60)
#define HEGGPIEGBIN_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1E559C10)
#define HEGGPIEGBIN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E559DD0)
#define HEGGPIEGBIN_HMPOGIDCDGA_OFFSET UNITYSDK_OFFSET(0x1E559C50)
#define HEGGPIEGBIN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E559AC0)
#define HEGGPIEGBIN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E55A140)
#define HEGGPIEGBIN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E55A0F0)
#define HEGGPIEGBIN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E559B20)
#define HEGGPIEGBIN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E559E00)
#define HEGGPIEGBIN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E559E60)

	class HEGGPIEGBIN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean DHMADBLCKKD; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 PKMHKMFBAFH; // 0x1C
		::System::UInt32 GEMFJILOPLL; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HEGGPIEGBIN")->GetStaticField(0xE160);
		}

		// static const ::System::Object AKFFJEHMCCB; // 0x0
		// static const ::System::Object OOLLDLHKDOH; // 0x0
		// static const ::System::Object FKDJANBBJCB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGGPIEGBIN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HEGGPIEGBIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEGGPIEGBIN*))((::PBYTE)hIl2Cpp + HEGGPIEGBIN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEGGPIEGBIN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HEGGPIEGBIN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGGPIEGBIN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HEGGPIEGBIN* Clone()
		{
			return ((::HEGGPIEGBIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGGPIEGBIN_CLONE_OFFSET))(this);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGGPIEGBIN_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HEGGPIEGBIN_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::System::Boolean AHDMAMMBDIC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGGPIEGBIN_AHDMAMMBDIC_OFFSET))(this);
		}

		::System::Void CJCOLPJIACP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HEGGPIEGBIN_CJCOLPJIACP_OFFSET))(this, a1);
		}

		::System::UInt32 DIPFOJPJHHF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGGPIEGBIN_DIPFOJPJHHF_OFFSET))(this);
		}

		::System::Void HMPOGIDCDGA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HEGGPIEGBIN_HMPOGIDCDGA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HEGGPIEGBIN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HEGGPIEGBIN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HEGGPIEGBIN*))((::PBYTE)hIl2Cpp + HEGGPIEGBIN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGGPIEGBIN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGGPIEGBIN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HEGGPIEGBIN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGGPIEGBIN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HEGGPIEGBIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEGGPIEGBIN*))((::PBYTE)hIl2Cpp + HEGGPIEGBIN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HEGGPIEGBIN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
