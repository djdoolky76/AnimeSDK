#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOIFDJPBGLB.h"
#include "unitysdk/System/Object.h"
class FODHGNLPBKH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FODHGNLPBKH_AGEKDECKNGG_OFFSET UNITYSDK_OFFSET(0x1E3F8480)
#define FODHGNLPBKH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3F8850)
#define FODHGNLPBKH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3F8B80)
#define FODHGNLPBKH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3F83A0)
#define FODHGNLPBKH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3F8370)
#define FODHGNLPBKH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3F8360)
#define FODHGNLPBKH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3F8520)
#define FODHGNLPBKH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3F8490)
#define FODHGNLPBKH_FDCBGKOLFLM_OFFSET UNITYSDK_OFFSET(0x1E3F8430)
#define FODHGNLPBKH_GAIKIHDIOBM_OFFSET UNITYSDK_OFFSET(0x1E3F8420)
#define FODHGNLPBKH_GDGCKPFCHFJ_OFFSET UNITYSDK_OFFSET(0x1E3F8460)
#define FODHGNLPBKH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3F8600)
#define FODHGNLPBKH_GLOKDJBCJAF_OFFSET UNITYSDK_OFFSET(0x1E3F8440)
#define FODHGNLPBKH_HEFLMMJHAOL_OFFSET UNITYSDK_OFFSET(0x1E3F8450)
#define FODHGNLPBKH_IDNFENJBNPP_OFFSET UNITYSDK_OFFSET(0x1E3F8470)
#define FODHGNLPBKH_JBENBABCOGB_OFFSET UNITYSDK_OFFSET(0x1E3F8410)
#define FODHGNLPBKH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3F82F0)
#define FODHGNLPBKH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3F8AE0)
#define FODHGNLPBKH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3F8A90)
#define FODHGNLPBKH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3F8350)
#define FODHGNLPBKH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3F8640)
#define FODHGNLPBKH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3F86A0)

inline static constexpr unsigned int FODHGNLPBKH_TypeDefinitionIndex = 33483;

	class FODHGNLPBKH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HIJHFDEFGPP; // 0x18
		::System::UInt32 DEJFOEHNFJA; // 0x1C
		::System::UInt32 AHOKAEIDHIB; // 0x20
		::HOIFDJPBGLB AFHHMCKLLAJ; // 0x24
		static ::Google::Protobuf::MessageParser_1<::FODHGNLPBKH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FODHGNLPBKH*>**)UnitySDK::FromName("", "FODHGNLPBKH")->GetStaticField(0x2DEF0);
		}

		// static const ::System::Object LFMHICIGAPC; // 0x0
		// static const ::System::Object LEFFLEMFMAP; // 0x0
		// static const ::System::Object KBDJJNOBJIE; // 0x0
		// static const ::System::Object EIDJNEEOOCF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FODHGNLPBKH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FODHGNLPBKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FODHGNLPBKH*))((::PBYTE)hIl2Cpp + FODHGNLPBKH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FODHGNLPBKH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FODHGNLPBKH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FODHGNLPBKH*>*(*)())((::PBYTE)hIl2Cpp + FODHGNLPBKH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FODHGNLPBKH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FODHGNLPBKH* Clone()
		{
			return ((::FODHGNLPBKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FODHGNLPBKH_CLONE_OFFSET))(this);
		}

		::HOIFDJPBGLB JBENBABCOGB()
		{
			return ((::HOIFDJPBGLB(*)(::PVOID))((::PBYTE)hIl2Cpp + FODHGNLPBKH_JBENBABCOGB_OFFSET))(this);
		}

		::System::Void GAIKIHDIOBM(::HOIFDJPBGLB a1)
		{
			return ((::System::Void(*)(::PVOID, ::HOIFDJPBGLB))((::PBYTE)hIl2Cpp + FODHGNLPBKH_GAIKIHDIOBM_OFFSET))(this, a1);
		}

		::System::UInt32 FDCBGKOLFLM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FODHGNLPBKH_FDCBGKOLFLM_OFFSET))(this);
		}

		::System::Void GLOKDJBCJAF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FODHGNLPBKH_GLOKDJBCJAF_OFFSET))(this, a1);
		}

		::System::UInt32 HEFLMMJHAOL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FODHGNLPBKH_HEFLMMJHAOL_OFFSET))(this);
		}

		::System::Void GDGCKPFCHFJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FODHGNLPBKH_GDGCKPFCHFJ_OFFSET))(this, a1);
		}

		::System::UInt32 IDNFENJBNPP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FODHGNLPBKH_IDNFENJBNPP_OFFSET))(this);
		}

		::System::Void AGEKDECKNGG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FODHGNLPBKH_AGEKDECKNGG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FODHGNLPBKH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FODHGNLPBKH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FODHGNLPBKH*))((::PBYTE)hIl2Cpp + FODHGNLPBKH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FODHGNLPBKH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FODHGNLPBKH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FODHGNLPBKH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FODHGNLPBKH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FODHGNLPBKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FODHGNLPBKH*))((::PBYTE)hIl2Cpp + FODHGNLPBKH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FODHGNLPBKH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
