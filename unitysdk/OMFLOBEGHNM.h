#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMFLOBEGHNM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OMFLOBEGHNM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEB3EF0)
#define OMFLOBEGHNM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEB41C0)
#define OMFLOBEGHNM_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEB3B40)
#define OMFLOBEGHNM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEB3B10)
#define OMFLOBEGHNM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB3B00)
#define OMFLOBEGHNM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEB3CB0)
#define OMFLOBEGHNM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEB3BD0)
#define OMFLOBEGHNM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DEB3BC0)
#define OMFLOBEGHNM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEB3D80)
#define OMFLOBEGHNM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEB3AC0)
#define OMFLOBEGHNM_JNOOKNCMIHN_OFFSET UNITYSDK_OFFSET(0x1DEB3B90)
#define OMFLOBEGHNM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEB4040)
#define OMFLOBEGHNM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEB4000)
#define OMFLOBEGHNM_NFDLPNFMBIJ_OFFSET UNITYSDK_OFFSET(0x1DEB3BA0)
#define OMFLOBEGHNM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DEB3BB0)
#define OMFLOBEGHNM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEB3AF0)
#define OMFLOBEGHNM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEB3DB0)
#define OMFLOBEGHNM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEB3E10)

	class OMFLOBEGHNM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 MEGGDDIDHFM; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OMFLOBEGHNM")->GetStaticField(0x2B140);
		}

		// static const ::System::Object CHBJAHEPJEA; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMFLOBEGHNM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OMFLOBEGHNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMFLOBEGHNM*))((::PBYTE)hIl2Cpp + OMFLOBEGHNM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMFLOBEGHNM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OMFLOBEGHNM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMFLOBEGHNM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OMFLOBEGHNM* Clone()
		{
			return ((::OMFLOBEGHNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMFLOBEGHNM_CLONE_OFFSET))(this);
		}

		::System::UInt32 JNOOKNCMIHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMFLOBEGHNM_JNOOKNCMIHN_OFFSET))(this);
		}

		::System::Void NFDLPNFMBIJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OMFLOBEGHNM_NFDLPNFMBIJ_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMFLOBEGHNM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OMFLOBEGHNM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OMFLOBEGHNM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OMFLOBEGHNM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OMFLOBEGHNM*))((::PBYTE)hIl2Cpp + OMFLOBEGHNM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMFLOBEGHNM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMFLOBEGHNM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OMFLOBEGHNM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMFLOBEGHNM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OMFLOBEGHNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMFLOBEGHNM*))((::PBYTE)hIl2Cpp + OMFLOBEGHNM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OMFLOBEGHNM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
