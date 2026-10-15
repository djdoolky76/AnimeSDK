#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DIOPCDKIEKN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define DIOPCDKIEKN_BDIFFCNIFMI_OFFSET UNITYSDK_OFFSET(0x1E1C3A00)
#define DIOPCDKIEKN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1C3F60)
#define DIOPCDKIEKN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1C4330)
#define DIOPCDKIEKN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1C3930)
#define DIOPCDKIEKN_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E1C39D0)
#define DIOPCDKIEKN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1C38C0)
#define DIOPCDKIEKN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1C38B0)
#define DIOPCDKIEKN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1C3BA0)
#define DIOPCDKIEKN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1C3A10)
#define DIOPCDKIEKN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E1C39C0)
#define DIOPCDKIEKN_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E1C39E0)
#define DIOPCDKIEKN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1C3D30)
#define DIOPCDKIEKN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1C3870)
#define DIOPCDKIEKN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1C4150)
#define DIOPCDKIEKN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1C40B0)
#define DIOPCDKIEKN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E1C39B0)
#define DIOPCDKIEKN_OEJMOAOPLNH_OFFSET UNITYSDK_OFFSET(0x1E1C39F0)
#define DIOPCDKIEKN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1C38A0)
#define DIOPCDKIEKN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1C3DC0)
#define DIOPCDKIEKN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1C3E20)

	class DIOPCDKIEKN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Proto::ItemList* JDAFJANAEBG; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 JCKFKAHLFMC; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DIOPCDKIEKN")->GetStaticField(0x36B70);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DIOPCDKIEKN_JJGHOBBFNJD_OFFSET))();
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
