#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PGIOKHAKAPP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define PGIOKHAKAPP_BEPKKOHEOGL_OFFSET UNITYSDK_OFFSET(0x1DF326A0)
#define PGIOKHAKAPP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF32C70)
#define PGIOKHAKAPP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF331F0)
#define PGIOKHAKAPP_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF325E0)
#define PGIOKHAKAPP_CMPAPOLKDMI_OFFSET UNITYSDK_OFFSET(0x1DF326B0)
#define PGIOKHAKAPP_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1DF32650)
#define PGIOKHAKAPP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF324F0)
#define PGIOKHAKAPP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF324A0)
#define PGIOKHAKAPP_EALOAPAKGPL_OFFSET UNITYSDK_OFFSET(0x1DF32690)
#define PGIOKHAKAPP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF326F0)
#define PGIOKHAKAPP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF326C0)
#define PGIOKHAKAPP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DF32640)
#define PGIOKHAKAPP_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1DF32660)
#define PGIOKHAKAPP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF32820)
#define PGIOKHAKAPP_GHBBNOKENLI_OFFSET UNITYSDK_OFFSET(0x1DF32670)
#define PGIOKHAKAPP_IOEDGIFNLBK_OFFSET UNITYSDK_OFFSET(0x1DF32620)
#define PGIOKHAKAPP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF32460)
#define PGIOKHAKAPP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF33070)
#define PGIOKHAKAPP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF32FA0)
#define PGIOKHAKAPP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DF32630)
#define PGIOKHAKAPP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF32490)
#define PGIOKHAKAPP_PFDFAHJBBKD_OFFSET UNITYSDK_OFFSET(0x1DF32610)
#define PGIOKHAKAPP_POCILFFLDOH_OFFSET UNITYSDK_OFFSET(0x1DF32680)
#define PGIOKHAKAPP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF329C0)
#define PGIOKHAKAPP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF32A20)

inline static constexpr unsigned int PGIOKHAKAPP_TypeDefinitionIndex = 30651;

	class PGIOKHAKAPP : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IJNFCNAAFMA; // 0x10
		::Proto::ItemList* JDAFJANAEBG; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt64 LJFAPGMCCPP; // 0x28
		::System::UInt64 GODIGICNHBG; // 0x30
		::System::UInt32 BMGMACIBMFH; // 0x38
		::System::UInt32 NAEACGPKNNH; // 0x3C
		static ::Google::Protobuf::FieldCodec** StaticGet_HIBELOEMCLE()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "PGIOKHAKAPP")->GetStaticField(0x3DDD0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PGIOKHAKAPP")->GetStaticField(0x3DDD8);
		}

		// static const ::System::Object JFPHEPMECOH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object ADHMALKIGEN; // 0x0
		// static const ::System::Object LICENIHDDLB; // 0x0
		// static const ::System::Object FPEDPMAHHND; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGIOKHAKAPP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PGIOKHAKAPP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PGIOKHAKAPP*))((::PBYTE)hIl2Cpp + PGIOKHAKAPP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGIOKHAKAPP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PGIOKHAKAPP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGIOKHAKAPP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PGIOKHAKAPP* Clone()
		{
			return ((::PGIOKHAKAPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGIOKHAKAPP_CLONE_OFFSET))(this);
		}

		::System::UInt64 PFDFAHJBBKD()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + PGIOKHAKAPP_PFDFAHJBBKD_OFFSET))(this);
		}

		::System::Void IOEDGIFNLBK(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + PGIOKHAKAPP_IOEDGIFNLBK_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGIOKHAKAPP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PGIOKHAKAPP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGIOKHAKAPP_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + PGIOKHAKAPP_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GHBBNOKENLI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGIOKHAKAPP_GHBBNOKENLI_OFFSET))(this);
		}

		::System::UInt64 POCILFFLDOH()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + PGIOKHAKAPP_POCILFFLDOH_OFFSET))(this);
		}

		::System::Void EALOAPAKGPL(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + PGIOKHAKAPP_EALOAPAKGPL_OFFSET))(this, a1);
		}

		::System::UInt32 BEPKKOHEOGL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGIOKHAKAPP_BEPKKOHEOGL_OFFSET))(this);
		}

		::System::Void CMPAPOLKDMI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PGIOKHAKAPP_CMPAPOLKDMI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PGIOKHAKAPP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PGIOKHAKAPP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PGIOKHAKAPP*))((::PBYTE)hIl2Cpp + PGIOKHAKAPP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGIOKHAKAPP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGIOKHAKAPP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PGIOKHAKAPP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGIOKHAKAPP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PGIOKHAKAPP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PGIOKHAKAPP*))((::PBYTE)hIl2Cpp + PGIOKHAKAPP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PGIOKHAKAPP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
