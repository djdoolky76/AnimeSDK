#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IMOOBICJGGE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IMOOBICJGGE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E68D7D0)
#define IMOOBICJGGE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E68DB50)
#define IMOOBICJGGE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E68D3B0)
#define IMOOBICJGGE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E68D370)
#define IMOOBICJGGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E68D360)
#define IMOOBICJGGE_DICLMEAAOCE_OFFSET UNITYSDK_OFFSET(0x1E68D430)
#define IMOOBICJGGE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E68D540)
#define IMOOBICJGGE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E68D460)
#define IMOOBICJGGE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E68D450)
#define IMOOBICJGGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E68D610)
#define IMOOBICJGGE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E68D320)
#define IMOOBICJGGE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E68D9B0)
#define IMOOBICJGGE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E68D960)
#define IMOOBICJGGE_MILJGLJCHKP_OFFSET UNITYSDK_OFFSET(0x1E68D400)
#define IMOOBICJGGE_MJOCJIHLOKK_OFFSET UNITYSDK_OFFSET(0x1E68D420)
#define IMOOBICJGGE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E68D440)
#define IMOOBICJGGE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E68D350)
#define IMOOBICJGGE_PHJAMOPONAD_OFFSET UNITYSDK_OFFSET(0x1E68D410)
#define IMOOBICJGGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E68D640)
#define IMOOBICJGGE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E68D6A0)

inline static constexpr unsigned int IMOOBICJGGE_TypeDefinitionIndex = 31598;

	class IMOOBICJGGE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AKCHEMDMBCI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		::System::UInt32 OLHDLFJEEOH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::IMOOBICJGGE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IMOOBICJGGE*>**)UnitySDK::FromName("", "IMOOBICJGGE")->GetStaticField(0x53030);
		}

		// static const ::System::Object KJIDFICNEMG; // 0x0
		// static const ::System::Object BAACHAHOMIC; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOOBICJGGE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IMOOBICJGGE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IMOOBICJGGE*))((::PBYTE)hIl2Cpp + IMOOBICJGGE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMOOBICJGGE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IMOOBICJGGE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IMOOBICJGGE*>*(*)())((::PBYTE)hIl2Cpp + IMOOBICJGGE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOOBICJGGE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IMOOBICJGGE* Clone()
		{
			return ((::IMOOBICJGGE*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOOBICJGGE_CLONE_OFFSET))(this);
		}

		::System::UInt32 MILJGLJCHKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOOBICJGGE_MILJGLJCHKP_OFFSET))(this);
		}

		::System::Void PHJAMOPONAD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IMOOBICJGGE_PHJAMOPONAD_OFFSET))(this, a1);
		}

		::System::UInt32 MJOCJIHLOKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOOBICJGGE_MJOCJIHLOKK_OFFSET))(this);
		}

		::System::Void DICLMEAAOCE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IMOOBICJGGE_DICLMEAAOCE_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOOBICJGGE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IMOOBICJGGE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IMOOBICJGGE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IMOOBICJGGE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IMOOBICJGGE*))((::PBYTE)hIl2Cpp + IMOOBICJGGE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOOBICJGGE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOOBICJGGE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IMOOBICJGGE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOOBICJGGE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IMOOBICJGGE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IMOOBICJGGE*))((::PBYTE)hIl2Cpp + IMOOBICJGGE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IMOOBICJGGE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
