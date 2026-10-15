#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JHECCCANFGP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JHECCCANFGP_ABABAIDAEOK_OFFSET UNITYSDK_OFFSET(0x1E743540)
#define JHECCCANFGP_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1E743560)
#define JHECCCANFGP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E743910)
#define JHECCCANFGP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E743C90)
#define JHECCCANFGP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7434F0)
#define JHECCCANFGP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7434B0)
#define JHECCCANFGP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7434A0)
#define JHECCCANFGP_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1E743570)
#define JHECCCANFGP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E743680)
#define JHECCCANFGP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7435A0)
#define JHECCCANFGP_FOAFNPGDLLK_OFFSET UNITYSDK_OFFSET(0x1E743590)
#define JHECCCANFGP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E743750)
#define JHECCCANFGP_JFHIGHMLFMG_OFFSET UNITYSDK_OFFSET(0x1E743550)
#define JHECCCANFGP_JFNJCIIHEFA_OFFSET UNITYSDK_OFFSET(0x1E743580)
#define JHECCCANFGP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E743460)
#define JHECCCANFGP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E743AF0)
#define JHECCCANFGP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E743AA0)
#define JHECCCANFGP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E743490)
#define JHECCCANFGP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E743780)
#define JHECCCANFGP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7437E0)

inline static constexpr unsigned int JHECCCANFGP_TypeDefinitionIndex = 33666;

	class JHECCCANFGP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NPFBAFODCBI; // 0x18
		::System::UInt32 FMPAACGCABH; // 0x1C
		::System::UInt32 FJBLKPNOKAF; // 0x20
		static ::Google::Protobuf::MessageParser_1<::JHECCCANFGP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JHECCCANFGP*>**)UnitySDK::FromName("", "JHECCCANFGP")->GetStaticField(0x34440);
		}

		// static const ::System::Object LECDPNEBBOF; // 0x0
		// static const ::System::Object JJDOFLLPDJE; // 0x0
		// static const ::System::Object PFPJMEJFKFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHECCCANFGP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JHECCCANFGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JHECCCANFGP*))((::PBYTE)hIl2Cpp + JHECCCANFGP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHECCCANFGP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JHECCCANFGP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JHECCCANFGP*>*(*)())((::PBYTE)hIl2Cpp + JHECCCANFGP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHECCCANFGP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JHECCCANFGP* Clone()
		{
			return ((::JHECCCANFGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHECCCANFGP_CLONE_OFFSET))(this);
		}

		::System::UInt32 ABABAIDAEOK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHECCCANFGP_ABABAIDAEOK_OFFSET))(this);
		}

		::System::Void JFHIGHMLFMG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JHECCCANFGP_JFHIGHMLFMG_OFFSET))(this, a1);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHECCCANFGP_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JHECCCANFGP_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::UInt32 JFNJCIIHEFA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHECCCANFGP_JFNJCIIHEFA_OFFSET))(this);
		}

		::System::Void FOAFNPGDLLK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JHECCCANFGP_FOAFNPGDLLK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JHECCCANFGP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JHECCCANFGP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JHECCCANFGP*))((::PBYTE)hIl2Cpp + JHECCCANFGP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHECCCANFGP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHECCCANFGP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JHECCCANFGP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHECCCANFGP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JHECCCANFGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JHECCCANFGP*))((::PBYTE)hIl2Cpp + JHECCCANFGP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JHECCCANFGP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
