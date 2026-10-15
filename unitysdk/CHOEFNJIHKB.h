#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHOEFNJIHKB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CHOEFNJIHKB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0CC910)
#define CHOEFNJIHKB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0CCB30)
#define CHOEFNJIHKB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0CC560)
#define CHOEFNJIHKB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0CC530)
#define CHOEFNJIHKB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0CC520)
#define CHOEFNJIHKB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0CC690)
#define CHOEFNJIHKB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0CC5C0)
#define CHOEFNJIHKB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E0CC5B0)
#define CHOEFNJIHKB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0CC800)
#define CHOEFNJIHKB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0CC4E0)
#define CHOEFNJIHKB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0CC9D0)
#define CHOEFNJIHKB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0CC9A0)
#define CHOEFNJIHKB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E0CC5A0)
#define CHOEFNJIHKB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0CC510)
#define CHOEFNJIHKB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0CC830)
#define CHOEFNJIHKB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0CC890)

	class CHOEFNJIHKB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CHOEFNJIHKB")->GetStaticField(0x16EF0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHOEFNJIHKB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CHOEFNJIHKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHOEFNJIHKB*))((::PBYTE)hIl2Cpp + CHOEFNJIHKB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHOEFNJIHKB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CHOEFNJIHKB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHOEFNJIHKB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CHOEFNJIHKB* Clone()
		{
			return ((::CHOEFNJIHKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHOEFNJIHKB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHOEFNJIHKB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CHOEFNJIHKB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CHOEFNJIHKB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CHOEFNJIHKB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CHOEFNJIHKB*))((::PBYTE)hIl2Cpp + CHOEFNJIHKB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHOEFNJIHKB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHOEFNJIHKB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CHOEFNJIHKB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHOEFNJIHKB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CHOEFNJIHKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHOEFNJIHKB*))((::PBYTE)hIl2Cpp + CHOEFNJIHKB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CHOEFNJIHKB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
