#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GOOJIJDPKIP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GOOJIJDPKIP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FCFC730)
#define GOOJIJDPKIP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCFC950)
#define GOOJIJDPKIP_CLONE_OFFSET UNITYSDK_OFFSET(0x1FCFC380)
#define GOOJIJDPKIP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FCFC350)
#define GOOJIJDPKIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1FCFC340)
#define GOOJIJDPKIP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FCFC4B0)
#define GOOJIJDPKIP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FCFC3E0)
#define GOOJIJDPKIP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FCFC3D0)
#define GOOJIJDPKIP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FCFC620)
#define GOOJIJDPKIP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FCFC300)
#define GOOJIJDPKIP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FCFC7F0)
#define GOOJIJDPKIP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FCFC7C0)
#define GOOJIJDPKIP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FCFC3C0)
#define GOOJIJDPKIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FCFC330)
#define GOOJIJDPKIP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FCFC650)
#define GOOJIJDPKIP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FCFC6B0)

inline static constexpr unsigned int GOOJIJDPKIP_TypeDefinitionIndex = 28676;

	class GOOJIJDPKIP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GOOJIJDPKIP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GOOJIJDPKIP*>**)UnitySDK::FromName("", "GOOJIJDPKIP")->GetStaticField(0x1C3D0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOJIJDPKIP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GOOJIJDPKIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOOJIJDPKIP*))((::PBYTE)hIl2Cpp + GOOJIJDPKIP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOJIJDPKIP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GOOJIJDPKIP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GOOJIJDPKIP*>*(*)())((::PBYTE)hIl2Cpp + GOOJIJDPKIP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOJIJDPKIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GOOJIJDPKIP* Clone()
		{
			return ((::GOOJIJDPKIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOJIJDPKIP_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOJIJDPKIP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GOOJIJDPKIP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOJIJDPKIP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GOOJIJDPKIP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GOOJIJDPKIP*))((::PBYTE)hIl2Cpp + GOOJIJDPKIP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOJIJDPKIP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOJIJDPKIP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOJIJDPKIP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOJIJDPKIP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GOOJIJDPKIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOOJIJDPKIP*))((::PBYTE)hIl2Cpp + GOOJIJDPKIP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOJIJDPKIP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
