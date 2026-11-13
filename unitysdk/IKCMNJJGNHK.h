#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJDIAHDLCNJ;
class IKCMNJJGNHK;
class LDJDPENEGNH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IKCMNJJGNHK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20062C00)
#define IKCMNJJGNHK_CCCGEKDOMFA_OFFSET UNITYSDK_OFFSET(0x20062600)
#define IKCMNJJGNHK_CCTOR_OFFSET UNITYSDK_OFFSET(0x20063110)
#define IKCMNJJGNHK_CDCOJNFKMNI_OFFSET UNITYSDK_OFFSET(0x20062650)
#define IKCMNJJGNHK_CLONE_OFFSET UNITYSDK_OFFSET(0x200624C0)
#define IKCMNJJGNHK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x200623A0)
#define IKCMNJJGNHK_CTOR_OFFSET UNITYSDK_OFFSET(0x20062390)
#define IKCMNJJGNHK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x200627B0)
#define IKCMNJJGNHK_EQUALS_OFFSET UNITYSDK_OFFSET(0x20062690)
#define IKCMNJJGNHK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20062960)
#define IKCMNJJGNHK_HCBEAIBNFGC_OFFSET UNITYSDK_OFFSET(0x20062680)
#define IKCMNJJGNHK_JANPIOMOCAC_OFFSET UNITYSDK_OFFSET(0x20062640)
#define IKCMNJJGNHK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20062350)
#define IKCMNJJGNHK_JNHOFGCGGDG_OFFSET UNITYSDK_OFFSET(0x20062610)
#define IKCMNJJGNHK_KINHLNBFENN_OFFSET UNITYSDK_OFFSET(0x20062630)
#define IKCMNJJGNHK_LNAEFCHFJLI_OFFSET UNITYSDK_OFFSET(0x20062670)
#define IKCMNJJGNHK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20062FB0)
#define IKCMNJJGNHK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20062E00)
#define IKCMNJJGNHK_ODEPKCOEMJB_OFFSET UNITYSDK_OFFSET(0x20062620)
#define IKCMNJJGNHK_OPLMMBHOCED_OFFSET UNITYSDK_OFFSET(0x20062660)
#define IKCMNJJGNHK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20062380)
#define IKCMNJJGNHK_PHMAHPLFMIB_OFFSET UNITYSDK_OFFSET(0x200625F0)
#define IKCMNJJGNHK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x200629B0)
#define IKCMNJJGNHK_WRITETO_OFFSET UNITYSDK_OFFSET(0x20062A10)

inline static constexpr unsigned int IKCMNJJGNHK_TypeDefinitionIndex = 33209;

	class IKCMNJJGNHK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::LDJDPENEGNH* BCCJIDFAJKP; // 0x18
		::CJDIAHDLCNJ* OOGJPJNFMHG; // 0x20
		::System::UInt32 KKGMENHOOBM; // 0x28
		::System::UInt32 PLCJCPHKDGB; // 0x2C
		::System::UInt32 OIGJAPECKHB; // 0x30
		static ::Google::Protobuf::MessageParser_1<::IKCMNJJGNHK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IKCMNJJGNHK*>**)UnitySDK::FromName("", "IKCMNJJGNHK")->GetStaticField(0x49660);
		}

		// static const ::System::Object FIMNCMKFNIC; // 0x0
		// static const ::System::Object HNPDHDEBCJM; // 0x0
		// static const ::System::Object NFOMGDIEHNC; // 0x0
		// static const ::System::Object MAIKLFDDOLJ; // 0x0
		// static const ::System::Object KOIAILIFEHE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCMNJJGNHK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IKCMNJJGNHK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKCMNJJGNHK*))((::PBYTE)hIl2Cpp + IKCMNJJGNHK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKCMNJJGNHK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IKCMNJJGNHK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IKCMNJJGNHK*>*(*)())((::PBYTE)hIl2Cpp + IKCMNJJGNHK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCMNJJGNHK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IKCMNJJGNHK* Clone()
		{
			return ((::IKCMNJJGNHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCMNJJGNHK_CLONE_OFFSET))(this);
		}

		::System::UInt32 PHMAHPLFMIB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCMNJJGNHK_PHMAHPLFMIB_OFFSET))(this);
		}

		::System::Void CCCGEKDOMFA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKCMNJJGNHK_CCCGEKDOMFA_OFFSET))(this, a1);
		}

		::LDJDPENEGNH* JNHOFGCGGDG()
		{
			return ((::LDJDPENEGNH*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCMNJJGNHK_JNHOFGCGGDG_OFFSET))(this);
		}

		::System::Void ODEPKCOEMJB(::LDJDPENEGNH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDJDPENEGNH*))((::PBYTE)hIl2Cpp + IKCMNJJGNHK_ODEPKCOEMJB_OFFSET))(this, a1);
		}

		::System::UInt32 KINHLNBFENN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCMNJJGNHK_KINHLNBFENN_OFFSET))(this);
		}

		::System::Void JANPIOMOCAC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKCMNJJGNHK_JANPIOMOCAC_OFFSET))(this, a1);
		}

		::System::UInt32 CDCOJNFKMNI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCMNJJGNHK_CDCOJNFKMNI_OFFSET))(this);
		}

		::System::Void OPLMMBHOCED(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKCMNJJGNHK_OPLMMBHOCED_OFFSET))(this, a1);
		}

		::CJDIAHDLCNJ* LNAEFCHFJLI()
		{
			return ((::CJDIAHDLCNJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCMNJJGNHK_LNAEFCHFJLI_OFFSET))(this);
		}

		::System::Void HCBEAIBNFGC(::CJDIAHDLCNJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJDIAHDLCNJ*))((::PBYTE)hIl2Cpp + IKCMNJJGNHK_HCBEAIBNFGC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IKCMNJJGNHK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IKCMNJJGNHK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IKCMNJJGNHK*))((::PBYTE)hIl2Cpp + IKCMNJJGNHK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCMNJJGNHK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCMNJJGNHK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IKCMNJJGNHK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCMNJJGNHK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IKCMNJJGNHK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKCMNJJGNHK*))((::PBYTE)hIl2Cpp + IKCMNJJGNHK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IKCMNJJGNHK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
