#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMKMEFMOJGJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FMKMEFMOJGJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3E8FB0)
#define FMKMEFMOJGJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3E9280)
#define FMKMEFMOJGJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3E8BB0)
#define FMKMEFMOJGJ_CPBLBPJOBMN_OFFSET UNITYSDK_OFFSET(0x1E3E8C20)
#define FMKMEFMOJGJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3E8B80)
#define FMKMEFMOJGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3E8B70)
#define FMKMEFMOJGJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3E8D70)
#define FMKMEFMOJGJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3E8C60)
#define FMKMEFMOJGJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3E8E40)
#define FMKMEFMOJGJ_IJFJCEOHDLE_OFFSET UNITYSDK_OFFSET(0x1E3E8C30)
#define FMKMEFMOJGJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3E8B00)
#define FMKMEFMOJGJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3E9100)
#define FMKMEFMOJGJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3E90C0)
#define FMKMEFMOJGJ_MJPGIEICBAP_OFFSET UNITYSDK_OFFSET(0x1E3E8C40)
#define FMKMEFMOJGJ_OKPOGFPMGNM_OFFSET UNITYSDK_OFFSET(0x1E3E8C50)
#define FMKMEFMOJGJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3E8B60)
#define FMKMEFMOJGJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3E8E70)
#define FMKMEFMOJGJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3E8ED0)

inline static constexpr unsigned int FMKMEFMOJGJ_TypeDefinitionIndex = 31753;

	class FMKMEFMOJGJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KJAENGKDFJD; // 0x18
		::System::UInt32 NGFGMKLACAK; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FMKMEFMOJGJ")->GetStaticField(0x212F0);
		}

		// static const ::System::Object PIACMPBJOIK; // 0x0
		// static const ::System::Object JBEKMBAIGCK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMKMEFMOJGJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FMKMEFMOJGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMKMEFMOJGJ*))((::PBYTE)hIl2Cpp + FMKMEFMOJGJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMKMEFMOJGJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FMKMEFMOJGJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMKMEFMOJGJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FMKMEFMOJGJ* Clone()
		{
			return ((::FMKMEFMOJGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMKMEFMOJGJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 CPBLBPJOBMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMKMEFMOJGJ_CPBLBPJOBMN_OFFSET))(this);
		}

		::System::Void IJFJCEOHDLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FMKMEFMOJGJ_IJFJCEOHDLE_OFFSET))(this, a1);
		}

		::System::UInt32 MJPGIEICBAP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMKMEFMOJGJ_MJPGIEICBAP_OFFSET))(this);
		}

		::System::Void OKPOGFPMGNM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FMKMEFMOJGJ_OKPOGFPMGNM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FMKMEFMOJGJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FMKMEFMOJGJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FMKMEFMOJGJ*))((::PBYTE)hIl2Cpp + FMKMEFMOJGJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMKMEFMOJGJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMKMEFMOJGJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FMKMEFMOJGJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMKMEFMOJGJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FMKMEFMOJGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMKMEFMOJGJ*))((::PBYTE)hIl2Cpp + FMKMEFMOJGJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FMKMEFMOJGJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
