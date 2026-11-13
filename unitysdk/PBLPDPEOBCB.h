#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICOCIJEBKKD;
class PBLPDPEOBCB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PBLPDPEOBCB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FBED050)
#define PBLPDPEOBCB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBED390)
#define PBLPDPEOBCB_CLONE_OFFSET UNITYSDK_OFFSET(0x1FBECB80)
#define PBLPDPEOBCB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FBECA50)
#define PBLPDPEOBCB_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBEC9C0)
#define PBLPDPEOBCB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FBECC20)
#define PBLPDPEOBCB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FBECBF0)
#define PBLPDPEOBCB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FBECD70)
#define PBLPDPEOBCB_INNFFKDDBMJ_OFFSET UNITYSDK_OFFSET(0x1FBECBE0)
#define PBLPDPEOBCB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FBEC980)
#define PBLPDPEOBCB_KFIDJDCNAOI_OFFSET UNITYSDK_OFFSET(0x1FBECBD0)
#define PBLPDPEOBCB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FBED240)
#define PBLPDPEOBCB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FBED180)
#define PBLPDPEOBCB_NOOFNADIEEB_OFFSET UNITYSDK_OFFSET(0x1FBECBC0)
#define PBLPDPEOBCB_OCPPLNHOBHP_OFFSET UNITYSDK_OFFSET(0x1FBECBB0)
#define PBLPDPEOBCB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FBEC9B0)
#define PBLPDPEOBCB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FBECEB0)
#define PBLPDPEOBCB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FBECF10)

inline static constexpr unsigned int PBLPDPEOBCB_TypeDefinitionIndex = 28341;

	class PBLPDPEOBCB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::ICOCIJEBKKD*>* OAEDOFHAIGJ; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DODBNKHAFMM; // 0x20
		::System::UInt32 NFKHJFOAKNJ; // 0x28
		static ::Google::Protobuf::MessageParser_1<::PBLPDPEOBCB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PBLPDPEOBCB*>**)UnitySDK::FromName("", "PBLPDPEOBCB")->GetStaticField(0x2D8E0);
		}

		static ::Google::Protobuf::FieldCodec_1<::ICOCIJEBKKD*>** StaticGet_KCFLBGNBDBC()
		{
			return (::Google::Protobuf::FieldCodec_1<::ICOCIJEBKKD*>**)UnitySDK::FromName("", "PBLPDPEOBCB")->GetStaticField(0x2D8E8);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_LEIKKCEOABO()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "PBLPDPEOBCB")->GetStaticField(0x2D8F0);
		}

		// static const ::System::Object KEOPDAGCDCG; // 0x0
		// static const ::System::Object IOPOFMCIOML; // 0x0
		// static const ::System::Object PGMFIENKIAC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBLPDPEOBCB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PBLPDPEOBCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBLPDPEOBCB*))((::PBYTE)hIl2Cpp + PBLPDPEOBCB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBLPDPEOBCB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PBLPDPEOBCB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PBLPDPEOBCB*>*(*)())((::PBYTE)hIl2Cpp + PBLPDPEOBCB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBLPDPEOBCB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PBLPDPEOBCB* Clone()
		{
			return ((::PBLPDPEOBCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBLPDPEOBCB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OCPPLNHOBHP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBLPDPEOBCB_OCPPLNHOBHP_OFFSET))(this);
		}

		::System::Void NOOFNADIEEB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PBLPDPEOBCB_NOOFNADIEEB_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KFIDJDCNAOI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBLPDPEOBCB_KFIDJDCNAOI_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::ICOCIJEBKKD*>* INNFFKDDBMJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::ICOCIJEBKKD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBLPDPEOBCB_INNFFKDDBMJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PBLPDPEOBCB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PBLPDPEOBCB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PBLPDPEOBCB*))((::PBYTE)hIl2Cpp + PBLPDPEOBCB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBLPDPEOBCB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBLPDPEOBCB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PBLPDPEOBCB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBLPDPEOBCB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PBLPDPEOBCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBLPDPEOBCB*))((::PBYTE)hIl2Cpp + PBLPDPEOBCB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PBLPDPEOBCB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
