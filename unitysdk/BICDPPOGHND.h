#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BICDPPOGHND;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BICDPPOGHND_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDD2A60)
#define BICDPPOGHND_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDD2C80)
#define BICDPPOGHND_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDD26B0)
#define BICDPPOGHND_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDD2680)
#define BICDPPOGHND_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDD2670)
#define BICDPPOGHND_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDD27E0)
#define BICDPPOGHND_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDD2710)
#define BICDPPOGHND_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DDD2700)
#define BICDPPOGHND_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDD2950)
#define BICDPPOGHND_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDD2630)
#define BICDPPOGHND_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDD2B20)
#define BICDPPOGHND_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDD2AF0)
#define BICDPPOGHND_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DDD26F0)
#define BICDPPOGHND_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDD2660)
#define BICDPPOGHND_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDD2980)
#define BICDPPOGHND_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDD29E0)

inline static constexpr unsigned int BICDPPOGHND_TypeDefinitionIndex = 32360;

	class BICDPPOGHND : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::BICDPPOGHND*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BICDPPOGHND*>**)UnitySDK::FromName("", "BICDPPOGHND")->GetStaticField(0x57560);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BICDPPOGHND_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BICDPPOGHND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BICDPPOGHND*))((::PBYTE)hIl2Cpp + BICDPPOGHND_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BICDPPOGHND_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BICDPPOGHND*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BICDPPOGHND*>*(*)())((::PBYTE)hIl2Cpp + BICDPPOGHND_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BICDPPOGHND_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BICDPPOGHND* Clone()
		{
			return ((::BICDPPOGHND*(*)(::PVOID))((::PBYTE)hIl2Cpp + BICDPPOGHND_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BICDPPOGHND_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BICDPPOGHND_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BICDPPOGHND_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BICDPPOGHND* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BICDPPOGHND*))((::PBYTE)hIl2Cpp + BICDPPOGHND_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BICDPPOGHND_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BICDPPOGHND_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BICDPPOGHND_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BICDPPOGHND_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BICDPPOGHND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BICDPPOGHND*))((::PBYTE)hIl2Cpp + BICDPPOGHND_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BICDPPOGHND_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
