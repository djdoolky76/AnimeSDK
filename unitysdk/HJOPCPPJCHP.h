#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJEKEGMEHLK;
class HJOPCPPJCHP;
class MANINNKMFHG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HJOPCPPJCHP_ALHMOJMJOKN_OFFSET UNITYSDK_OFFSET(0x1E57EF00)
#define HJOPCPPJCHP_CAEHAPGJBIP_OFFSET UNITYSDK_OFFSET(0x1E57EEF0)
#define HJOPCPPJCHP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E57F5C0)
#define HJOPCPPJCHP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E57F970)
#define HJOPCPPJCHP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E57EE30)
#define HJOPCPPJCHP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E57EDA0)
#define HJOPCPPJCHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E57ED90)
#define HJOPCPPJCHP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E57F160)
#define HJOPCPPJCHP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E57EF30)
#define HJOPCPPJCHP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E57EEE0)
#define HJOPCPPJCHP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E57F390)
#define HJOPCPPJCHP_GLPCHDFCIJF_OFFSET UNITYSDK_OFFSET(0x1E57EF10)
#define HJOPCPPJCHP_IKHJKFLOFKI_OFFSET UNITYSDK_OFFSET(0x1E57EF20)
#define HJOPCPPJCHP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E57ED50)
#define HJOPCPPJCHP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E57F7A0)
#define HJOPCPPJCHP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E57F6C0)
#define HJOPCPPJCHP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E57EED0)
#define HJOPCPPJCHP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E57ED80)
#define HJOPCPPJCHP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E57F420)
#define HJOPCPPJCHP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E57F480)

inline static constexpr unsigned int HJOPCPPJCHP_TypeDefinitionIndex = 27341;

	class HJOPCPPJCHP : public ::System::Object
	{
	public:
		::DJEKEGMEHLK* JEFEMOPFJOP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::MANINNKMFHG* FGOINBLCEJK; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser_1<::HJOPCPPJCHP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HJOPCPPJCHP*>**)UnitySDK::FromName("", "HJOPCPPJCHP")->GetStaticField(0x36510);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object DJMNEFOAEEE; // 0x0
		// static const ::System::Object PIDJIHFNOKO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJOPCPPJCHP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HJOPCPPJCHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJOPCPPJCHP*))((::PBYTE)hIl2Cpp + HJOPCPPJCHP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJOPCPPJCHP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HJOPCPPJCHP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HJOPCPPJCHP*>*(*)())((::PBYTE)hIl2Cpp + HJOPCPPJCHP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJOPCPPJCHP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HJOPCPPJCHP* Clone()
		{
			return ((::HJOPCPPJCHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJOPCPPJCHP_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJOPCPPJCHP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HJOPCPPJCHP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::MANINNKMFHG* CAEHAPGJBIP()
		{
			return ((::MANINNKMFHG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJOPCPPJCHP_CAEHAPGJBIP_OFFSET))(this);
		}

		::System::Void ALHMOJMJOKN(::MANINNKMFHG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MANINNKMFHG*))((::PBYTE)hIl2Cpp + HJOPCPPJCHP_ALHMOJMJOKN_OFFSET))(this, a1);
		}

		::DJEKEGMEHLK* GLPCHDFCIJF()
		{
			return ((::DJEKEGMEHLK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJOPCPPJCHP_GLPCHDFCIJF_OFFSET))(this);
		}

		::System::Void IKHJKFLOFKI(::DJEKEGMEHLK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DJEKEGMEHLK*))((::PBYTE)hIl2Cpp + HJOPCPPJCHP_IKHJKFLOFKI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HJOPCPPJCHP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HJOPCPPJCHP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HJOPCPPJCHP*))((::PBYTE)hIl2Cpp + HJOPCPPJCHP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJOPCPPJCHP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJOPCPPJCHP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HJOPCPPJCHP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJOPCPPJCHP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HJOPCPPJCHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJOPCPPJCHP*))((::PBYTE)hIl2Cpp + HJOPCPPJCHP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HJOPCPPJCHP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
