#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOJEODENHPL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AOJEODENHPL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E66F050)
#define AOJEODENHPL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E66F380)
#define AOJEODENHPL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E66EB70)
#define AOJEODENHPL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E66EB20)
#define AOJEODENHPL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E66EB10)
#define AOJEODENHPL_EIKDMPPNCLC_OFFSET UNITYSDK_OFFSET(0x1E66EC40)
#define AOJEODENHPL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E66ED30)
#define AOJEODENHPL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E66EC90)
#define AOJEODENHPL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E66ED90)
#define AOJEODENHPL_HCPGAMJEGMB_OFFSET UNITYSDK_OFFSET(0x1E66EC70)
#define AOJEODENHPL_JGKKIODILCO_OFFSET UNITYSDK_OFFSET(0x1E66EBF0)
#define AOJEODENHPL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E66EAA0)
#define AOJEODENHPL_JMEHLOIMKAE_OFFSET UNITYSDK_OFFSET(0x1E66EC10)
#define AOJEODENHPL_KAADEPADNMH_OFFSET UNITYSDK_OFFSET(0x1E66EC00)
#define AOJEODENHPL_KDEGKNLDHJM_OFFSET UNITYSDK_OFFSET(0x1E66EC80)
#define AOJEODENHPL_LDKMIKEMHFO_OFFSET UNITYSDK_OFFSET(0x1E66EC50)
#define AOJEODENHPL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E66F2C0)
#define AOJEODENHPL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E66F260)
#define AOJEODENHPL_MKBLEILBPHI_OFFSET UNITYSDK_OFFSET(0x1E66EC60)
#define AOJEODENHPL_MNFMNCINJCK_OFFSET UNITYSDK_OFFSET(0x1E66EC30)
#define AOJEODENHPL_MODFGNFHPPN_OFFSET UNITYSDK_OFFSET(0x1E66EC20)
#define AOJEODENHPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E66EB00)
#define AOJEODENHPL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E66EDD0)
#define AOJEODENHPL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E66EE30)

inline static constexpr unsigned int AOJEODENHPL_TypeDefinitionIndex = 29908;

	class AOJEODENHPL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JBCHAPLOJAK; // 0x18
		::System::UInt32 NLPHDINMAPM; // 0x1C
		::System::UInt32 KBBFPCGLDCN; // 0x20
		::System::Boolean CDFDONPAJCP; // 0x24
		::System::Byte _padding0[0x3];
		::System::UInt32 EJNCMIEKEND; // 0x28
		static ::Google::Protobuf::MessageParser_1<::AOJEODENHPL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AOJEODENHPL*>**)UnitySDK::FromName("", "AOJEODENHPL")->GetStaticField(0x41170);
		}

		// static const ::System::Object CLGAAGPCNGI; // 0x0
		// static const ::System::Object FNLPGJOMMBC; // 0x0
		// static const ::System::Object CHNBDDHFIPG; // 0x0
		// static const ::System::Object HBGMNBBBJDO; // 0x0
		// static const ::System::Object LGNHOEMIIGI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOJEODENHPL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AOJEODENHPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOJEODENHPL*))((::PBYTE)hIl2Cpp + AOJEODENHPL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOJEODENHPL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AOJEODENHPL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AOJEODENHPL*>*(*)())((::PBYTE)hIl2Cpp + AOJEODENHPL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOJEODENHPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AOJEODENHPL* Clone()
		{
			return ((::AOJEODENHPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOJEODENHPL_CLONE_OFFSET))(this);
		}

		::System::UInt32 JGKKIODILCO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOJEODENHPL_JGKKIODILCO_OFFSET))(this);
		}

		::System::Void KAADEPADNMH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AOJEODENHPL_KAADEPADNMH_OFFSET))(this, a1);
		}

		::System::UInt32 JMEHLOIMKAE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOJEODENHPL_JMEHLOIMKAE_OFFSET))(this);
		}

		::System::Void MODFGNFHPPN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AOJEODENHPL_MODFGNFHPPN_OFFSET))(this, a1);
		}

		::System::UInt32 MNFMNCINJCK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOJEODENHPL_MNFMNCINJCK_OFFSET))(this);
		}

		::System::Void EIKDMPPNCLC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AOJEODENHPL_EIKDMPPNCLC_OFFSET))(this, a1);
		}

		::System::Boolean LDKMIKEMHFO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AOJEODENHPL_LDKMIKEMHFO_OFFSET))(this);
		}

		::System::Void MKBLEILBPHI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AOJEODENHPL_MKBLEILBPHI_OFFSET))(this, a1);
		}

		::System::UInt32 HCPGAMJEGMB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOJEODENHPL_HCPGAMJEGMB_OFFSET))(this);
		}

		::System::Void KDEGKNLDHJM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AOJEODENHPL_KDEGKNLDHJM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AOJEODENHPL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AOJEODENHPL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AOJEODENHPL*))((::PBYTE)hIl2Cpp + AOJEODENHPL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOJEODENHPL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOJEODENHPL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AOJEODENHPL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOJEODENHPL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AOJEODENHPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOJEODENHPL*))((::PBYTE)hIl2Cpp + AOJEODENHPL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AOJEODENHPL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
