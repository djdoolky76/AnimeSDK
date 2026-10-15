#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLHIJOAKJCE;
class GIDPDEJAAED;
class HKGJBAGOHFH;
class JEFCEGFBOAF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GIDPDEJAAED_AEOHKCLEPEF_OFFSET UNITYSDK_OFFSET(0x1E493FF0)
#define GIDPDEJAAED_AIHNILNPAJG_OFFSET UNITYSDK_OFFSET(0x1E494030)
#define GIDPDEJAAED_APDPOPMBENN_OFFSET UNITYSDK_OFFSET(0x1E494010)
#define GIDPDEJAAED_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E494790)
#define GIDPDEJAAED_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E494D60)
#define GIDPDEJAAED_CLONE_OFFSET UNITYSDK_OFFSET(0x1E493F80)
#define GIDPDEJAAED_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E493EC0)
#define GIDPDEJAAED_CTOR_OFFSET UNITYSDK_OFFSET(0x1E493EB0)
#define GIDPDEJAAED_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E494210)
#define GIDPDEJAAED_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E494050)
#define GIDPDEJAAED_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E493FE0)
#define GIDPDEJAAED_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E494450)
#define GIDPDEJAAED_GFKCJJBNCMM_OFFSET UNITYSDK_OFFSET(0x1E494020)
#define GIDPDEJAAED_HKHAFJMJDBD_OFFSET UNITYSDK_OFFSET(0x1E493FC0)
#define GIDPDEJAAED_JHFGNNNGPNP_OFFSET UNITYSDK_OFFSET(0x1E494000)
#define GIDPDEJAAED_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E493E70)
#define GIDPDEJAAED_LFIDHCHMELF_OFFSET UNITYSDK_OFFSET(0x1E494040)
#define GIDPDEJAAED_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E494B60)
#define GIDPDEJAAED_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E494950)
#define GIDPDEJAAED_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E493FD0)
#define GIDPDEJAAED_ONEJHIAAJLI_OFFSET UNITYSDK_OFFSET(0x1E493FB0)
#define GIDPDEJAAED_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E493EA0)
#define GIDPDEJAAED_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E494540)
#define GIDPDEJAAED_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4945A0)

	class GIDPDEJAAED : public ::System::Object
	{
	public:
		::JEFCEGFBOAF* FOIHNMFBHDG; // 0x10
		::HKGJBAGOHFH* AOOFBBNDDKM; // 0x18
		::CLHIJOAKJCE* FPCHABCAHCI; // 0x20
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x28
		::System::UInt32 NAEACGPKNNH; // 0x30
		::System::UInt32 LAPNJDIJOOD; // 0x34
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GIDPDEJAAED")->GetStaticField(0x18FF0);
		}

		// static const ::System::Object LNGMAHHIINN; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object KLEAJOLGLBA; // 0x0
		// static const ::System::Object JFFOEFDKFFI; // 0x0
		// static const ::System::Object LNACFLNILGM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDPDEJAAED_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GIDPDEJAAED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIDPDEJAAED*))((::PBYTE)hIl2Cpp + GIDPDEJAAED_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIDPDEJAAED_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GIDPDEJAAED_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDPDEJAAED_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GIDPDEJAAED* Clone()
		{
			return ((::GIDPDEJAAED*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDPDEJAAED_CLONE_OFFSET))(this);
		}

		::JEFCEGFBOAF* ONEJHIAAJLI()
		{
			return ((::JEFCEGFBOAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDPDEJAAED_ONEJHIAAJLI_OFFSET))(this);
		}

		::System::Void HKHAFJMJDBD(::JEFCEGFBOAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEFCEGFBOAF*))((::PBYTE)hIl2Cpp + GIDPDEJAAED_HKHAFJMJDBD_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDPDEJAAED_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GIDPDEJAAED_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::HKGJBAGOHFH* AEOHKCLEPEF()
		{
			return ((::HKGJBAGOHFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDPDEJAAED_AEOHKCLEPEF_OFFSET))(this);
		}

		::System::Void JHFGNNNGPNP(::HKGJBAGOHFH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKGJBAGOHFH*))((::PBYTE)hIl2Cpp + GIDPDEJAAED_JHFGNNNGPNP_OFFSET))(this, a1);
		}

		::System::UInt32 APDPOPMBENN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDPDEJAAED_APDPOPMBENN_OFFSET))(this);
		}

		::System::Void GFKCJJBNCMM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GIDPDEJAAED_GFKCJJBNCMM_OFFSET))(this, a1);
		}

		::CLHIJOAKJCE* AIHNILNPAJG()
		{
			return ((::CLHIJOAKJCE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDPDEJAAED_AIHNILNPAJG_OFFSET))(this);
		}

		::System::Void LFIDHCHMELF(::CLHIJOAKJCE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLHIJOAKJCE*))((::PBYTE)hIl2Cpp + GIDPDEJAAED_LFIDHCHMELF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GIDPDEJAAED_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GIDPDEJAAED* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GIDPDEJAAED*))((::PBYTE)hIl2Cpp + GIDPDEJAAED_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDPDEJAAED_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDPDEJAAED_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GIDPDEJAAED_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDPDEJAAED_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GIDPDEJAAED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIDPDEJAAED*))((::PBYTE)hIl2Cpp + GIDPDEJAAED_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GIDPDEJAAED_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
