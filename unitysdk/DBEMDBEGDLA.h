#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAGKEDMHEOI;
class DBEMDBEGDLA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DBEMDBEGDLA_AEOEDKPHLPB_OFFSET UNITYSDK_OFFSET(0x1F431800)
#define DBEMDBEGDLA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F431D50)
#define DBEMDBEGDLA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F432000)
#define DBEMDBEGDLA_CLONE_OFFSET UNITYSDK_OFFSET(0x1F431780)
#define DBEMDBEGDLA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F431710)
#define DBEMDBEGDLA_CTOR_OFFSET UNITYSDK_OFFSET(0x1F431700)
#define DBEMDBEGDLA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F4319D0)
#define DBEMDBEGDLA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F431840)
#define DBEMDBEGDLA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F431B50)
#define DBEMDBEGDLA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F4316C0)
#define DBEMDBEGDLA_LGLJDNIIJHG_OFFSET UNITYSDK_OFFSET(0x1F431810)
#define DBEMDBEGDLA_MCOODDIIOIH_OFFSET UNITYSDK_OFFSET(0x1F431820)
#define DBEMDBEGDLA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F431E40)
#define DBEMDBEGDLA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F431DB0)
#define DBEMDBEGDLA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F4316F0)
#define DBEMDBEGDLA_PMODGCHEFJC_OFFSET UNITYSDK_OFFSET(0x1F431830)
#define DBEMDBEGDLA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F431BE0)
#define DBEMDBEGDLA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F431C40)

inline static constexpr unsigned int DBEMDBEGDLA_TypeDefinitionIndex = 31054;

	class DBEMDBEGDLA : public ::System::Object
	{
	public:
		::CAGKEDMHEOI* IPBMAGNJAML; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Boolean OFGDGGJGHCG; // 0x20
		static ::Google::Protobuf::MessageParser_1<::DBEMDBEGDLA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DBEMDBEGDLA*>**)UnitySDK::FromName("", "DBEMDBEGDLA")->GetStaticField(0x1FE90);
		}

		// static const ::System::Object KNEDPEPCALG; // 0x0
		// static const ::System::Object NGPKIDLBPIA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBEMDBEGDLA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DBEMDBEGDLA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBEMDBEGDLA*))((::PBYTE)hIl2Cpp + DBEMDBEGDLA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBEMDBEGDLA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DBEMDBEGDLA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DBEMDBEGDLA*>*(*)())((::PBYTE)hIl2Cpp + DBEMDBEGDLA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBEMDBEGDLA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DBEMDBEGDLA* Clone()
		{
			return ((::DBEMDBEGDLA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBEMDBEGDLA_CLONE_OFFSET))(this);
		}

		::System::Boolean AEOEDKPHLPB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DBEMDBEGDLA_AEOEDKPHLPB_OFFSET))(this);
		}

		::System::Void LGLJDNIIJHG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DBEMDBEGDLA_LGLJDNIIJHG_OFFSET))(this, a1);
		}

		::CAGKEDMHEOI* MCOODDIIOIH()
		{
			return ((::CAGKEDMHEOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBEMDBEGDLA_MCOODDIIOIH_OFFSET))(this);
		}

		::System::Void PMODGCHEFJC(::CAGKEDMHEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGKEDMHEOI*))((::PBYTE)hIl2Cpp + DBEMDBEGDLA_PMODGCHEFJC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DBEMDBEGDLA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DBEMDBEGDLA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DBEMDBEGDLA*))((::PBYTE)hIl2Cpp + DBEMDBEGDLA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBEMDBEGDLA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBEMDBEGDLA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DBEMDBEGDLA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBEMDBEGDLA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DBEMDBEGDLA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBEMDBEGDLA*))((::PBYTE)hIl2Cpp + DBEMDBEGDLA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DBEMDBEGDLA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
