#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEEBEKFBONM;
class GNMCIEPEBPK;
class OJHHACMHFKA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CEEBEKFBONM_AOMEEMLGOPM_OFFSET UNITYSDK_OFFSET(0x1E091100)
#define CEEBEKFBONM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0917B0)
#define CEEBEKFBONM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E091CB0)
#define CEEBEKFBONM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E090FB0)
#define CEEBEKFBONM_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E091130)
#define CEEBEKFBONM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E090EC0)
#define CEEBEKFBONM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E090EB0)
#define CEEBEKFBONM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0912B0)
#define CEEBEKFBONM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E091170)
#define CEEBEKFBONM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E091160)
#define CEEBEKFBONM_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E091140)
#define CEEBEKFBONM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E091470)
#define CEEBEKFBONM_GNJHDBGBCBL_OFFSET UNITYSDK_OFFSET(0x1E091120)
#define CEEBEKFBONM_IAGDODILOIH_OFFSET UNITYSDK_OFFSET(0x1E0910D0)
#define CEEBEKFBONM_IEIAADAJHOL_OFFSET UNITYSDK_OFFSET(0x1E091110)
#define CEEBEKFBONM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E090E70)
#define CEEBEKFBONM_KFGGOFOADLJ_OFFSET UNITYSDK_OFFSET(0x1E0910C0)
#define CEEBEKFBONM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E091B10)
#define CEEBEKFBONM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0919B0)
#define CEEBEKFBONM_MHGFPJENHIN_OFFSET UNITYSDK_OFFSET(0x1E0910F0)
#define CEEBEKFBONM_NNLEGOLBFID_OFFSET UNITYSDK_OFFSET(0x1E0910B0)
#define CEEBEKFBONM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E091150)
#define CEEBEKFBONM_PAGHNFFHKEO_OFFSET UNITYSDK_OFFSET(0x1E0910E0)
#define CEEBEKFBONM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E090EA0)
#define CEEBEKFBONM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0914D0)
#define CEEBEKFBONM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E091530)

	class CEEBEKFBONM : public ::System::Object
	{
	public:
		::GNMCIEPEBPK* JDAFJANAEBG; // 0x10
		::OJHHACMHFKA* IANPHEMCHDG; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		::System::UInt32 IIPJEKCINMD; // 0x2C
		::System::Boolean GEIKIKJPHAE; // 0x30
		::System::Byte _padding0[0x3];
		::System::UInt32 CMGCCNJPPHH; // 0x34
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CEEBEKFBONM")->GetStaticField(0x10600);
		}

		// static const ::System::Object KIMLLAFEKNN; // 0x0
		// static const ::System::Object CLMHGEKEEOH; // 0x0
		// static const ::System::Object PPJCFDNJPPP; // 0x0
		// static const ::System::Object NMCANELKJNL; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEEBEKFBONM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CEEBEKFBONM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEEBEKFBONM*))((::PBYTE)hIl2Cpp + CEEBEKFBONM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEEBEKFBONM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CEEBEKFBONM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEEBEKFBONM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CEEBEKFBONM* Clone()
		{
			return ((::CEEBEKFBONM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEEBEKFBONM_CLONE_OFFSET))(this);
		}

		::System::UInt32 NNLEGOLBFID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEEBEKFBONM_NNLEGOLBFID_OFFSET))(this);
		}

		::System::Void KFGGOFOADLJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CEEBEKFBONM_KFGGOFOADLJ_OFFSET))(this, a1);
		}

		::OJHHACMHFKA* IAGDODILOIH()
		{
			return ((::OJHHACMHFKA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEEBEKFBONM_IAGDODILOIH_OFFSET))(this);
		}

		::System::Void PAGHNFFHKEO(::OJHHACMHFKA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OJHHACMHFKA*))((::PBYTE)hIl2Cpp + CEEBEKFBONM_PAGHNFFHKEO_OFFSET))(this, a1);
		}

		::System::UInt32 MHGFPJENHIN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEEBEKFBONM_MHGFPJENHIN_OFFSET))(this);
		}

		::System::Void AOMEEMLGOPM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CEEBEKFBONM_AOMEEMLGOPM_OFFSET))(this, a1);
		}

		::System::Boolean IEIAADAJHOL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CEEBEKFBONM_IEIAADAJHOL_OFFSET))(this);
		}

		::System::Void GNJHDBGBCBL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CEEBEKFBONM_GNJHDBGBCBL_OFFSET))(this, a1);
		}

		::GNMCIEPEBPK* CPCEGCCEMIM()
		{
			return ((::GNMCIEPEBPK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEEBEKFBONM_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::GNMCIEPEBPK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNMCIEPEBPK*))((::PBYTE)hIl2Cpp + CEEBEKFBONM_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEEBEKFBONM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CEEBEKFBONM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CEEBEKFBONM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CEEBEKFBONM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CEEBEKFBONM*))((::PBYTE)hIl2Cpp + CEEBEKFBONM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEEBEKFBONM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEEBEKFBONM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CEEBEKFBONM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEEBEKFBONM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CEEBEKFBONM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEEBEKFBONM*))((::PBYTE)hIl2Cpp + CEEBEKFBONM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CEEBEKFBONM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
