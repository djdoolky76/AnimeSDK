#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GOBDDIKGMJB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GOBDDIKGMJB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4E8C50)
#define GOBDDIKGMJB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4E8E70)
#define GOBDDIKGMJB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4E88A0)
#define GOBDDIKGMJB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4E8870)
#define GOBDDIKGMJB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4E8860)
#define GOBDDIKGMJB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4E89D0)
#define GOBDDIKGMJB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4E8900)
#define GOBDDIKGMJB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E4E88F0)
#define GOBDDIKGMJB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4E8B40)
#define GOBDDIKGMJB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4E8820)
#define GOBDDIKGMJB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4E8D10)
#define GOBDDIKGMJB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4E8CE0)
#define GOBDDIKGMJB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E4E88E0)
#define GOBDDIKGMJB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4E8850)
#define GOBDDIKGMJB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4E8B70)
#define GOBDDIKGMJB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4E8BD0)

inline static constexpr unsigned int GOBDDIKGMJB_TypeDefinitionIndex = 34447;

	class GOBDDIKGMJB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GOBDDIKGMJB")->GetStaticField(0x244B0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOBDDIKGMJB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GOBDDIKGMJB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOBDDIKGMJB*))((::PBYTE)hIl2Cpp + GOBDDIKGMJB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOBDDIKGMJB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GOBDDIKGMJB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOBDDIKGMJB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GOBDDIKGMJB* Clone()
		{
			return ((::GOBDDIKGMJB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOBDDIKGMJB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOBDDIKGMJB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GOBDDIKGMJB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOBDDIKGMJB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GOBDDIKGMJB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GOBDDIKGMJB*))((::PBYTE)hIl2Cpp + GOBDDIKGMJB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOBDDIKGMJB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOBDDIKGMJB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOBDDIKGMJB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOBDDIKGMJB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GOBDDIKGMJB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOBDDIKGMJB*))((::PBYTE)hIl2Cpp + GOBDDIKGMJB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOBDDIKGMJB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
