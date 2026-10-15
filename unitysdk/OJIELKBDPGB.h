#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFACLOGFNJF;
class OJIELKBDPGB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OJIELKBDPGB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE594C0)
#define OJIELKBDPGB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE59820)
#define OJIELKBDPGB_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE58F70)
#define OJIELKBDPGB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE58F00)
#define OJIELKBDPGB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE58EF0)
#define OJIELKBDPGB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE591B0)
#define OJIELKBDPGB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE59030)
#define OJIELKBDPGB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DE59020)
#define OJIELKBDPGB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE59330)
#define OJIELKBDPGB_IMHIOGCKGIF_OFFSET UNITYSDK_OFFSET(0x1DE58FF0)
#define OJIELKBDPGB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE58EB0)
#define OJIELKBDPGB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE59640)
#define OJIELKBDPGB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE59590)
#define OJIELKBDPGB_NBEIAFHAJOI_OFFSET UNITYSDK_OFFSET(0x1DE59000)
#define OJIELKBDPGB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DE59010)
#define OJIELKBDPGB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE58EE0)
#define OJIELKBDPGB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE59380)
#define OJIELKBDPGB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE593E0)

inline static constexpr unsigned int OJIELKBDPGB_TypeDefinitionIndex = 27280;

	class OJIELKBDPGB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::KFACLOGFNJF* NJIGKFFGPLD; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::OJIELKBDPGB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OJIELKBDPGB*>**)UnitySDK::FromName("", "OJIELKBDPGB")->GetStaticField(0x1C7E0);
		}

		// static const ::System::Object NNOBLNPPJGB; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJIELKBDPGB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OJIELKBDPGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OJIELKBDPGB*))((::PBYTE)hIl2Cpp + OJIELKBDPGB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJIELKBDPGB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OJIELKBDPGB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OJIELKBDPGB*>*(*)())((::PBYTE)hIl2Cpp + OJIELKBDPGB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJIELKBDPGB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OJIELKBDPGB* Clone()
		{
			return ((::OJIELKBDPGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJIELKBDPGB_CLONE_OFFSET))(this);
		}

		::KFACLOGFNJF* IMHIOGCKGIF()
		{
			return ((::KFACLOGFNJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJIELKBDPGB_IMHIOGCKGIF_OFFSET))(this);
		}

		::System::Void NBEIAFHAJOI(::KFACLOGFNJF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFACLOGFNJF*))((::PBYTE)hIl2Cpp + OJIELKBDPGB_NBEIAFHAJOI_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJIELKBDPGB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OJIELKBDPGB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OJIELKBDPGB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OJIELKBDPGB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OJIELKBDPGB*))((::PBYTE)hIl2Cpp + OJIELKBDPGB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJIELKBDPGB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJIELKBDPGB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OJIELKBDPGB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJIELKBDPGB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OJIELKBDPGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OJIELKBDPGB*))((::PBYTE)hIl2Cpp + OJIELKBDPGB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OJIELKBDPGB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
