#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LEGNLMENMJK_AMAPPBEOMLL.h"
#include "unitysdk/System/Object.h"
class GKNOCNDPAJA;
class LDNFIICMCHA;
class LEGNLMENMJK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LEGNLMENMJK_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1E900930)
#define LEGNLMENMJK_AGFANMDJCBJ_OFFSET UNITYSDK_OFFSET(0x1E900960)
#define LEGNLMENMJK_BILLAKGDMML_OFFSET UNITYSDK_OFFSET(0x1E900860)
#define LEGNLMENMJK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E900FE0)
#define LEGNLMENMJK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9017F0)
#define LEGNLMENMJK_CJINACMDCFC_OFFSET UNITYSDK_OFFSET(0x1E900970)
#define LEGNLMENMJK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E900900)
#define LEGNLMENMJK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E900670)
#define LEGNLMENMJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E900660)
#define LEGNLMENMJK_EBLLJDJPCIF_OFFSET UNITYSDK_OFFSET(0x1E900980)
#define LEGNLMENMJK_ENIJDMAJKCO_OFFSET UNITYSDK_OFFSET(0x1E900950)
#define LEGNLMENMJK_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1E900940)
#define LEGNLMENMJK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9009C0)
#define LEGNLMENMJK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E900990)
#define LEGNLMENMJK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E900C50)
#define LEGNLMENMJK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E900620)
#define LEGNLMENMJK_KKKHDMGCHGO_OFFSET UNITYSDK_OFFSET(0x1E900800)
#define LEGNLMENMJK_LFAJDEOCJLB_OFFSET UNITYSDK_OFFSET(0x1E900880)
#define LEGNLMENMJK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E901570)
#define LEGNLMENMJK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E901210)
#define LEGNLMENMJK_NJHFEHODAHM_OFFSET UNITYSDK_OFFSET(0x1E9008E0)
#define LEGNLMENMJK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E900650)
#define LEGNLMENMJK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E900D70)
#define LEGNLMENMJK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E900DD0)

inline static constexpr unsigned int LEGNLMENMJK_TypeDefinitionIndex = 27050;

	class LEGNLMENMJK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Object* LDNCNPLNEKK; // 0x18
		::System::UInt32 NPFBAFODCBI; // 0x20
		::LEGNLMENMJK_AMAPPBEOMLL PMHCIIFFPDJ; // 0x24
		::System::UInt32 KBIKDALMALD; // 0x28
		static ::Google::Protobuf::MessageParser_1<::LEGNLMENMJK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LEGNLMENMJK*>**)UnitySDK::FromName("", "LEGNLMENMJK")->GetStaticField(0x315F0);
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

		static ::Google::Protobuf::MessageParser_1<::LEGNLMENMJK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LEGNLMENMJK*>*(*)())((::PBYTE)hIl2Cpp + LEGNLMENMJK_JJGHOBBFNJD_OFFSET))();
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
