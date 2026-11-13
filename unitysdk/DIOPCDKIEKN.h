#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DIOPCDKIEKN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define DIOPCDKIEKN_BDIFFCNIFMI_OFFSET UNITYSDK_OFFSET(0x1FB2A020)
#define DIOPCDKIEKN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FB2A580)
#define DIOPCDKIEKN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB2A950)
#define DIOPCDKIEKN_CLONE_OFFSET UNITYSDK_OFFSET(0x1FB29F50)
#define DIOPCDKIEKN_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1FB29FF0)
#define DIOPCDKIEKN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB29EE0)
#define DIOPCDKIEKN_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB29ED0)
#define DIOPCDKIEKN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FB2A1C0)
#define DIOPCDKIEKN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FB2A030)
#define DIOPCDKIEKN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FB29FE0)
#define DIOPCDKIEKN_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1FB2A000)
#define DIOPCDKIEKN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FB2A350)
#define DIOPCDKIEKN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FB29E90)
#define DIOPCDKIEKN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FB2A770)
#define DIOPCDKIEKN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FB2A6D0)
#define DIOPCDKIEKN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FB29FD0)
#define DIOPCDKIEKN_OEJMOAOPLNH_OFFSET UNITYSDK_OFFSET(0x1FB2A010)
#define DIOPCDKIEKN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FB29EC0)
#define DIOPCDKIEKN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FB2A3E0)
#define DIOPCDKIEKN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FB2A440)

inline static constexpr unsigned int DIOPCDKIEKN_TypeDefinitionIndex = 35447;

	class DIOPCDKIEKN : public ::System::Object
	{
	public:
		::Proto::ItemList* JDAFJANAEBG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 JCKFKAHLFMC; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::MessageParser_1<::DIOPCDKIEKN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DIOPCDKIEKN*>**)UnitySDK::FromName("", "DIOPCDKIEKN")->GetStaticField(0x2BE90);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object DNNLCNCOJAF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIOPCDKIEKN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DIOPCDKIEKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIOPCDKIEKN*))((::PBYTE)hIl2Cpp + DIOPCDKIEKN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIOPCDKIEKN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DIOPCDKIEKN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DIOPCDKIEKN*>*(*)())((::PBYTE)hIl2Cpp + DIOPCDKIEKN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIOPCDKIEKN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DIOPCDKIEKN* Clone()
		{
			return ((::DIOPCDKIEKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIOPCDKIEKN_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIOPCDKIEKN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DIOPCDKIEKN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIOPCDKIEKN_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + DIOPCDKIEKN_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::UInt32 OEJMOAOPLNH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIOPCDKIEKN_OEJMOAOPLNH_OFFSET))(this);
		}

		::System::Void BDIFFCNIFMI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DIOPCDKIEKN_BDIFFCNIFMI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DIOPCDKIEKN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DIOPCDKIEKN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DIOPCDKIEKN*))((::PBYTE)hIl2Cpp + DIOPCDKIEKN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIOPCDKIEKN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIOPCDKIEKN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DIOPCDKIEKN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIOPCDKIEKN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DIOPCDKIEKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIOPCDKIEKN*))((::PBYTE)hIl2Cpp + DIOPCDKIEKN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DIOPCDKIEKN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
