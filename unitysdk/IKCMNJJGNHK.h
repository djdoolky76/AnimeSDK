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

#define IKCMNJJGNHK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E670540)
#define IKCMNJJGNHK_CCCGEKDOMFA_OFFSET UNITYSDK_OFFSET(0x1E66FF00)
#define IKCMNJJGNHK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E670A50)
#define IKCMNJJGNHK_CDCOJNFKMNI_OFFSET UNITYSDK_OFFSET(0x1E66FF10)
#define IKCMNJJGNHK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E66FE60)
#define IKCMNJJGNHK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E66FD40)
#define IKCMNJJGNHK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E66FD30)
#define IKCMNJJGNHK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6700E0)
#define IKCMNJJGNHK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E66FF30)
#define IKCMNJJGNHK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E670280)
#define IKCMNJJGNHK_HCBEAIBNFGC_OFFSET UNITYSDK_OFFSET(0x1E66FEA0)
#define IKCMNJJGNHK_JANPIOMOCAC_OFFSET UNITYSDK_OFFSET(0x1E66FEC0)
#define IKCMNJJGNHK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E66FCF0)
#define IKCMNJJGNHK_JNHOFGCGGDG_OFFSET UNITYSDK_OFFSET(0x1E66FED0)
#define IKCMNJJGNHK_KINHLNBFENN_OFFSET UNITYSDK_OFFSET(0x1E66FEB0)
#define IKCMNJJGNHK_LNAEFCHFJLI_OFFSET UNITYSDK_OFFSET(0x1E66FE90)
#define IKCMNJJGNHK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6708F0)
#define IKCMNJJGNHK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E670740)
#define IKCMNJJGNHK_ODEPKCOEMJB_OFFSET UNITYSDK_OFFSET(0x1E66FEE0)
#define IKCMNJJGNHK_OPLMMBHOCED_OFFSET UNITYSDK_OFFSET(0x1E66FF20)
#define IKCMNJJGNHK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E66FD20)
#define IKCMNJJGNHK_PHMAHPLFMIB_OFFSET UNITYSDK_OFFSET(0x1E66FEF0)
#define IKCMNJJGNHK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6702F0)
#define IKCMNJJGNHK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E670350)

inline static constexpr unsigned int IKCMNJJGNHK_TypeDefinitionIndex = 32296;

	class IKCMNJJGNHK : public ::System::Object
	{
	public:
		::CJDIAHDLCNJ* OOGJPJNFMHG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::LDJDPENEGNH* BCCJIDFAJKP; // 0x20
		::System::UInt32 KKGMENHOOBM; // 0x28
		::System::UInt32 PLCJCPHKDGB; // 0x2C
		::System::UInt32 OIGJAPECKHB; // 0x30
		static ::Google::Protobuf::MessageParser_1<::IKCMNJJGNHK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IKCMNJJGNHK*>**)UnitySDK::FromName("", "IKCMNJJGNHK")->GetStaticField(0x4F8D0);
		}

		// static const ::System::Object KOIAILIFEHE; // 0x0
		// static const ::System::Object NFOMGDIEHNC; // 0x0
		// static const ::System::Object HNPDHDEBCJM; // 0x0
		// static const ::System::Object FIMNCMKFNIC; // 0x0
		// static const ::System::Object MAIKLFDDOLJ; // 0x0
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

		::CJDIAHDLCNJ* LNAEFCHFJLI()
		{
			return ((::CJDIAHDLCNJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCMNJJGNHK_LNAEFCHFJLI_OFFSET))(this);
		}

		::System::Void HCBEAIBNFGC(::CJDIAHDLCNJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJDIAHDLCNJ*))((::PBYTE)hIl2Cpp + IKCMNJJGNHK_HCBEAIBNFGC_OFFSET))(this, a1);
		}

		::System::UInt32 KINHLNBFENN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCMNJJGNHK_KINHLNBFENN_OFFSET))(this);
		}

		::System::Void JANPIOMOCAC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKCMNJJGNHK_JANPIOMOCAC_OFFSET))(this, a1);
		}

		::LDJDPENEGNH* JNHOFGCGGDG()
		{
			return ((::LDJDPENEGNH*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCMNJJGNHK_JNHOFGCGGDG_OFFSET))(this);
		}

		::System::Void ODEPKCOEMJB(::LDJDPENEGNH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDJDPENEGNH*))((::PBYTE)hIl2Cpp + IKCMNJJGNHK_ODEPKCOEMJB_OFFSET))(this, a1);
		}

		::System::UInt32 PHMAHPLFMIB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCMNJJGNHK_PHMAHPLFMIB_OFFSET))(this);
		}

		::System::Void CCCGEKDOMFA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKCMNJJGNHK_CCCGEKDOMFA_OFFSET))(this, a1);
		}

		::System::UInt32 CDCOJNFKMNI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCMNJJGNHK_CDCOJNFKMNI_OFFSET))(this);
		}

		::System::Void OPLMMBHOCED(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKCMNJJGNHK_OPLMMBHOCED_OFFSET))(this, a1);
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
