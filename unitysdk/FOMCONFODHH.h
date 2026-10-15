#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JDGNMIDMACL.h"
#include "unitysdk/System/Object.h"
class BIKNPJPLDAO;
class FOMCONFODHH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FOMCONFODHH_CAFKDMJCJMJ_OFFSET UNITYSDK_OFFSET(0x1E3FEB00)
#define FOMCONFODHH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3FEFE0)
#define FOMCONFODHH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3FF400)
#define FOMCONFODHH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3FEA60)
#define FOMCONFODHH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3FE9D0)
#define FOMCONFODHH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3FE9C0)
#define FOMCONFODHH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3FECC0)
#define FOMCONFODHH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3FEB40)
#define FOMCONFODHH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3FEE40)
#define FOMCONFODHH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3FE980)
#define FOMCONFODHH_JLOBHEDMDLD_OFFSET UNITYSDK_OFFSET(0x1E3FEB10)
#define FOMCONFODHH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3FF1F0)
#define FOMCONFODHH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3FF0F0)
#define FOMCONFODHH_MKBCKPDCPMD_OFFSET UNITYSDK_OFFSET(0x1E3FEB30)
#define FOMCONFODHH_OGILPFEFKHJ_OFFSET UNITYSDK_OFFSET(0x1E3FEB20)
#define FOMCONFODHH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3FE9B0)
#define FOMCONFODHH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3FEE90)
#define FOMCONFODHH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3FEEF0)

inline static constexpr unsigned int FOMCONFODHH_TypeDefinitionIndex = 29974;

	class FOMCONFODHH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::BIKNPJPLDAO* HPFNMCAFBDL; // 0x18
		::JDGNMIDMACL MHLHFDNCHJE; // 0x20
		static ::Google::Protobuf::MessageParser_1<::FOMCONFODHH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FOMCONFODHH*>**)UnitySDK::FromName("", "FOMCONFODHH")->GetStaticField(0x662C0);
		}

		// static const ::System::Object EIADONEDGHF; // 0x0
		// static const ::System::Object PDPCIBLBDLA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMCONFODHH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FOMCONFODHH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOMCONFODHH*))((::PBYTE)hIl2Cpp + FOMCONFODHH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOMCONFODHH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FOMCONFODHH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FOMCONFODHH*>*(*)())((::PBYTE)hIl2Cpp + FOMCONFODHH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMCONFODHH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FOMCONFODHH* Clone()
		{
			return ((::FOMCONFODHH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMCONFODHH_CLONE_OFFSET))(this);
		}

		::BIKNPJPLDAO* CAFKDMJCJMJ()
		{
			return ((::BIKNPJPLDAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMCONFODHH_CAFKDMJCJMJ_OFFSET))(this);
		}

		::System::Void JLOBHEDMDLD(::BIKNPJPLDAO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIKNPJPLDAO*))((::PBYTE)hIl2Cpp + FOMCONFODHH_JLOBHEDMDLD_OFFSET))(this, a1);
		}

		::JDGNMIDMACL OGILPFEFKHJ()
		{
			return ((::JDGNMIDMACL(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMCONFODHH_OGILPFEFKHJ_OFFSET))(this);
		}

		::System::Void MKBCKPDCPMD(::JDGNMIDMACL a1)
		{
			return ((::System::Void(*)(::PVOID, ::JDGNMIDMACL))((::PBYTE)hIl2Cpp + FOMCONFODHH_MKBCKPDCPMD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOMCONFODHH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FOMCONFODHH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FOMCONFODHH*))((::PBYTE)hIl2Cpp + FOMCONFODHH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMCONFODHH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMCONFODHH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FOMCONFODHH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMCONFODHH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FOMCONFODHH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOMCONFODHH*))((::PBYTE)hIl2Cpp + FOMCONFODHH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FOMCONFODHH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
