#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LEGNLMENMJK_AMAPPBEOMLL.h"
#include "unitysdk/System/Object.h"
class GKNOCNDPAJA;
class LDNFIICMCHA;
class LEGNLMENMJK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LEGNLMENMJK_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1E92DF70)
#define LEGNLMENMJK_AGFANMDJCBJ_OFFSET UNITYSDK_OFFSET(0x1E92DFA0)
#define LEGNLMENMJK_BILLAKGDMML_OFFSET UNITYSDK_OFFSET(0x1E92DEA0)
#define LEGNLMENMJK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E92E620)
#define LEGNLMENMJK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E92EE30)
#define LEGNLMENMJK_CJINACMDCFC_OFFSET UNITYSDK_OFFSET(0x1E92DFB0)
#define LEGNLMENMJK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E92DF40)
#define LEGNLMENMJK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E92DCB0)
#define LEGNLMENMJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E92DCA0)
#define LEGNLMENMJK_EBLLJDJPCIF_OFFSET UNITYSDK_OFFSET(0x1E92DFC0)
#define LEGNLMENMJK_ENIJDMAJKCO_OFFSET UNITYSDK_OFFSET(0x1E92DF90)
#define LEGNLMENMJK_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1E92DF80)
#define LEGNLMENMJK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E92E000)
#define LEGNLMENMJK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E92DFD0)
#define LEGNLMENMJK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E92E290)
#define LEGNLMENMJK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E92DC60)
#define LEGNLMENMJK_KKKHDMGCHGO_OFFSET UNITYSDK_OFFSET(0x1E92DE40)
#define LEGNLMENMJK_LFAJDEOCJLB_OFFSET UNITYSDK_OFFSET(0x1E92DEC0)
#define LEGNLMENMJK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E92EBB0)
#define LEGNLMENMJK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E92E850)
#define LEGNLMENMJK_NJHFEHODAHM_OFFSET UNITYSDK_OFFSET(0x1E92DF20)
#define LEGNLMENMJK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E92DC90)
#define LEGNLMENMJK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E92E3B0)
#define LEGNLMENMJK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E92E410)

	class LEGNLMENMJK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Object* LDNCNPLNEKK; // 0x18
		::System::UInt32 KBIKDALMALD; // 0x20
		::LEGNLMENMJK_AMAPPBEOMLL PMHCIIFFPDJ; // 0x24
		::System::UInt32 NPFBAFODCBI; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LEGNLMENMJK")->GetStaticField(0x38260);
		}

		// static const ::System::Object JJDOFLLPDJE; // 0x0
		// static const ::System::Object BCMOOHPKBDG; // 0x0
		// static const ::System::Object CENJOIOOFCH; // 0x0
		// static const ::System::Object NFFIDAJOLEH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGNLMENMJK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LEGNLMENMJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LEGNLMENMJK*))((::PBYTE)hIl2Cpp + LEGNLMENMJK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEGNLMENMJK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LEGNLMENMJK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGNLMENMJK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LEGNLMENMJK* Clone()
		{
			return ((::LEGNLMENMJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGNLMENMJK_CLONE_OFFSET))(this);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGNLMENMJK_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LEGNLMENMJK_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::UInt32 ENIJDMAJKCO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGNLMENMJK_ENIJDMAJKCO_OFFSET))(this);
		}

		::System::Void AGFANMDJCBJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LEGNLMENMJK_AGFANMDJCBJ_OFFSET))(this, a1);
		}

		::LDNFIICMCHA* KKKHDMGCHGO()
		{
			return ((::LDNFIICMCHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGNLMENMJK_KKKHDMGCHGO_OFFSET))(this);
		}

		::System::Void BILLAKGDMML(::LDNFIICMCHA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDNFIICMCHA*))((::PBYTE)hIl2Cpp + LEGNLMENMJK_BILLAKGDMML_OFFSET))(this, a1);
		}

		::GKNOCNDPAJA* LFAJDEOCJLB()
		{
			return ((::GKNOCNDPAJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGNLMENMJK_LFAJDEOCJLB_OFFSET))(this);
		}

		::System::Void NJHFEHODAHM(::GKNOCNDPAJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKNOCNDPAJA*))((::PBYTE)hIl2Cpp + LEGNLMENMJK_NJHFEHODAHM_OFFSET))(this, a1);
		}

		::LEGNLMENMJK_AMAPPBEOMLL CJINACMDCFC()
		{
			return ((::LEGNLMENMJK_AMAPPBEOMLL(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGNLMENMJK_CJINACMDCFC_OFFSET))(this);
		}

		::System::Void EBLLJDJPCIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGNLMENMJK_EBLLJDJPCIF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LEGNLMENMJK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LEGNLMENMJK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LEGNLMENMJK*))((::PBYTE)hIl2Cpp + LEGNLMENMJK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGNLMENMJK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGNLMENMJK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LEGNLMENMJK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGNLMENMJK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LEGNLMENMJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LEGNLMENMJK*))((::PBYTE)hIl2Cpp + LEGNLMENMJK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LEGNLMENMJK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
