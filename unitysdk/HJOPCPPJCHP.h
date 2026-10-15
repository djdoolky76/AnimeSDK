#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJEKEGMEHLK;
class HJOPCPPJCHP;
class MANINNKMFHG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HJOPCPPJCHP_ALHMOJMJOKN_OFFSET UNITYSDK_OFFSET(0x1E5AC4D0)
#define HJOPCPPJCHP_CAEHAPGJBIP_OFFSET UNITYSDK_OFFSET(0x1E5AC4C0)
#define HJOPCPPJCHP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5ACB90)
#define HJOPCPPJCHP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5ACF40)
#define HJOPCPPJCHP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5AC400)
#define HJOPCPPJCHP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5AC370)
#define HJOPCPPJCHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5AC360)
#define HJOPCPPJCHP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5AC730)
#define HJOPCPPJCHP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5AC500)
#define HJOPCPPJCHP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E5AC4B0)
#define HJOPCPPJCHP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5AC960)
#define HJOPCPPJCHP_GLPCHDFCIJF_OFFSET UNITYSDK_OFFSET(0x1E5AC4E0)
#define HJOPCPPJCHP_IKHJKFLOFKI_OFFSET UNITYSDK_OFFSET(0x1E5AC4F0)
#define HJOPCPPJCHP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5AC320)
#define HJOPCPPJCHP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5ACD70)
#define HJOPCPPJCHP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5ACC90)
#define HJOPCPPJCHP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E5AC4A0)
#define HJOPCPPJCHP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5AC350)
#define HJOPCPPJCHP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5AC9F0)
#define HJOPCPPJCHP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5ACA50)

inline static constexpr unsigned int HJOPCPPJCHP_TypeDefinitionIndex = 27341;

	class HJOPCPPJCHP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::MANINNKMFHG* FGOINBLCEJK; // 0x18
		::DJEKEGMEHLK* JEFEMOPFJOP; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HJOPCPPJCHP")->GetStaticField(0x44280);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HJOPCPPJCHP_JJGHOBBFNJD_OFFSET))();
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
