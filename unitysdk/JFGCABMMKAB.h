#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFGCABMMKAB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JFGCABMMKAB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E72A9B0)
#define JFGCABMMKAB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E72ACE0)
#define JFGCABMMKAB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E72A540)
#define JFGCABMMKAB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E72A4F0)
#define JFGCABMMKAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E72A4E0)
#define JFGCABMMKAB_DACNOGJMGEP_OFFSET UNITYSDK_OFFSET(0x1E72A610)
#define JFGCABMMKAB_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1E72A5E0)
#define JFGCABMMKAB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E72A6A0)
#define JFGCABMMKAB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E72A640)
#define JFGCABMMKAB_FDLNKHPHILK_OFFSET UNITYSDK_OFFSET(0x1E72A5C0)
#define JFGCABMMKAB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E72A700)
#define JFGCABMMKAB_HCDBHLGGJEP_OFFSET UNITYSDK_OFFSET(0x1E72A620)
#define JFGCABMMKAB_HDGNBMFGDAL_OFFSET UNITYSDK_OFFSET(0x1E72A5B0)
#define JFGCABMMKAB_JGPPKPBILPF_OFFSET UNITYSDK_OFFSET(0x1E72A5D0)
#define JFGCABMMKAB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E72A4A0)
#define JFGCABMMKAB_MDPGBKMPCFD_OFFSET UNITYSDK_OFFSET(0x1E72A5A0)
#define JFGCABMMKAB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E72AC20)
#define JFGCABMMKAB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E72ABC0)
#define JFGCABMMKAB_MHCOHIKHKLL_OFFSET UNITYSDK_OFFSET(0x1E72A630)
#define JFGCABMMKAB_MOIEECBKMLK_OFFSET UNITYSDK_OFFSET(0x1E72A600)
#define JFGCABMMKAB_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1E72A5F0)
#define JFGCABMMKAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E72A4D0)
#define JFGCABMMKAB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E72A730)
#define JFGCABMMKAB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E72A790)

	class JFGCABMMKAB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MKNEAIAHENG; // 0x18
		::System::Boolean PJMLFFILEEK; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 FLBKCMIIFFP; // 0x20
		::System::UInt32 LOGMNNNCGIP; // 0x24
		::System::UInt32 OHCINMCEDME; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JFGCABMMKAB")->GetStaticField(0x14F10);
		}

		// static const ::System::Object OEHKGBJPMOH; // 0x0
		// static const ::System::Object IKDJHPGMKHF; // 0x0
		// static const ::System::Object IEAPGPOMBIN; // 0x0
		// static const ::System::Object HJMDJMKOHGI; // 0x0
		// static const ::System::Object DLGAANFIPJP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGCABMMKAB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JFGCABMMKAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFGCABMMKAB*))((::PBYTE)hIl2Cpp + JFGCABMMKAB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFGCABMMKAB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JFGCABMMKAB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGCABMMKAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JFGCABMMKAB* Clone()
		{
			return ((::JFGCABMMKAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGCABMMKAB_CLONE_OFFSET))(this);
		}

		::System::Boolean MDPGBKMPCFD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGCABMMKAB_MDPGBKMPCFD_OFFSET))(this);
		}

		::System::Void HDGNBMFGDAL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JFGCABMMKAB_HDGNBMFGDAL_OFFSET))(this, a1);
		}

		::System::UInt32 FDLNKHPHILK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGCABMMKAB_FDLNKHPHILK_OFFSET))(this);
		}

		::System::Void JGPPKPBILPF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JFGCABMMKAB_JGPPKPBILPF_OFFSET))(this, a1);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGCABMMKAB_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JFGCABMMKAB_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::System::UInt32 MOIEECBKMLK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGCABMMKAB_MOIEECBKMLK_OFFSET))(this);
		}

		::System::Void DACNOGJMGEP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JFGCABMMKAB_DACNOGJMGEP_OFFSET))(this, a1);
		}

		::System::UInt32 HCDBHLGGJEP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGCABMMKAB_HCDBHLGGJEP_OFFSET))(this);
		}

		::System::Void MHCOHIKHKLL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JFGCABMMKAB_MHCOHIKHKLL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JFGCABMMKAB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JFGCABMMKAB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JFGCABMMKAB*))((::PBYTE)hIl2Cpp + JFGCABMMKAB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGCABMMKAB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGCABMMKAB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JFGCABMMKAB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGCABMMKAB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JFGCABMMKAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFGCABMMKAB*))((::PBYTE)hIl2Cpp + JFGCABMMKAB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JFGCABMMKAB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
