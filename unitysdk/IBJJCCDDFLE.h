#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJEKEGMEHLK;
class IBJJCCDDFLE;
class MANINNKMFHG;
class OFGJFLCBBJP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IBJJCCDDFLE_ALHMOJMJOKN_OFFSET UNITYSDK_OFFSET(0x203AFC00)
#define IBJJCCDDFLE_CAEHAPGJBIP_OFFSET UNITYSDK_OFFSET(0x203AFBF0)
#define IBJJCCDDFLE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x203B0410)
#define IBJJCCDDFLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x203B07C0)
#define IBJJCCDDFLE_CLONE_OFFSET UNITYSDK_OFFSET(0x203AFBC0)
#define IBJJCCDDFLE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x203AFAD0)
#define IBJJCCDDFLE_CTOR_OFFSET UNITYSDK_OFFSET(0x203AFAC0)
#define IBJJCCDDFLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x203AFE20)
#define IBJJCCDDFLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x203AFC70)
#define IBJJCCDDFLE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x203AFC20)
#define IBJJCCDDFLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x203B0100)
#define IBJJCCDDFLE_GKFFMPPKDFK_OFFSET UNITYSDK_OFFSET(0x203AFC40)
#define IBJJCCDDFLE_GLPCHDFCIJF_OFFSET UNITYSDK_OFFSET(0x203AFC50)
#define IBJJCCDDFLE_IKHJKFLOFKI_OFFSET UNITYSDK_OFFSET(0x203AFC60)
#define IBJJCCDDFLE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x203AFA80)
#define IBJJCCDDFLE_LABFPFOGLCH_OFFSET UNITYSDK_OFFSET(0x203AFC30)
#define IBJJCCDDFLE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x203B0680)
#define IBJJCCDDFLE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x203B0550)
#define IBJJCCDDFLE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x203AFC10)
#define IBJJCCDDFLE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x203AFAB0)
#define IBJJCCDDFLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x203B0220)
#define IBJJCCDDFLE_WRITETO_OFFSET UNITYSDK_OFFSET(0x203B0280)

inline static constexpr unsigned int IBJJCCDDFLE_TypeDefinitionIndex = 27888;

	class IBJJCCDDFLE : public ::System::Object
	{
	public:
		::DJEKEGMEHLK* JEFEMOPFJOP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::MANINNKMFHG* FGOINBLCEJK; // 0x20
		::OFGJFLCBBJP* HEAIBCGKEDP; // 0x28
		::System::UInt32 NAEACGPKNNH; // 0x30
		static ::Google::Protobuf::MessageParser_1<::IBJJCCDDFLE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IBJJCCDDFLE*>**)UnitySDK::FromName("", "IBJJCCDDFLE")->GetStaticField(0x449A0);
		}

		// static const ::System::Object DJMNEFOAEEE; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object GKIFAMHBIHJ; // 0x0
		// static const ::System::Object PIDJIHFNOKO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBJJCCDDFLE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IBJJCCDDFLE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBJJCCDDFLE*))((::PBYTE)hIl2Cpp + IBJJCCDDFLE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBJJCCDDFLE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IBJJCCDDFLE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IBJJCCDDFLE*>*(*)())((::PBYTE)hIl2Cpp + IBJJCCDDFLE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBJJCCDDFLE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IBJJCCDDFLE* Clone()
		{
			return ((::IBJJCCDDFLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBJJCCDDFLE_CLONE_OFFSET))(this);
		}

		::MANINNKMFHG* CAEHAPGJBIP()
		{
			return ((::MANINNKMFHG*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBJJCCDDFLE_CAEHAPGJBIP_OFFSET))(this);
		}

		::System::Void ALHMOJMJOKN(::MANINNKMFHG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MANINNKMFHG*))((::PBYTE)hIl2Cpp + IBJJCCDDFLE_ALHMOJMJOKN_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBJJCCDDFLE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IBJJCCDDFLE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::OFGJFLCBBJP* LABFPFOGLCH()
		{
			return ((::OFGJFLCBBJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBJJCCDDFLE_LABFPFOGLCH_OFFSET))(this);
		}

		::System::Void GKFFMPPKDFK(::OFGJFLCBBJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFGJFLCBBJP*))((::PBYTE)hIl2Cpp + IBJJCCDDFLE_GKFFMPPKDFK_OFFSET))(this, a1);
		}

		::DJEKEGMEHLK* GLPCHDFCIJF()
		{
			return ((::DJEKEGMEHLK*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBJJCCDDFLE_GLPCHDFCIJF_OFFSET))(this);
		}

		::System::Void IKHJKFLOFKI(::DJEKEGMEHLK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DJEKEGMEHLK*))((::PBYTE)hIl2Cpp + IBJJCCDDFLE_IKHJKFLOFKI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IBJJCCDDFLE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IBJJCCDDFLE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IBJJCCDDFLE*))((::PBYTE)hIl2Cpp + IBJJCCDDFLE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBJJCCDDFLE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBJJCCDDFLE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IBJJCCDDFLE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBJJCCDDFLE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IBJJCCDDFLE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBJJCCDDFLE*))((::PBYTE)hIl2Cpp + IBJJCCDDFLE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IBJJCCDDFLE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
