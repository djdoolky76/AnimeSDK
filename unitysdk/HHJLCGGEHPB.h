#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPBMGIOIHEI;
class HHJLCGGEHPB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HHJLCGGEHPB_ANKKNLMEBEJ_OFFSET UNITYSDK_OFFSET(0x1E588860)
#define HHJLCGGEHPB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E588D60)
#define HHJLCGGEHPB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5891F0)
#define HHJLCGGEHPB_CEPFGPEKOJB_OFFSET UNITYSDK_OFFSET(0x1E588840)
#define HHJLCGGEHPB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E588780)
#define HHJLCGGEHPB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E588700)
#define HHJLCGGEHPB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5886F0)
#define HHJLCGGEHPB_EMHOGFKJHKC_OFFSET UNITYSDK_OFFSET(0x1E588880)
#define HHJLCGGEHPB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5889D0)
#define HHJLCGGEHPB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5888A0)
#define HHJLCGGEHPB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E588B60)
#define HHJLCGGEHPB_HHPCILPMIIM_OFFSET UNITYSDK_OFFSET(0x1E588850)
#define HHJLCGGEHPB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E588680)
#define HHJLCGGEHPB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E588FE0)
#define HHJLCGGEHPB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E588F10)
#define HHJLCGGEHPB_NLMPHLLBJCE_OFFSET UNITYSDK_OFFSET(0x1E588870)
#define HHJLCGGEHPB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5886E0)
#define HHJLCGGEHPB_PJFNONHMHDK_OFFSET UNITYSDK_OFFSET(0x1E588890)
#define HHJLCGGEHPB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E588BC0)
#define HHJLCGGEHPB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E588C20)

inline static constexpr unsigned int HHJLCGGEHPB_TypeDefinitionIndex = 34215;

	class HHJLCGGEHPB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::EPBMGIOIHEI* FBJFFJAHLOF; // 0x18
		::System::Int64 DOHAPNBHKKI; // 0x20
		::System::UInt32 GJPIAKFKHDF; // 0x28
		static ::Google::Protobuf::MessageParser_1<::HHJLCGGEHPB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HHJLCGGEHPB*>**)UnitySDK::FromName("", "HHJLCGGEHPB")->GetStaticField(0x39CB0);
		}

		// static const ::System::Object CCHLEBKAAIH; // 0x0
		// static const ::System::Object MCMIMDMLHOP; // 0x0
		// static const ::System::Object IBNKDOBKENK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJLCGGEHPB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HHJLCGGEHPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHJLCGGEHPB*))((::PBYTE)hIl2Cpp + HHJLCGGEHPB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHJLCGGEHPB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HHJLCGGEHPB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HHJLCGGEHPB*>*(*)())((::PBYTE)hIl2Cpp + HHJLCGGEHPB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJLCGGEHPB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HHJLCGGEHPB* Clone()
		{
			return ((::HHJLCGGEHPB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJLCGGEHPB_CLONE_OFFSET))(this);
		}

		::EPBMGIOIHEI* CEPFGPEKOJB()
		{
			return ((::EPBMGIOIHEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJLCGGEHPB_CEPFGPEKOJB_OFFSET))(this);
		}

		::System::Void HHPCILPMIIM(::EPBMGIOIHEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPBMGIOIHEI*))((::PBYTE)hIl2Cpp + HHJLCGGEHPB_HHPCILPMIIM_OFFSET))(this, a1);
		}

		::System::Int64 ANKKNLMEBEJ()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJLCGGEHPB_ANKKNLMEBEJ_OFFSET))(this);
		}

		::System::Void NLMPHLLBJCE(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + HHJLCGGEHPB_NLMPHLLBJCE_OFFSET))(this, a1);
		}

		::System::UInt32 EMHOGFKJHKC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJLCGGEHPB_EMHOGFKJHKC_OFFSET))(this);
		}

		::System::Void PJFNONHMHDK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HHJLCGGEHPB_PJFNONHMHDK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HHJLCGGEHPB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HHJLCGGEHPB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HHJLCGGEHPB*))((::PBYTE)hIl2Cpp + HHJLCGGEHPB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJLCGGEHPB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJLCGGEHPB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HHJLCGGEHPB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJLCGGEHPB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HHJLCGGEHPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHJLCGGEHPB*))((::PBYTE)hIl2Cpp + HHJLCGGEHPB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HHJLCGGEHPB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
