#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICOCIJEBKKD;
class NLJOCMODADF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NLJOCMODADF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F055E70)
#define NLJOCMODADF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F056240)
#define NLJOCMODADF_CLONE_OFFSET UNITYSDK_OFFSET(0x1F0559C0)
#define NLJOCMODADF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F0558F0)
#define NLJOCMODADF_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0558A0)
#define NLJOCMODADF_EGMMDBOJGFO_OFFSET UNITYSDK_OFFSET(0x1F055A10)
#define NLJOCMODADF_EPJHDKENEPH_OFFSET UNITYSDK_OFFSET(0x1F0559F0)
#define NLJOCMODADF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F055A90)
#define NLJOCMODADF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F055A60)
#define NLJOCMODADF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F055A50)
#define NLJOCMODADF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F055BD0)
#define NLJOCMODADF_IAKOHDKKOAI_OFFSET UNITYSDK_OFFSET(0x1F055A20)
#define NLJOCMODADF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F055860)
#define NLJOCMODADF_KHNDBMNCCIC_OFFSET UNITYSDK_OFFSET(0x1F055A00)
#define NLJOCMODADF_LMGOICEFBPN_OFFSET UNITYSDK_OFFSET(0x1F055A30)
#define NLJOCMODADF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F056140)
#define NLJOCMODADF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F056080)
#define NLJOCMODADF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F055A40)
#define NLJOCMODADF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F055890)
#define NLJOCMODADF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F055C50)
#define NLJOCMODADF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F055CB0)

inline static constexpr unsigned int NLJOCMODADF_TypeDefinitionIndex = 28335;

	class NLJOCMODADF : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::ICOCIJEBKKD*>* GPLMJHDBLOL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 GFIEPBFOMON; // 0x20
		::System::UInt32 GJFBJLMPMKH; // 0x24
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser_1<::NLJOCMODADF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NLJOCMODADF*>**)UnitySDK::FromName("", "NLJOCMODADF")->GetStaticField(0x70F50);
		}

		static ::Google::Protobuf::FieldCodec_1<::ICOCIJEBKKD*>** StaticGet_HLFJBICCBCA()
		{
			return (::Google::Protobuf::FieldCodec_1<::ICOCIJEBKKD*>**)UnitySDK::FromName("", "NLJOCMODADF")->GetStaticField(0x70F58);
		}

		// static const ::System::Object INOKIDDIBCN; // 0x0
		// static const ::System::Object EDANAGLHOBB; // 0x0
		// static const ::System::Object ABBONIGHCMB; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLJOCMODADF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NLJOCMODADF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLJOCMODADF*))((::PBYTE)hIl2Cpp + NLJOCMODADF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLJOCMODADF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NLJOCMODADF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NLJOCMODADF*>*(*)())((::PBYTE)hIl2Cpp + NLJOCMODADF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLJOCMODADF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NLJOCMODADF* Clone()
		{
			return ((::NLJOCMODADF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLJOCMODADF_CLONE_OFFSET))(this);
		}

		::System::UInt32 EPJHDKENEPH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLJOCMODADF_EPJHDKENEPH_OFFSET))(this);
		}

		::System::Void KHNDBMNCCIC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NLJOCMODADF_KHNDBMNCCIC_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::ICOCIJEBKKD*>* EGMMDBOJGFO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::ICOCIJEBKKD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLJOCMODADF_EGMMDBOJGFO_OFFSET))(this);
		}

		::System::UInt32 IAKOHDKKOAI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLJOCMODADF_IAKOHDKKOAI_OFFSET))(this);
		}

		::System::Void LMGOICEFBPN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NLJOCMODADF_LMGOICEFBPN_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLJOCMODADF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NLJOCMODADF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NLJOCMODADF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NLJOCMODADF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NLJOCMODADF*))((::PBYTE)hIl2Cpp + NLJOCMODADF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLJOCMODADF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLJOCMODADF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NLJOCMODADF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLJOCMODADF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NLJOCMODADF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLJOCMODADF*))((::PBYTE)hIl2Cpp + NLJOCMODADF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NLJOCMODADF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
