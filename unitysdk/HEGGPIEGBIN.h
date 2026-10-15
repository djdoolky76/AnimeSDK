#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HEGGPIEGBIN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HEGGPIEGBIN_AHDMAMMBDIC_OFFSET UNITYSDK_OFFSET(0x1E52C640)
#define HEGGPIEGBIN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E52C9F0)
#define HEGGPIEGBIN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E52CD00)
#define HEGGPIEGBIN_CJCOLPJIACP_OFFSET UNITYSDK_OFFSET(0x1E52C650)
#define HEGGPIEGBIN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E52C5A0)
#define HEGGPIEGBIN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E52C560)
#define HEGGPIEGBIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E52C550)
#define HEGGPIEGBIN_DIPFOJPJHHF_OFFSET UNITYSDK_OFFSET(0x1E52C660)
#define HEGGPIEGBIN_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1E52C620)
#define HEGGPIEGBIN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E52C710)
#define HEGGPIEGBIN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E52C680)
#define HEGGPIEGBIN_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1E52C630)
#define HEGGPIEGBIN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E52C7F0)
#define HEGGPIEGBIN_HMPOGIDCDGA_OFFSET UNITYSDK_OFFSET(0x1E52C670)
#define HEGGPIEGBIN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E52C4E0)
#define HEGGPIEGBIN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E52CB60)
#define HEGGPIEGBIN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E52CB10)
#define HEGGPIEGBIN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E52C540)
#define HEGGPIEGBIN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E52C820)
#define HEGGPIEGBIN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E52C880)

inline static constexpr unsigned int HEGGPIEGBIN_TypeDefinitionIndex = 35080;

	class HEGGPIEGBIN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PKMHKMFBAFH; // 0x18
		::System::UInt32 GEMFJILOPLL; // 0x1C
		::System::Boolean DHMADBLCKKD; // 0x20
		static ::Google::Protobuf::MessageParser_1<::HEGGPIEGBIN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HEGGPIEGBIN*>**)UnitySDK::FromName("", "HEGGPIEGBIN")->GetStaticField(0xD370);
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

		static ::Google::Protobuf::MessageParser_1<::HEGGPIEGBIN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HEGGPIEGBIN*>*(*)())((::PBYTE)hIl2Cpp + HEGGPIEGBIN_JJGHOBBFNJD_OFFSET))();
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
