#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBFNNCGECMO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HBFNNCGECMO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E52BB60)
#define HBFNNCGECMO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E52BD80)
#define HBFNNCGECMO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E52B7B0)
#define HBFNNCGECMO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E52B780)
#define HBFNNCGECMO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E50D140)
#define HBFNNCGECMO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E52B8E0)
#define HBFNNCGECMO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E52B810)
#define HBFNNCGECMO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E52B800)
#define HBFNNCGECMO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E52BA50)
#define HBFNNCGECMO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E50D100)
#define HBFNNCGECMO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E52BC20)
#define HBFNNCGECMO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E52BBF0)
#define HBFNNCGECMO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E52B7F0)
#define HBFNNCGECMO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E50D130)
#define HBFNNCGECMO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E52BA80)
#define HBFNNCGECMO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E52BAE0)

	class HBFNNCGECMO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HBFNNCGECMO")->GetStaticField(0x2DDD0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFNNCGECMO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HBFNNCGECMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBFNNCGECMO*))((::PBYTE)hIl2Cpp + HBFNNCGECMO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBFNNCGECMO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HBFNNCGECMO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFNNCGECMO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HBFNNCGECMO* Clone()
		{
			return ((::HBFNNCGECMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFNNCGECMO_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFNNCGECMO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HBFNNCGECMO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HBFNNCGECMO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HBFNNCGECMO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HBFNNCGECMO*))((::PBYTE)hIl2Cpp + HBFNNCGECMO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFNNCGECMO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFNNCGECMO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HBFNNCGECMO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFNNCGECMO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HBFNNCGECMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBFNNCGECMO*))((::PBYTE)hIl2Cpp + HBFNNCGECMO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HBFNNCGECMO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
