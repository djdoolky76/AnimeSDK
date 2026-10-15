#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPEBEDHMNLA;
class LHJDEOLKHKB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LHJDEOLKHKB_AFLCHJAHDIE_OFFSET UNITYSDK_OFFSET(0x1E963360)
#define LHJDEOLKHKB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E963750)
#define LHJDEOLKHKB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E963BD0)
#define LHJDEOLKHKB_CHMLPAMOEOG_OFFSET UNITYSDK_OFFSET(0x1E963340)
#define LHJDEOLKHKB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9632E0)
#define LHJDEOLKHKB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9631D0)
#define LHJDEOLKHKB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E963160)
#define LHJDEOLKHKB_EMPBMIAJAJG_OFFSET UNITYSDK_OFFSET(0x1E963350)
#define LHJDEOLKHKB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9633D0)
#define LHJDEOLKHKB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E963370)
#define LHJDEOLKHKB_GABMBIBKLJE_OFFSET UNITYSDK_OFFSET(0x1E963330)
#define LHJDEOLKHKB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E963520)
#define LHJDEOLKHKB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9630F0)
#define LHJDEOLKHKB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9639C0)
#define LHJDEOLKHKB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9638B0)
#define LHJDEOLKHKB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E963150)
#define LHJDEOLKHKB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9635B0)
#define LHJDEOLKHKB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E963610)

	class LHJDEOLKHKB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::JPEBEDHMNLA*>* MGMDPNDNIBO; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::JPEBEDHMNLA*>* PCGBCOJEILA; // 0x20
		::System::UInt32 HMNKHNLCKEL; // 0x28
		static ::Google::Protobuf::FieldCodec** StaticGet_ELIBAMDHBDJ()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "LHJDEOLKHKB")->GetStaticField(0x41310);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LHJDEOLKHKB")->GetStaticField(0x41318);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_KFLCPNIGHHJ()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "LHJDEOLKHKB")->GetStaticField(0x41320);
		}

		// static const ::System::Object ICBGMJBKCCM; // 0x0
		// static const ::System::Object FHOKKAIDKAE; // 0x0
		// static const ::System::Object DBIEHFGDIDF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJDEOLKHKB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LHJDEOLKHKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LHJDEOLKHKB*))((::PBYTE)hIl2Cpp + LHJDEOLKHKB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHJDEOLKHKB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LHJDEOLKHKB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJDEOLKHKB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LHJDEOLKHKB* Clone()
		{
			return ((::LHJDEOLKHKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJDEOLKHKB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JPEBEDHMNLA*>* GABMBIBKLJE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JPEBEDHMNLA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJDEOLKHKB_GABMBIBKLJE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JPEBEDHMNLA*>* CHMLPAMOEOG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JPEBEDHMNLA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJDEOLKHKB_CHMLPAMOEOG_OFFSET))(this);
		}

		::System::UInt32 EMPBMIAJAJG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJDEOLKHKB_EMPBMIAJAJG_OFFSET))(this);
		}

		::System::Void AFLCHJAHDIE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LHJDEOLKHKB_AFLCHJAHDIE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LHJDEOLKHKB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LHJDEOLKHKB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LHJDEOLKHKB*))((::PBYTE)hIl2Cpp + LHJDEOLKHKB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJDEOLKHKB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJDEOLKHKB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LHJDEOLKHKB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJDEOLKHKB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LHJDEOLKHKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LHJDEOLKHKB*))((::PBYTE)hIl2Cpp + LHJDEOLKHKB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LHJDEOLKHKB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
