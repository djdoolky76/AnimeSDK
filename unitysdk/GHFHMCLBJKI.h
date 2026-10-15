#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHFHMCLBJKI;
class PAAIMLDHJCI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GHFHMCLBJKI_BAOGBDMBEPF_OFFSET UNITYSDK_OFFSET(0x1E488280)
#define GHFHMCLBJKI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4887D0)
#define GHFHMCLBJKI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E488BA0)
#define GHFHMCLBJKI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4881C0)
#define GHFHMCLBJKI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E488130)
#define GHFHMCLBJKI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E488120)
#define GHFHMCLBJKI_EIAMBLPANEL_OFFSET UNITYSDK_OFFSET(0x1E4882A0)
#define GHFHMCLBJKI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E488410)
#define GHFHMCLBJKI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E488300)
#define GHFHMCLBJKI_FJNNGCOGMEH_OFFSET UNITYSDK_OFFSET(0x1E488290)
#define GHFHMCLBJKI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E488520)
#define GHFHMCLBJKI_HADLEOMNCJC_OFFSET UNITYSDK_OFFSET(0x1E4882E0)
#define GHFHMCLBJKI_IHFPNNJAMAK_OFFSET UNITYSDK_OFFSET(0x1E4882C0)
#define GHFHMCLBJKI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4880E0)
#define GHFHMCLBJKI_KCAOMAGMKGL_OFFSET UNITYSDK_OFFSET(0x1E488260)
#define GHFHMCLBJKI_KCBNPNIICJK_OFFSET UNITYSDK_OFFSET(0x1E4882B0)
#define GHFHMCLBJKI_LHHGMLELKNI_OFFSET UNITYSDK_OFFSET(0x1E4882D0)
#define GHFHMCLBJKI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E488AD0)
#define GHFHMCLBJKI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E488A10)
#define GHFHMCLBJKI_MKBAHHJODPG_OFFSET UNITYSDK_OFFSET(0x1E4882F0)
#define GHFHMCLBJKI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E488110)
#define GHFHMCLBJKI_PHPDJGBKLPO_OFFSET UNITYSDK_OFFSET(0x1E488270)
#define GHFHMCLBJKI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E488580)
#define GHFHMCLBJKI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4885E0)

inline static constexpr unsigned int GHFHMCLBJKI_TypeDefinitionIndex = 34611;

	class GHFHMCLBJKI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::PAAIMLDHJCI* BFCOOFONIHE; // 0x18
		::System::UInt32 IAMLOHKEDPK; // 0x20
		::System::UInt32 MMCJOJGDAHJ; // 0x24
		::System::UInt32 AJHOJKFPMLL; // 0x28
		::System::UInt32 FBMCDOLAPMP; // 0x2C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GHFHMCLBJKI")->GetStaticField(0x16E80);
		}

		// static const ::System::Object NGLBMBDHBBL; // 0x0
		// static const ::System::Object FMPGPNNAFBO; // 0x0
		// static const ::System::Object CAJGKINOOHC; // 0x0
		// static const ::System::Object FAKICEDFMIH; // 0x0
		// static const ::System::Object EMAAFDGEFOA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFHMCLBJKI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GHFHMCLBJKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHFHMCLBJKI*))((::PBYTE)hIl2Cpp + GHFHMCLBJKI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHFHMCLBJKI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GHFHMCLBJKI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFHMCLBJKI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GHFHMCLBJKI* Clone()
		{
			return ((::GHFHMCLBJKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFHMCLBJKI_CLONE_OFFSET))(this);
		}

		::System::UInt32 KCAOMAGMKGL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFHMCLBJKI_KCAOMAGMKGL_OFFSET))(this);
		}

		::System::Void PHPDJGBKLPO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GHFHMCLBJKI_PHPDJGBKLPO_OFFSET))(this, a1);
		}

		::System::UInt32 BAOGBDMBEPF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFHMCLBJKI_BAOGBDMBEPF_OFFSET))(this);
		}

		::System::Void FJNNGCOGMEH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GHFHMCLBJKI_FJNNGCOGMEH_OFFSET))(this, a1);
		}

		::PAAIMLDHJCI* EIAMBLPANEL()
		{
			return ((::PAAIMLDHJCI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFHMCLBJKI_EIAMBLPANEL_OFFSET))(this);
		}

		::System::Void KCBNPNIICJK(::PAAIMLDHJCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PAAIMLDHJCI*))((::PBYTE)hIl2Cpp + GHFHMCLBJKI_KCBNPNIICJK_OFFSET))(this, a1);
		}

		::System::UInt32 IHFPNNJAMAK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFHMCLBJKI_IHFPNNJAMAK_OFFSET))(this);
		}

		::System::Void LHHGMLELKNI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GHFHMCLBJKI_LHHGMLELKNI_OFFSET))(this, a1);
		}

		::System::UInt32 HADLEOMNCJC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFHMCLBJKI_HADLEOMNCJC_OFFSET))(this);
		}

		::System::Void MKBAHHJODPG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GHFHMCLBJKI_MKBAHHJODPG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GHFHMCLBJKI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GHFHMCLBJKI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHFHMCLBJKI*))((::PBYTE)hIl2Cpp + GHFHMCLBJKI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFHMCLBJKI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFHMCLBJKI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GHFHMCLBJKI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFHMCLBJKI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GHFHMCLBJKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHFHMCLBJKI*))((::PBYTE)hIl2Cpp + GHFHMCLBJKI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GHFHMCLBJKI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
