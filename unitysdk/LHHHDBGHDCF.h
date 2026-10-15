#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLHIJOAKJCE;
class HKGJBAGOHFH;
class JEFCEGFBOAF;
class LHHHDBGHDCF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LHHHDBGHDCF_ABENPBOKIIL_OFFSET UNITYSDK_OFFSET(0x1E960BE0)
#define LHHHDBGHDCF_AEOHKCLEPEF_OFFSET UNITYSDK_OFFSET(0x1E960B90)
#define LHHHDBGHDCF_AIHNILNPAJG_OFFSET UNITYSDK_OFFSET(0x1E960BB0)
#define LHHHDBGHDCF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E961230)
#define LHHHDBGHDCF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E961840)
#define LHHHDBGHDCF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E960B60)
#define LHHHDBGHDCF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E960A90)
#define LHHHDBGHDCF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E960A80)
#define LHHHDBGHDCF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E960C80)
#define LHHHDBGHDCF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E960C50)
#define LHHHDBGHDCF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E960C00)
#define LHHHDBGHDCF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E960E50)
#define LHHHDBGHDCF_HKHAFJMJDBD_OFFSET UNITYSDK_OFFSET(0x1E960C40)
#define LHHHDBGHDCF_JFELAODBPCJ_OFFSET UNITYSDK_OFFSET(0x1E960BD0)
#define LHHHDBGHDCF_JHFGNNNGPNP_OFFSET UNITYSDK_OFFSET(0x1E960BA0)
#define LHHHDBGHDCF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E960A40)
#define LHHHDBGHDCF_KMCCAKAPMGM_OFFSET UNITYSDK_OFFSET(0x1E960C20)
#define LHHHDBGHDCF_LFIDHCHMELF_OFFSET UNITYSDK_OFFSET(0x1E960BC0)
#define LHHHDBGHDCF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E961620)
#define LHHHDBGHDCF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E961400)
#define LHHHDBGHDCF_MPBEHNEEHCD_OFFSET UNITYSDK_OFFSET(0x1E960C10)
#define LHHHDBGHDCF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E960BF0)
#define LHHHDBGHDCF_ONEJHIAAJLI_OFFSET UNITYSDK_OFFSET(0x1E960C30)
#define LHHHDBGHDCF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E960A70)
#define LHHHDBGHDCF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E960F50)
#define LHHHDBGHDCF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E960FB0)

	class LHHHDBGHDCF : public ::System::Object
	{
	public:
		::HKGJBAGOHFH* AOOFBBNDDKM; // 0x10
		::JEFCEGFBOAF* FOIHNMFBHDG; // 0x18
		::CLHIJOAKJCE* FPCHABCAHCI; // 0x20
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x28
		::System::UInt32 NAEACGPKNNH; // 0x30
		::System::Boolean LNBKKPEPFML; // 0x34
		::System::Byte _padding0[0x3];
		::System::UInt32 MCJMKGINDNL; // 0x38
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LHHHDBGHDCF")->GetStaticField(0x40F50);
		}

		// static const ::System::Object KLEAJOLGLBA; // 0x0
		// static const ::System::Object LNACFLNILGM; // 0x0
		// static const ::System::Object DNLGMMJBJGN; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object MPLGEEGOAMC; // 0x0
		// static const ::System::Object LNGMAHHIINN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHHDBGHDCF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LHHHDBGHDCF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LHHHDBGHDCF*))((::PBYTE)hIl2Cpp + LHHHDBGHDCF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHHHDBGHDCF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LHHHDBGHDCF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHHDBGHDCF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LHHHDBGHDCF* Clone()
		{
			return ((::LHHHDBGHDCF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHHDBGHDCF_CLONE_OFFSET))(this);
		}

		::HKGJBAGOHFH* AEOHKCLEPEF()
		{
			return ((::HKGJBAGOHFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHHDBGHDCF_AEOHKCLEPEF_OFFSET))(this);
		}

		::System::Void JHFGNNNGPNP(::HKGJBAGOHFH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKGJBAGOHFH*))((::PBYTE)hIl2Cpp + LHHHDBGHDCF_JHFGNNNGPNP_OFFSET))(this, a1);
		}

		::CLHIJOAKJCE* AIHNILNPAJG()
		{
			return ((::CLHIJOAKJCE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHHDBGHDCF_AIHNILNPAJG_OFFSET))(this);
		}

		::System::Void LFIDHCHMELF(::CLHIJOAKJCE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLHIJOAKJCE*))((::PBYTE)hIl2Cpp + LHHHDBGHDCF_LFIDHCHMELF_OFFSET))(this, a1);
		}

		::System::Boolean JFELAODBPCJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHHDBGHDCF_JFELAODBPCJ_OFFSET))(this);
		}

		::System::Void ABENPBOKIIL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LHHHDBGHDCF_ABENPBOKIIL_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHHDBGHDCF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LHHHDBGHDCF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 MPBEHNEEHCD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHHDBGHDCF_MPBEHNEEHCD_OFFSET))(this);
		}

		::System::Void KMCCAKAPMGM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LHHHDBGHDCF_KMCCAKAPMGM_OFFSET))(this, a1);
		}

		::JEFCEGFBOAF* ONEJHIAAJLI()
		{
			return ((::JEFCEGFBOAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHHDBGHDCF_ONEJHIAAJLI_OFFSET))(this);
		}

		::System::Void HKHAFJMJDBD(::JEFCEGFBOAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEFCEGFBOAF*))((::PBYTE)hIl2Cpp + LHHHDBGHDCF_HKHAFJMJDBD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LHHHDBGHDCF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LHHHDBGHDCF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LHHHDBGHDCF*))((::PBYTE)hIl2Cpp + LHHHDBGHDCF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHHDBGHDCF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHHDBGHDCF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LHHHDBGHDCF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHHDBGHDCF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LHHHDBGHDCF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LHHHDBGHDCF*))((::PBYTE)hIl2Cpp + LHHHDBGHDCF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LHHHDBGHDCF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
