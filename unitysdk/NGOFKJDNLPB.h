#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NGOFKJDNLPB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NGOFKJDNLPB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAE9640)
#define NGOFKJDNLPB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAE9910)
#define NGOFKJDNLPB_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAE9290)
#define NGOFKJDNLPB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAE9260)
#define NGOFKJDNLPB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAE9250)
#define NGOFKJDNLPB_DOINAIBOGOI_OFFSET UNITYSDK_OFFSET(0x1EAE92E0)
#define NGOFKJDNLPB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAE9400)
#define NGOFKJDNLPB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAE9320)
#define NGOFKJDNLPB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EAE9310)
#define NGOFKJDNLPB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAE94D0)
#define NGOFKJDNLPB_IELCCNPGBLI_OFFSET UNITYSDK_OFFSET(0x1EAE92F0)
#define NGOFKJDNLPB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAE9210)
#define NGOFKJDNLPB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAE9790)
#define NGOFKJDNLPB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAE9750)
#define NGOFKJDNLPB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EAE9300)
#define NGOFKJDNLPB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAE9240)
#define NGOFKJDNLPB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAE9500)
#define NGOFKJDNLPB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAE9560)

inline static constexpr unsigned int NGOFKJDNLPB_TypeDefinitionIndex = 26476;

	class NGOFKJDNLPB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FJLILEOEEIB; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::NGOFKJDNLPB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NGOFKJDNLPB*>**)UnitySDK::FromName("", "NGOFKJDNLPB")->GetStaticField(0x644C0);
		}

		// static const ::System::Object JBLABOEPILK; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOFKJDNLPB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NGOFKJDNLPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGOFKJDNLPB*))((::PBYTE)hIl2Cpp + NGOFKJDNLPB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGOFKJDNLPB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NGOFKJDNLPB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NGOFKJDNLPB*>*(*)())((::PBYTE)hIl2Cpp + NGOFKJDNLPB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOFKJDNLPB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NGOFKJDNLPB* Clone()
		{
			return ((::NGOFKJDNLPB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOFKJDNLPB_CLONE_OFFSET))(this);
		}

		::System::UInt32 DOINAIBOGOI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOFKJDNLPB_DOINAIBOGOI_OFFSET))(this);
		}

		::System::Void IELCCNPGBLI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NGOFKJDNLPB_IELCCNPGBLI_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOFKJDNLPB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NGOFKJDNLPB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NGOFKJDNLPB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NGOFKJDNLPB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NGOFKJDNLPB*))((::PBYTE)hIl2Cpp + NGOFKJDNLPB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOFKJDNLPB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOFKJDNLPB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NGOFKJDNLPB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOFKJDNLPB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NGOFKJDNLPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGOFKJDNLPB*))((::PBYTE)hIl2Cpp + NGOFKJDNLPB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NGOFKJDNLPB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
