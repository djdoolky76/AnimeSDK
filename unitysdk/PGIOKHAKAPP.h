#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PGIOKHAKAPP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define PGIOKHAKAPP_BEPKKOHEOGL_OFFSET UNITYSDK_OFFSET(0x1DF04FE0)
#define PGIOKHAKAPP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF055B0)
#define PGIOKHAKAPP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF05B30)
#define PGIOKHAKAPP_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF04F20)
#define PGIOKHAKAPP_CMPAPOLKDMI_OFFSET UNITYSDK_OFFSET(0x1DF04FF0)
#define PGIOKHAKAPP_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1DF04F90)
#define PGIOKHAKAPP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF04E30)
#define PGIOKHAKAPP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF04DE0)
#define PGIOKHAKAPP_EALOAPAKGPL_OFFSET UNITYSDK_OFFSET(0x1DF04FD0)
#define PGIOKHAKAPP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF05030)
#define PGIOKHAKAPP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF05000)
#define PGIOKHAKAPP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DF04F80)
#define PGIOKHAKAPP_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1DF04FA0)
#define PGIOKHAKAPP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF05160)
#define PGIOKHAKAPP_GHBBNOKENLI_OFFSET UNITYSDK_OFFSET(0x1DF04FB0)
#define PGIOKHAKAPP_IOEDGIFNLBK_OFFSET UNITYSDK_OFFSET(0x1DF04F60)
#define PGIOKHAKAPP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF04DA0)
#define PGIOKHAKAPP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF059B0)
#define PGIOKHAKAPP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF058E0)
#define PGIOKHAKAPP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DF04F70)
#define PGIOKHAKAPP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF04DD0)
#define PGIOKHAKAPP_PFDFAHJBBKD_OFFSET UNITYSDK_OFFSET(0x1DF04F50)
#define PGIOKHAKAPP_POCILFFLDOH_OFFSET UNITYSDK_OFFSET(0x1DF04FC0)
#define PGIOKHAKAPP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF05300)
#define PGIOKHAKAPP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF05360)

inline static constexpr unsigned int PGIOKHAKAPP_TypeDefinitionIndex = 30651;

	class PGIOKHAKAPP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Proto::ItemList* JDAFJANAEBG; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IJNFCNAAFMA; // 0x20
		::System::UInt64 LJFAPGMCCPP; // 0x28
		::System::UInt32 BMGMACIBMFH; // 0x30
		::System::UInt32 NAEACGPKNNH; // 0x34
		::System::UInt64 GODIGICNHBG; // 0x38
		static ::Google::Protobuf::MessageParser_1<::PGIOKHAKAPP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PGIOKHAKAPP*>**)UnitySDK::FromName("", "PGIOKHAKAPP")->GetStaticField(0x33050);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_HIBELOEMCLE()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "PGIOKHAKAPP")->GetStaticField(0x33058);
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

		static ::Google::Protobuf::MessageParser_1<::PGIOKHAKAPP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PGIOKHAKAPP*>*(*)())((::PBYTE)hIl2Cpp + PGIOKHAKAPP_JJGHOBBFNJD_OFFSET))();
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
