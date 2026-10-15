#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MJEMCKGBIPN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MJEMCKGBIPN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA482D0)
#define MJEMCKGBIPN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA484F0)
#define MJEMCKGBIPN_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA47F20)
#define MJEMCKGBIPN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA47EF0)
#define MJEMCKGBIPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA47EE0)
#define MJEMCKGBIPN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA48050)
#define MJEMCKGBIPN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA47F80)
#define MJEMCKGBIPN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA47F70)
#define MJEMCKGBIPN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA481C0)
#define MJEMCKGBIPN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA47EA0)
#define MJEMCKGBIPN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA48390)
#define MJEMCKGBIPN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA48360)
#define MJEMCKGBIPN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA47F60)
#define MJEMCKGBIPN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA47ED0)
#define MJEMCKGBIPN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA481F0)
#define MJEMCKGBIPN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA48250)

	class MJEMCKGBIPN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MJEMCKGBIPN")->GetStaticField(0x556A0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEMCKGBIPN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MJEMCKGBIPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJEMCKGBIPN*))((::PBYTE)hIl2Cpp + MJEMCKGBIPN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJEMCKGBIPN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MJEMCKGBIPN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEMCKGBIPN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MJEMCKGBIPN* Clone()
		{
			return ((::MJEMCKGBIPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEMCKGBIPN_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEMCKGBIPN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MJEMCKGBIPN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MJEMCKGBIPN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MJEMCKGBIPN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MJEMCKGBIPN*))((::PBYTE)hIl2Cpp + MJEMCKGBIPN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEMCKGBIPN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEMCKGBIPN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MJEMCKGBIPN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEMCKGBIPN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MJEMCKGBIPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJEMCKGBIPN*))((::PBYTE)hIl2Cpp + MJEMCKGBIPN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MJEMCKGBIPN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
