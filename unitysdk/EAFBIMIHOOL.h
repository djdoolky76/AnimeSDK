#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAFBIMIHOOL;
class JLJPFFILKIO;
class NPEHFAHLDNM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EAFBIMIHOOL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x203E6A60)
#define EAFBIMIHOOL_CCTOR_OFFSET UNITYSDK_OFFSET(0x203E6EF0)
#define EAFBIMIHOOL_CLONE_OFFSET UNITYSDK_OFFSET(0x203E6290)
#define EAFBIMIHOOL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x203E61F0)
#define EAFBIMIHOOL_CTOR_OFFSET UNITYSDK_OFFSET(0x203E61E0)
#define EAFBIMIHOOL_DDBNPAPKCMA_OFFSET UNITYSDK_OFFSET(0x203E6390)
#define EAFBIMIHOOL_EGCLOPOJINE_OFFSET UNITYSDK_OFFSET(0x203E6330)
#define EAFBIMIHOOL_EJOKOLHBKGC_OFFSET UNITYSDK_OFFSET(0x203E63C0)
#define EAFBIMIHOOL_EMBDACAJHCG_OFFSET UNITYSDK_OFFSET(0x203E63A0)
#define EAFBIMIHOOL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x203E6520)
#define EAFBIMIHOOL_EQUALS_OFFSET UNITYSDK_OFFSET(0x203E63F0)
#define EAFBIMIHOOL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x203E63E0)
#define EAFBIMIHOOL_FEBLKDMIGII_OFFSET UNITYSDK_OFFSET(0x203E6340)
#define EAFBIMIHOOL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x203E66D0)
#define EAFBIMIHOOL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x203E61A0)
#define EAFBIMIHOOL_JNOOKNCMIHN_OFFSET UNITYSDK_OFFSET(0x203E6370)
#define EAFBIMIHOOL_KGLIPAJLDMC_OFFSET UNITYSDK_OFFSET(0x203E6350)
#define EAFBIMIHOOL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x203E6DE0)
#define EAFBIMIHOOL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x203E6CE0)
#define EAFBIMIHOOL_NFDLPNFMBIJ_OFFSET UNITYSDK_OFFSET(0x203E6380)
#define EAFBIMIHOOL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x203E63D0)
#define EAFBIMIHOOL_OGIMILOAOIC_OFFSET UNITYSDK_OFFSET(0x203E63B0)
#define EAFBIMIHOOL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x203E61D0)
#define EAFBIMIHOOL_PIGCJIAOIKA_OFFSET UNITYSDK_OFFSET(0x203E6360)
#define EAFBIMIHOOL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x203E67B0)
#define EAFBIMIHOOL_WRITETO_OFFSET UNITYSDK_OFFSET(0x203E6810)

inline static constexpr unsigned int EAFBIMIHOOL_TypeDefinitionIndex = 31413;

	class EAFBIMIHOOL : public ::System::Object
	{
	public:
		::JLJPFFILKIO* KMJKJFJEDBF; // 0x10
		::NPEHFAHLDNM* DIOPPNPPOLH; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 CCPNMCHBGFA; // 0x28
		::System::UInt32 NAEACGPKNNH; // 0x2C
		::System::UInt32 MEGGDDIDHFM; // 0x30
		::System::UInt32 BIIPLBKCBCB; // 0x34
		static ::Google::Protobuf::MessageParser_1<::EAFBIMIHOOL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EAFBIMIHOOL*>**)UnitySDK::FromName("", "EAFBIMIHOOL")->GetStaticField(0x3DE60);
		}

		// static const ::System::Object HFJINAGIMMN; // 0x0
		// static const ::System::Object EEDDEINLCCA; // 0x0
		// static const ::System::Object CHBJAHEPJEA; // 0x0
		// static const ::System::Object OAMMBKNIIJL; // 0x0
		// static const ::System::Object HKBJJPGHGKC; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAFBIMIHOOL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EAFBIMIHOOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EAFBIMIHOOL*))((::PBYTE)hIl2Cpp + EAFBIMIHOOL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAFBIMIHOOL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EAFBIMIHOOL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EAFBIMIHOOL*>*(*)())((::PBYTE)hIl2Cpp + EAFBIMIHOOL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAFBIMIHOOL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EAFBIMIHOOL* Clone()
		{
			return ((::EAFBIMIHOOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAFBIMIHOOL_CLONE_OFFSET))(this);
		}

		::System::UInt32 EGCLOPOJINE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAFBIMIHOOL_EGCLOPOJINE_OFFSET))(this);
		}

		::System::Void FEBLKDMIGII(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EAFBIMIHOOL_FEBLKDMIGII_OFFSET))(this, a1);
		}

		::JLJPFFILKIO* KGLIPAJLDMC()
		{
			return ((::JLJPFFILKIO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAFBIMIHOOL_KGLIPAJLDMC_OFFSET))(this);
		}

		::System::Void PIGCJIAOIKA(::JLJPFFILKIO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLJPFFILKIO*))((::PBYTE)hIl2Cpp + EAFBIMIHOOL_PIGCJIAOIKA_OFFSET))(this, a1);
		}

		::System::UInt32 JNOOKNCMIHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAFBIMIHOOL_JNOOKNCMIHN_OFFSET))(this);
		}

		::System::Void NFDLPNFMBIJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EAFBIMIHOOL_NFDLPNFMBIJ_OFFSET))(this, a1);
		}

		::NPEHFAHLDNM* DDBNPAPKCMA()
		{
			return ((::NPEHFAHLDNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAFBIMIHOOL_DDBNPAPKCMA_OFFSET))(this);
		}

		::System::Void EMBDACAJHCG(::NPEHFAHLDNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPEHFAHLDNM*))((::PBYTE)hIl2Cpp + EAFBIMIHOOL_EMBDACAJHCG_OFFSET))(this, a1);
		}

		::System::UInt32 OGIMILOAOIC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAFBIMIHOOL_OGIMILOAOIC_OFFSET))(this);
		}

		::System::Void EJOKOLHBKGC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EAFBIMIHOOL_EJOKOLHBKGC_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAFBIMIHOOL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EAFBIMIHOOL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EAFBIMIHOOL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EAFBIMIHOOL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EAFBIMIHOOL*))((::PBYTE)hIl2Cpp + EAFBIMIHOOL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAFBIMIHOOL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAFBIMIHOOL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EAFBIMIHOOL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAFBIMIHOOL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EAFBIMIHOOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EAFBIMIHOOL*))((::PBYTE)hIl2Cpp + EAFBIMIHOOL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EAFBIMIHOOL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
