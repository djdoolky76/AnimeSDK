#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGMNDBFCBLL.h"
#include "unitysdk/System/Object.h"
class ONNHDODIIED;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ONNHDODIIED_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DED1360)
#define ONNHDODIIED_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DED15C0)
#define ONNHDODIIED_CLONE_OFFSET UNITYSDK_OFFSET(0x1DED0F30)
#define ONNHDODIIED_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DED0F00)
#define ONNHDODIIED_CTOR_OFFSET UNITYSDK_OFFSET(0x1DED0EF0)
#define ONNHDODIIED_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DED10C0)
#define ONNHDODIIED_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DED0FC0)
#define ONNHDODIIED_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DED1230)
#define ONNHDODIIED_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DED0E80)
#define ONNHDODIIED_LOOMPBFMBCN_OFFSET UNITYSDK_OFFSET(0x1DED0FB0)
#define ONNHDODIIED_MCKAAMENFCE_OFFSET UNITYSDK_OFFSET(0x1DED0FA0)
#define ONNHDODIIED_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DED1460)
#define ONNHDODIIED_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DED1430)
#define ONNHDODIIED_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DED0EE0)
#define ONNHDODIIED_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DED1260)
#define ONNHDODIIED_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DED12C0)

	class ONNHDODIIED : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::HGMNDBFCBLL CPHKLPMPADB; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ONNHDODIIED")->GetStaticField(0x2E130);
		}

		// static const ::System::Object MCCPOKCDGKE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNHDODIIED_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ONNHDODIIED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONNHDODIIED*))((::PBYTE)hIl2Cpp + ONNHDODIIED_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONNHDODIIED_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ONNHDODIIED_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNHDODIIED_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ONNHDODIIED* Clone()
		{
			return ((::ONNHDODIIED*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNHDODIIED_CLONE_OFFSET))(this);
		}

		::HGMNDBFCBLL MCKAAMENFCE()
		{
			return ((::HGMNDBFCBLL(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNHDODIIED_MCKAAMENFCE_OFFSET))(this);
		}

		::System::Void LOOMPBFMBCN(::HGMNDBFCBLL a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGMNDBFCBLL))((::PBYTE)hIl2Cpp + ONNHDODIIED_LOOMPBFMBCN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ONNHDODIIED_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ONNHDODIIED* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ONNHDODIIED*))((::PBYTE)hIl2Cpp + ONNHDODIIED_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNHDODIIED_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNHDODIIED_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ONNHDODIIED_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNHDODIIED_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ONNHDODIIED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONNHDODIIED*))((::PBYTE)hIl2Cpp + ONNHDODIIED_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ONNHDODIIED_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
