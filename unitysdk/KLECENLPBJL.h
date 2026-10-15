#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLAKIACAACO;
class KHNBFDNKLHE;
class KLECENLPBJL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KLECENLPBJL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8884F0)
#define KLECENLPBJL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E888900)
#define KLECENLPBJL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E887D70)
#define KLECENLPBJL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E887CB0)
#define KLECENLPBJL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E887CA0)
#define KLECENLPBJL_EGHNAGOJFJD_OFFSET UNITYSDK_OFFSET(0x1E887E60)
#define KLECENLPBJL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8880D0)
#define KLECENLPBJL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E887EA0)
#define KLECENLPBJL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E887E50)
#define KLECENLPBJL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E888300)
#define KLECENLPBJL_HGCCNJAMBPK_OFFSET UNITYSDK_OFFSET(0x1E887E70)
#define KLECENLPBJL_IPFDMFDOKHJ_OFFSET UNITYSDK_OFFSET(0x1E887E90)
#define KLECENLPBJL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E887C60)
#define KLECENLPBJL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8886F0)
#define KLECENLPBJL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8885F0)
#define KLECENLPBJL_NDGJGMEFMLH_OFFSET UNITYSDK_OFFSET(0x1E887E80)
#define KLECENLPBJL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E887E40)
#define KLECENLPBJL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E887C90)
#define KLECENLPBJL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E888350)
#define KLECENLPBJL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8883B0)

inline static constexpr unsigned int KLECENLPBJL_TypeDefinitionIndex = 26939;

	class KLECENLPBJL : public ::System::Object
	{
	public:
		::CLAKIACAACO* IDJNJDDEECN; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::KHNBFDNKLHE* CHFNJJAMCCO; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KLECENLPBJL")->GetStaticField(0x202A0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object BEIENNFBJPB; // 0x0
		// static const ::System::Object CJDOLCNNPKL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLECENLPBJL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KLECENLPBJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLECENLPBJL*))((::PBYTE)hIl2Cpp + KLECENLPBJL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLECENLPBJL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KLECENLPBJL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLECENLPBJL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KLECENLPBJL* Clone()
		{
			return ((::KLECENLPBJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLECENLPBJL_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLECENLPBJL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KLECENLPBJL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::CLAKIACAACO* EGHNAGOJFJD()
		{
			return ((::CLAKIACAACO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLECENLPBJL_EGHNAGOJFJD_OFFSET))(this);
		}

		::System::Void HGCCNJAMBPK(::CLAKIACAACO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLAKIACAACO*))((::PBYTE)hIl2Cpp + KLECENLPBJL_HGCCNJAMBPK_OFFSET))(this, a1);
		}

		::KHNBFDNKLHE* NDGJGMEFMLH()
		{
			return ((::KHNBFDNKLHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLECENLPBJL_NDGJGMEFMLH_OFFSET))(this);
		}

		::System::Void IPFDMFDOKHJ(::KHNBFDNKLHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHNBFDNKLHE*))((::PBYTE)hIl2Cpp + KLECENLPBJL_IPFDMFDOKHJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KLECENLPBJL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KLECENLPBJL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KLECENLPBJL*))((::PBYTE)hIl2Cpp + KLECENLPBJL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLECENLPBJL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLECENLPBJL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KLECENLPBJL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLECENLPBJL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KLECENLPBJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLECENLPBJL*))((::PBYTE)hIl2Cpp + KLECENLPBJL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KLECENLPBJL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
