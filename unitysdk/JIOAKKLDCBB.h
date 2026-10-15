#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GEGKPEHKGCB;
class JIOAKKLDCBB;
class PKPICFPDHEO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JIOAKKLDCBB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E754550)
#define JIOAKKLDCBB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E754A30)
#define JIOAKKLDCBB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E754080)
#define JIOAKKLDCBB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E753F90)
#define JIOAKKLDCBB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E753F50)
#define JIOAKKLDCBB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E754130)
#define JIOAKKLDCBB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E754100)
#define JIOAKKLDCBB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E7540D0)
#define JIOAKKLDCBB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E754310)
#define JIOAKKLDCBB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E753F10)
#define JIOAKKLDCBB_KNAPCHCBNKH_OFFSET UNITYSDK_OFFSET(0x1E7540F0)
#define JIOAKKLDCBB_LCKKGPFEKHM_OFFSET UNITYSDK_OFFSET(0x1E7540B0)
#define JIOAKKLDCBB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7547E0)
#define JIOAKKLDCBB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7546B0)
#define JIOAKKLDCBB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E7540C0)
#define JIOAKKLDCBB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E753F40)
#define JIOAKKLDCBB_PCMILGJDBHF_OFFSET UNITYSDK_OFFSET(0x1E7540E0)
#define JIOAKKLDCBB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E754390)
#define JIOAKKLDCBB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7543F0)

inline static constexpr unsigned int JIOAKKLDCBB_TypeDefinitionIndex = 26823;

	class JIOAKKLDCBB : public ::System::Object
	{
	public:
		::GEGKPEHKGCB* DJHECKEIEBP; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::PKPICFPDHEO*>* MDELKGNPIOF; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JIOAKKLDCBB")->GetStaticField(0x64BC0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_GAINFCCDPFB()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "JIOAKKLDCBB")->GetStaticField(0x64BC8);
		}

		// static const ::System::Object EFEMONKDOCM; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object ACACECPPJBJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIOAKKLDCBB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JIOAKKLDCBB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JIOAKKLDCBB*))((::PBYTE)hIl2Cpp + JIOAKKLDCBB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIOAKKLDCBB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JIOAKKLDCBB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIOAKKLDCBB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JIOAKKLDCBB* Clone()
		{
			return ((::JIOAKKLDCBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIOAKKLDCBB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PKPICFPDHEO*>* LCKKGPFEKHM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PKPICFPDHEO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIOAKKLDCBB_LCKKGPFEKHM_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIOAKKLDCBB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JIOAKKLDCBB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::GEGKPEHKGCB* PCMILGJDBHF()
		{
			return ((::GEGKPEHKGCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIOAKKLDCBB_PCMILGJDBHF_OFFSET))(this);
		}

		::System::Void KNAPCHCBNKH(::GEGKPEHKGCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEGKPEHKGCB*))((::PBYTE)hIl2Cpp + JIOAKKLDCBB_KNAPCHCBNKH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JIOAKKLDCBB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JIOAKKLDCBB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JIOAKKLDCBB*))((::PBYTE)hIl2Cpp + JIOAKKLDCBB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIOAKKLDCBB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIOAKKLDCBB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JIOAKKLDCBB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIOAKKLDCBB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JIOAKKLDCBB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JIOAKKLDCBB*))((::PBYTE)hIl2Cpp + JIOAKKLDCBB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JIOAKKLDCBB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
