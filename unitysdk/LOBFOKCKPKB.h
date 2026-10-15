#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LOBFOKCKPKB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LOBFOKCKPKB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9B9070)
#define LOBFOKCKPKB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9B9450)
#define LOBFOKCKPKB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9B8C30)
#define LOBFOKCKPKB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9B8BF0)
#define LOBFOKCKPKB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9B8BE0)
#define LOBFOKCKPKB_DPNFBDLODIM_OFFSET UNITYSDK_OFFSET(0x1E9B8CE0)
#define LOBFOKCKPKB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9B8D90)
#define LOBFOKCKPKB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9B8D10)
#define LOBFOKCKPKB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9B8E60)
#define LOBFOKCKPKB_HPNGEMONFLF_OFFSET UNITYSDK_OFFSET(0x1E9B8CC0)
#define LOBFOKCKPKB_IBPEIFLMAJP_OFFSET UNITYSDK_OFFSET(0x1E9B8CF0)
#define LOBFOKCKPKB_IPCNFICLKFH_OFFSET UNITYSDK_OFFSET(0x1E9B8D00)
#define LOBFOKCKPKB_JFOOBDPBAGB_OFFSET UNITYSDK_OFFSET(0x1E9B8CB0)
#define LOBFOKCKPKB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9B8B70)
#define LOBFOKCKPKB_KAFCBMBEHKF_OFFSET UNITYSDK_OFFSET(0x1E9B8CD0)
#define LOBFOKCKPKB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9B92A0)
#define LOBFOKCKPKB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9B9250)
#define LOBFOKCKPKB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9B8BD0)
#define LOBFOKCKPKB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9B8E90)
#define LOBFOKCKPKB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9B8EF0)

inline static constexpr unsigned int LOBFOKCKPKB_TypeDefinitionIndex = 27732;

	class LOBFOKCKPKB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Int32 EKGHKFICBOI; // 0x18
		::System::Int32 KNCACEBAMMM; // 0x1C
		::System::Int32 DOINMMBONAL; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LOBFOKCKPKB")->GetStaticField(0x50E00);
		}

		// static const ::System::Object HDHGHHBGDNP; // 0x0
		// static const ::System::Object CINLGPBKING; // 0x0
		// static const ::System::Object FEPMEPHOKJJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBFOKCKPKB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LOBFOKCKPKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LOBFOKCKPKB*))((::PBYTE)hIl2Cpp + LOBFOKCKPKB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOBFOKCKPKB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LOBFOKCKPKB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBFOKCKPKB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LOBFOKCKPKB* Clone()
		{
			return ((::LOBFOKCKPKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBFOKCKPKB_CLONE_OFFSET))(this);
		}

		::System::Int32 JFOOBDPBAGB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBFOKCKPKB_JFOOBDPBAGB_OFFSET))(this);
		}

		::System::Void HPNGEMONFLF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LOBFOKCKPKB_HPNGEMONFLF_OFFSET))(this, a1);
		}

		::System::Int32 KAFCBMBEHKF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBFOKCKPKB_KAFCBMBEHKF_OFFSET))(this);
		}

		::System::Void DPNFBDLODIM(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LOBFOKCKPKB_DPNFBDLODIM_OFFSET))(this, a1);
		}

		::System::Int32 IBPEIFLMAJP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBFOKCKPKB_IBPEIFLMAJP_OFFSET))(this);
		}

		::System::Void IPCNFICLKFH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LOBFOKCKPKB_IPCNFICLKFH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LOBFOKCKPKB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LOBFOKCKPKB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LOBFOKCKPKB*))((::PBYTE)hIl2Cpp + LOBFOKCKPKB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBFOKCKPKB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBFOKCKPKB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LOBFOKCKPKB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBFOKCKPKB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LOBFOKCKPKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LOBFOKCKPKB*))((::PBYTE)hIl2Cpp + LOBFOKCKPKB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LOBFOKCKPKB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
