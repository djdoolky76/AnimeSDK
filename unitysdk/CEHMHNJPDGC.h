#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEHMHNJPDGC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CEHMHNJPDGC_AFJGHICACON_OFFSET UNITYSDK_OFFSET(0x204CAD20)
#define CEHMHNJPDGC_BODJOHPCDJO_OFFSET UNITYSDK_OFFSET(0x204CAD10)
#define CEHMHNJPDGC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x204CB1B0)
#define CEHMHNJPDGC_CCTOR_OFFSET UNITYSDK_OFFSET(0x204CB470)
#define CEHMHNJPDGC_CLONE_OFFSET UNITYSDK_OFFSET(0x204CACA0)
#define CEHMHNJPDGC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x204CAC10)
#define CEHMHNJPDGC_CTOR_OFFSET UNITYSDK_OFFSET(0x204CABC0)
#define CEHMHNJPDGC_EMNEFBFCKDJ_OFFSET UNITYSDK_OFFSET(0x204CAD00)
#define CEHMHNJPDGC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x204CADE0)
#define CEHMHNJPDGC_EQUALS_OFFSET UNITYSDK_OFFSET(0x204CAD40)
#define CEHMHNJPDGC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x204CAEE0)
#define CEHMHNJPDGC_HLAPJJNJCLC_OFFSET UNITYSDK_OFFSET(0x204CAD30)
#define CEHMHNJPDGC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x204CAB50)
#define CEHMHNJPDGC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x204CB390)
#define CEHMHNJPDGC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x204CB330)
#define CEHMHNJPDGC_MNBHLAJGKOH_OFFSET UNITYSDK_OFFSET(0x204CACF0)
#define CEHMHNJPDGC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x204CABB0)
#define CEHMHNJPDGC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x204CAFE0)
#define CEHMHNJPDGC_WRITETO_OFFSET UNITYSDK_OFFSET(0x204CB040)

inline static constexpr unsigned int CEHMHNJPDGC_TypeDefinitionIndex = 30232;

	class CEHMHNJPDGC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HECPNLIJAFE; // 0x18
		::System::UInt32 ODCKBAEKGJG; // 0x20
		::System::UInt32 MJIMFDKFGDE; // 0x24
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FMLCOCIKNIC()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "CEHMHNJPDGC")->GetStaticField(0x62DE0);
		}

		static ::Google::Protobuf::MessageParser_1<::CEHMHNJPDGC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CEHMHNJPDGC*>**)UnitySDK::FromName("", "CEHMHNJPDGC")->GetStaticField(0x62DE8);
		}

		// static const ::System::Object MJJGNBCFCOH; // 0x0
		// static const ::System::Object BDHJLOLMAKK; // 0x0
		// static const ::System::Object HHILPMIFNPK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHMHNJPDGC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CEHMHNJPDGC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEHMHNJPDGC*))((::PBYTE)hIl2Cpp + CEHMHNJPDGC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEHMHNJPDGC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CEHMHNJPDGC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CEHMHNJPDGC*>*(*)())((::PBYTE)hIl2Cpp + CEHMHNJPDGC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHMHNJPDGC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CEHMHNJPDGC* Clone()
		{
			return ((::CEHMHNJPDGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHMHNJPDGC_CLONE_OFFSET))(this);
		}

		::System::UInt32 MNBHLAJGKOH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHMHNJPDGC_MNBHLAJGKOH_OFFSET))(this);
		}

		::System::Void EMNEFBFCKDJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CEHMHNJPDGC_EMNEFBFCKDJ_OFFSET))(this, a1);
		}

		::System::UInt32 BODJOHPCDJO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHMHNJPDGC_BODJOHPCDJO_OFFSET))(this);
		}

		::System::Void AFJGHICACON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CEHMHNJPDGC_AFJGHICACON_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HLAPJJNJCLC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHMHNJPDGC_HLAPJJNJCLC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CEHMHNJPDGC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CEHMHNJPDGC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CEHMHNJPDGC*))((::PBYTE)hIl2Cpp + CEHMHNJPDGC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHMHNJPDGC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHMHNJPDGC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CEHMHNJPDGC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHMHNJPDGC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CEHMHNJPDGC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEHMHNJPDGC*))((::PBYTE)hIl2Cpp + CEHMHNJPDGC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CEHMHNJPDGC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
