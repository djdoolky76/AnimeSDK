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

#define AOJEODENHPL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E641990)
#define AOJEODENHPL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E641CC0)
#define AOJEODENHPL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6414A0)
#define AOJEODENHPL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E641460)
#define AOJEODENHPL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E641450)
#define AOJEODENHPL_EIKDMPPNCLC_OFFSET UNITYSDK_OFFSET(0x1E641570)
#define AOJEODENHPL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E641660)
#define AOJEODENHPL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6415C0)
#define AOJEODENHPL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6416C0)
#define AOJEODENHPL_HCPGAMJEGMB_OFFSET UNITYSDK_OFFSET(0x1E6415A0)
#define AOJEODENHPL_JGKKIODILCO_OFFSET UNITYSDK_OFFSET(0x1E641520)
#define AOJEODENHPL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6413E0)
#define AOJEODENHPL_JMEHLOIMKAE_OFFSET UNITYSDK_OFFSET(0x1E641540)
#define AOJEODENHPL_KAADEPADNMH_OFFSET UNITYSDK_OFFSET(0x1E641530)
#define AOJEODENHPL_KDEGKNLDHJM_OFFSET UNITYSDK_OFFSET(0x1E6415B0)
#define AOJEODENHPL_LDKMIKEMHFO_OFFSET UNITYSDK_OFFSET(0x1E641580)
#define AOJEODENHPL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E641C00)
#define AOJEODENHPL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E641BA0)
#define AOJEODENHPL_MKBLEILBPHI_OFFSET UNITYSDK_OFFSET(0x1E641590)
#define AOJEODENHPL_MNFMNCINJCK_OFFSET UNITYSDK_OFFSET(0x1E641560)
#define AOJEODENHPL_MODFGNFHPPN_OFFSET UNITYSDK_OFFSET(0x1E641550)
#define AOJEODENHPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E641440)
#define AOJEODENHPL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E641710)
#define AOJEODENHPL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E641770)

inline static constexpr unsigned int AOJEODENHPL_TypeDefinitionIndex = 29908;

	class AOJEODENHPL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NLPHDINMAPM; // 0x18
		::System::UInt32 EJNCMIEKEND; // 0x1C
		::System::UInt32 KBBFPCGLDCN; // 0x20
		::System::UInt32 JBCHAPLOJAK; // 0x24
		::System::Boolean CDFDONPAJCP; // 0x28
		static ::Google::Protobuf::MessageParser_1<::AOJEODENHPL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AOJEODENHPL*>**)UnitySDK::FromName("", "AOJEODENHPL")->GetStaticField(0x49820);
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
