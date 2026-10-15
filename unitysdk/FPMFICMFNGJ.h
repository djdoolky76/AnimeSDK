#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPMFICMFNGJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FPMFICMFNGJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E40D230)
#define FPMFICMFNGJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E40D2D0)
#define FPMFICMFNGJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E40CF20)
#define FPMFICMFNGJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E40CEF0)
#define FPMFICMFNGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E40CEE0)
#define FPMFICMFNGJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E40D030)
#define FPMFICMFNGJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E40CF60)
#define FPMFICMFNGJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E40D190)
#define FPMFICMFNGJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E40CEA0)
#define FPMFICMFNGJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E40D280)
#define FPMFICMFNGJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E40D250)
#define FPMFICMFNGJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E40CED0)
#define FPMFICMFNGJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E40D1C0)
#define FPMFICMFNGJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E40D220)

	class FPMFICMFNGJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FPMFICMFNGJ")->GetStaticField(0x69810);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMFICMFNGJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FPMFICMFNGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPMFICMFNGJ*))((::PBYTE)hIl2Cpp + FPMFICMFNGJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPMFICMFNGJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FPMFICMFNGJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMFICMFNGJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FPMFICMFNGJ* Clone()
		{
			return ((::FPMFICMFNGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMFICMFNGJ_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FPMFICMFNGJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FPMFICMFNGJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FPMFICMFNGJ*))((::PBYTE)hIl2Cpp + FPMFICMFNGJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMFICMFNGJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMFICMFNGJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FPMFICMFNGJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMFICMFNGJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FPMFICMFNGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPMFICMFNGJ*))((::PBYTE)hIl2Cpp + FPMFICMFNGJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FPMFICMFNGJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
