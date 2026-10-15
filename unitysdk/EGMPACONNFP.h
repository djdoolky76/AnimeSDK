#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EGMPACONNFP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EGMPACONNFP_ABABAIDAEOK_OFFSET UNITYSDK_OFFSET(0x1E299910)
#define EGMPACONNFP_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1E2998F0)
#define EGMPACONNFP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E299CC0)
#define EGMPACONNFP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E29A040)
#define EGMPACONNFP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2998A0)
#define EGMPACONNFP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E299860)
#define EGMPACONNFP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E299850)
#define EGMPACONNFP_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1E299900)
#define EGMPACONNFP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E299A30)
#define EGMPACONNFP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E299950)
#define EGMPACONNFP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E299B00)
#define EGMPACONNFP_JFHIGHMLFMG_OFFSET UNITYSDK_OFFSET(0x1E299920)
#define EGMPACONNFP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E299810)
#define EGMPACONNFP_LDCIIPGOKAN_OFFSET UNITYSDK_OFFSET(0x1E299940)
#define EGMPACONNFP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E299EA0)
#define EGMPACONNFP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E299E50)
#define EGMPACONNFP_OGAJPLFAHHO_OFFSET UNITYSDK_OFFSET(0x1E299930)
#define EGMPACONNFP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E299840)
#define EGMPACONNFP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E299B30)
#define EGMPACONNFP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E299B90)

inline static constexpr unsigned int EGMPACONNFP_TypeDefinitionIndex = 33136;

	class EGMPACONNFP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FMPAACGCABH; // 0x18
		::System::UInt32 KEKBGJDHFPJ; // 0x1C
		::System::UInt32 NPFBAFODCBI; // 0x20
		static ::Google::Protobuf::MessageParser_1<::EGMPACONNFP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EGMPACONNFP*>**)UnitySDK::FromName("", "EGMPACONNFP")->GetStaticField(0x406C0);
		}

		// static const ::System::Object JJDOFLLPDJE; // 0x0
		// static const ::System::Object LECDPNEBBOF; // 0x0
		// static const ::System::Object DAGFCNOELJC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGMPACONNFP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EGMPACONNFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EGMPACONNFP*))((::PBYTE)hIl2Cpp + EGMPACONNFP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGMPACONNFP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EGMPACONNFP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EGMPACONNFP*>*(*)())((::PBYTE)hIl2Cpp + EGMPACONNFP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGMPACONNFP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EGMPACONNFP* Clone()
		{
			return ((::EGMPACONNFP*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGMPACONNFP_CLONE_OFFSET))(this);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGMPACONNFP_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EGMPACONNFP_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::UInt32 ABABAIDAEOK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGMPACONNFP_ABABAIDAEOK_OFFSET))(this);
		}

		::System::Void JFHIGHMLFMG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EGMPACONNFP_JFHIGHMLFMG_OFFSET))(this, a1);
		}

		::System::UInt32 OGAJPLFAHHO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGMPACONNFP_OGAJPLFAHHO_OFFSET))(this);
		}

		::System::Void LDCIIPGOKAN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EGMPACONNFP_LDCIIPGOKAN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EGMPACONNFP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EGMPACONNFP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EGMPACONNFP*))((::PBYTE)hIl2Cpp + EGMPACONNFP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGMPACONNFP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGMPACONNFP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EGMPACONNFP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGMPACONNFP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EGMPACONNFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EGMPACONNFP*))((::PBYTE)hIl2Cpp + EGMPACONNFP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EGMPACONNFP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
