#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EGJJHFIPCNB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EGJJHFIPCNB_BPOLAGJMNKK_OFFSET UNITYSDK_OFFSET(0x1F578070)
#define EGJJHFIPCNB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F5783A0)
#define EGJJHFIPCNB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F578670)
#define EGJJHFIPCNB_CLONE_OFFSET UNITYSDK_OFFSET(0x1F577FF0)
#define EGJJHFIPCNB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F577FC0)
#define EGJJHFIPCNB_CTOR_OFFSET UNITYSDK_OFFSET(0x1F577FB0)
#define EGJJHFIPCNB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F578160)
#define EGJJHFIPCNB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F578080)
#define EGJJHFIPCNB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F578050)
#define EGJJHFIPCNB_GEPNBJGOEDM_OFFSET UNITYSDK_OFFSET(0x1F578060)
#define EGJJHFIPCNB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F578230)
#define EGJJHFIPCNB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F577F70)
#define EGJJHFIPCNB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F5784F0)
#define EGJJHFIPCNB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F5784B0)
#define EGJJHFIPCNB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F578040)
#define EGJJHFIPCNB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F577FA0)
#define EGJJHFIPCNB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F578260)
#define EGJJHFIPCNB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F5782C0)

inline static constexpr unsigned int EGJJHFIPCNB_TypeDefinitionIndex = 31593;

	class EGJJHFIPCNB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 DGODIBCLHGN; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::EGJJHFIPCNB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EGJJHFIPCNB*>**)UnitySDK::FromName("", "EGJJHFIPCNB")->GetStaticField(0x533B0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object OJPKFLDKPEB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGJJHFIPCNB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EGJJHFIPCNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EGJJHFIPCNB*))((::PBYTE)hIl2Cpp + EGJJHFIPCNB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGJJHFIPCNB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EGJJHFIPCNB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EGJJHFIPCNB*>*(*)())((::PBYTE)hIl2Cpp + EGJJHFIPCNB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGJJHFIPCNB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EGJJHFIPCNB* Clone()
		{
			return ((::EGJJHFIPCNB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGJJHFIPCNB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGJJHFIPCNB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EGJJHFIPCNB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 GEPNBJGOEDM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGJJHFIPCNB_GEPNBJGOEDM_OFFSET))(this);
		}

		::System::Void BPOLAGJMNKK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EGJJHFIPCNB_BPOLAGJMNKK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EGJJHFIPCNB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EGJJHFIPCNB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EGJJHFIPCNB*))((::PBYTE)hIl2Cpp + EGJJHFIPCNB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGJJHFIPCNB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGJJHFIPCNB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EGJJHFIPCNB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGJJHFIPCNB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EGJJHFIPCNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EGJJHFIPCNB*))((::PBYTE)hIl2Cpp + EGJJHFIPCNB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EGJJHFIPCNB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
