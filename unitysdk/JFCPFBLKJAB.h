#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JFCPFBLKJAB_NCOGIBGGELH.h"
#include "unitysdk/System/Object.h"
class DNPDLODGAHA;
class DPKPGPPHHBM;
class EIICHLNCAKK;
class IJJKHFPLLIF;
class IOFKKOEJFHI;
class JFCPFBLKJAB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JFCPFBLKJAB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7254A0)
#define JFCPFBLKJAB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7263A0)
#define JFCPFBLKJAB_CFDKMGLIPPB_OFFSET UNITYSDK_OFFSET(0x1E7245E0)
#define JFCPFBLKJAB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E724700)
#define JFCPFBLKJAB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E724170)
#define JFCPFBLKJAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E724160)
#define JFCPFBLKJAB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7247D0)
#define JFCPFBLKJAB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E724770)
#define JFCPFBLKJAB_FAKPCNEIANJ_OFFSET UNITYSDK_OFFSET(0x1E7246E0)
#define JFCPFBLKJAB_GDGCOOIPILB_OFFSET UNITYSDK_OFFSET(0x1E724600)
#define JFCPFBLKJAB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E724DB0)
#define JFCPFBLKJAB_HOOKLKKKIHP_OFFSET UNITYSDK_OFFSET(0x1E724660)
#define JFCPFBLKJAB_IACEKAHBLBE_OFFSET UNITYSDK_OFFSET(0x1E724680)
#define JFCPFBLKJAB_IOOHDDFMGIC_OFFSET UNITYSDK_OFFSET(0x1E724580)
#define JFCPFBLKJAB_JIFPIGBJFEH_OFFSET UNITYSDK_OFFSET(0x1E724480)
#define JFCPFBLKJAB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7240F0)
#define JFCPFBLKJAB_LEOKDJALPCJ_OFFSET UNITYSDK_OFFSET(0x1E724760)
#define JFCPFBLKJAB_LGDDDKGFMJO_OFFSET UNITYSDK_OFFSET(0x1E724560)
#define JFCPFBLKJAB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E725EC0)
#define JFCPFBLKJAB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E725790)
#define JFCPFBLKJAB_MIILIPJBOKO_OFFSET UNITYSDK_OFFSET(0x1E7244E0)
#define JFCPFBLKJAB_ONIACFMNCCD_OFFSET UNITYSDK_OFFSET(0x1E724750)
#define JFCPFBLKJAB_OPNDOFMBAGJ_OFFSET UNITYSDK_OFFSET(0x1E724500)
#define JFCPFBLKJAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E724150)
#define JFCPFBLKJAB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E725110)
#define JFCPFBLKJAB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E725170)

inline static constexpr unsigned int JFCPFBLKJAB_TypeDefinitionIndex = 25708;

	class JFCPFBLKJAB : public ::System::Object
	{
	public:
		::System::Object* OELAFPJOIAA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::JFCPFBLKJAB_NCOGIBGGELH LMHACOMCNKE; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JFCPFBLKJAB")->GetStaticField(0x5F610);
		}

		// static const ::System::Object KBMGGGHELJP; // 0x0
		// static const ::System::Object ILKCDNIDIMO; // 0x0
		// static const ::System::Object ADBKIBNNDEE; // 0x0
		// static const ::System::Object FCOKAIFAMAC; // 0x0
		// static const ::System::Object JDOOKGOMHDK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFCPFBLKJAB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JFCPFBLKJAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFCPFBLKJAB*))((::PBYTE)hIl2Cpp + JFCPFBLKJAB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFCPFBLKJAB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JFCPFBLKJAB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFCPFBLKJAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JFCPFBLKJAB* Clone()
		{
			return ((::JFCPFBLKJAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFCPFBLKJAB_CLONE_OFFSET))(this);
		}

		::IJJKHFPLLIF* JIFPIGBJFEH()
		{
			return ((::IJJKHFPLLIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFCPFBLKJAB_JIFPIGBJFEH_OFFSET))(this);
		}

		::System::Void MIILIPJBOKO(::IJJKHFPLLIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJJKHFPLLIF*))((::PBYTE)hIl2Cpp + JFCPFBLKJAB_MIILIPJBOKO_OFFSET))(this, a1);
		}

		::DNPDLODGAHA* OPNDOFMBAGJ()
		{
			return ((::DNPDLODGAHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFCPFBLKJAB_OPNDOFMBAGJ_OFFSET))(this);
		}

		::System::Void LGDDDKGFMJO(::DNPDLODGAHA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNPDLODGAHA*))((::PBYTE)hIl2Cpp + JFCPFBLKJAB_LGDDDKGFMJO_OFFSET))(this, a1);
		}

		::DPKPGPPHHBM* IOOHDDFMGIC()
		{
			return ((::DPKPGPPHHBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFCPFBLKJAB_IOOHDDFMGIC_OFFSET))(this);
		}

		::System::Void CFDKMGLIPPB(::DPKPGPPHHBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPKPGPPHHBM*))((::PBYTE)hIl2Cpp + JFCPFBLKJAB_CFDKMGLIPPB_OFFSET))(this, a1);
		}

		::EIICHLNCAKK* GDGCOOIPILB()
		{
			return ((::EIICHLNCAKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFCPFBLKJAB_GDGCOOIPILB_OFFSET))(this);
		}

		::System::Void HOOKLKKKIHP(::EIICHLNCAKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EIICHLNCAKK*))((::PBYTE)hIl2Cpp + JFCPFBLKJAB_HOOKLKKKIHP_OFFSET))(this, a1);
		}

		::IOFKKOEJFHI* IACEKAHBLBE()
		{
			return ((::IOFKKOEJFHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFCPFBLKJAB_IACEKAHBLBE_OFFSET))(this);
		}

		::System::Void FAKPCNEIANJ(::IOFKKOEJFHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOFKKOEJFHI*))((::PBYTE)hIl2Cpp + JFCPFBLKJAB_FAKPCNEIANJ_OFFSET))(this, a1);
		}

		::JFCPFBLKJAB_NCOGIBGGELH ONIACFMNCCD()
		{
			return ((::JFCPFBLKJAB_NCOGIBGGELH(*)(::PVOID))((::PBYTE)hIl2Cpp + JFCPFBLKJAB_ONIACFMNCCD_OFFSET))(this);
		}

		::System::Void LEOKDJALPCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFCPFBLKJAB_LEOKDJALPCJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JFCPFBLKJAB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JFCPFBLKJAB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JFCPFBLKJAB*))((::PBYTE)hIl2Cpp + JFCPFBLKJAB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFCPFBLKJAB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFCPFBLKJAB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JFCPFBLKJAB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFCPFBLKJAB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JFCPFBLKJAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFCPFBLKJAB*))((::PBYTE)hIl2Cpp + JFCPFBLKJAB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JFCPFBLKJAB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
