#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LGGGHFDBCFN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LGGGHFDBCFN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FAC0000)
#define LGGGHFDBCFN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAC02A0)
#define LGGGHFDBCFN_CLONE_OFFSET UNITYSDK_OFFSET(0x1FABFB80)
#define LGGGHFDBCFN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FABFB40)
#define LGGGHFDBCFN_CTOR_OFFSET UNITYSDK_OFFSET(0x1FABFB30)
#define LGGGHFDBCFN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FABFCB0)
#define LGGGHFDBCFN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FABFC50)
#define LGGGHFDBCFN_FJNIJBIIFGO_OFFSET UNITYSDK_OFFSET(0x1FABFC30)
#define LGGGHFDBCFN_FNIBEDEOMNP_OFFSET UNITYSDK_OFFSET(0x1FABFBE0)
#define LGGGHFDBCFN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FABFDA0)
#define LGGGHFDBCFN_IDBMLJPJHFH_OFFSET UNITYSDK_OFFSET(0x1FABFC20)
#define LGGGHFDBCFN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FABFAF0)
#define LGGGHFDBCFN_LDKMIKEMHFO_OFFSET UNITYSDK_OFFSET(0x1FABFBF0)
#define LGGGHFDBCFN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FAC01F0)
#define LGGGHFDBCFN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FAC01A0)
#define LGGGHFDBCFN_MKBLEILBPHI_OFFSET UNITYSDK_OFFSET(0x1FABFC00)
#define LGGGHFDBCFN_NGCIBAOKDNB_OFFSET UNITYSDK_OFFSET(0x1FABFC40)
#define LGGGHFDBCFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FABFB20)
#define LGGGHFDBCFN_PDDCNEPPDFG_OFFSET UNITYSDK_OFFSET(0x1FABFC10)
#define LGGGHFDBCFN_PMMPOLCIMDL_OFFSET UNITYSDK_OFFSET(0x1FABFBD0)
#define LGGGHFDBCFN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FABFDD0)
#define LGGGHFDBCFN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FABFE30)

inline static constexpr unsigned int LGGGHFDBCFN_TypeDefinitionIndex = 31177;

	class LGGGHFDBCFN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NGAEBHDNAIJ; // 0x18
		::System::UInt32 NDFIDCNNGMJ; // 0x1C
		::System::Boolean CDFDONPAJCP; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 FGIJJAHMDNH; // 0x24
		static ::Google::Protobuf::MessageParser_1<::LGGGHFDBCFN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LGGGHFDBCFN*>**)UnitySDK::FromName("", "LGGGHFDBCFN")->GetStaticField(0x34D50);
		}

		// static const ::System::Object PEGHFEADPBF; // 0x0
		// static const ::System::Object HBGMNBBBJDO; // 0x0
		// static const ::System::Object IDEABICNDMI; // 0x0
		// static const ::System::Object KLJANMLJHEF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGGHFDBCFN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LGGGHFDBCFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGGGHFDBCFN*))((::PBYTE)hIl2Cpp + LGGGHFDBCFN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGGGHFDBCFN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LGGGHFDBCFN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LGGGHFDBCFN*>*(*)())((::PBYTE)hIl2Cpp + LGGGHFDBCFN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGGHFDBCFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LGGGHFDBCFN* Clone()
		{
			return ((::LGGGHFDBCFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGGHFDBCFN_CLONE_OFFSET))(this);
		}

		::System::UInt32 PMMPOLCIMDL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGGHFDBCFN_PMMPOLCIMDL_OFFSET))(this);
		}

		::System::Void FNIBEDEOMNP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGGGHFDBCFN_FNIBEDEOMNP_OFFSET))(this, a1);
		}

		::System::Boolean LDKMIKEMHFO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGGHFDBCFN_LDKMIKEMHFO_OFFSET))(this);
		}

		::System::Void MKBLEILBPHI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LGGGHFDBCFN_MKBLEILBPHI_OFFSET))(this, a1);
		}

		::System::UInt32 PDDCNEPPDFG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGGHFDBCFN_PDDCNEPPDFG_OFFSET))(this);
		}

		::System::Void IDBMLJPJHFH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGGGHFDBCFN_IDBMLJPJHFH_OFFSET))(this, a1);
		}

		::System::UInt32 FJNIJBIIFGO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGGHFDBCFN_FJNIJBIIFGO_OFFSET))(this);
		}

		::System::Void NGCIBAOKDNB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGGGHFDBCFN_NGCIBAOKDNB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LGGGHFDBCFN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LGGGHFDBCFN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGGGHFDBCFN*))((::PBYTE)hIl2Cpp + LGGGHFDBCFN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGGHFDBCFN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGGHFDBCFN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LGGGHFDBCFN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGGHFDBCFN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LGGGHFDBCFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGGGHFDBCFN*))((::PBYTE)hIl2Cpp + LGGGHFDBCFN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LGGGHFDBCFN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
