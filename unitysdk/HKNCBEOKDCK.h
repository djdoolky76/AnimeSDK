#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKNCBEOKDCK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HKNCBEOKDCK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5B67C0)
#define HKNCBEOKDCK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5B69E0)
#define HKNCBEOKDCK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5B6410)
#define HKNCBEOKDCK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5B63E0)
#define HKNCBEOKDCK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5B63D0)
#define HKNCBEOKDCK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5B6540)
#define HKNCBEOKDCK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5B6470)
#define HKNCBEOKDCK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E5B6460)
#define HKNCBEOKDCK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5B66B0)
#define HKNCBEOKDCK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5B6390)
#define HKNCBEOKDCK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5B6880)
#define HKNCBEOKDCK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5B6850)
#define HKNCBEOKDCK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E5B6450)
#define HKNCBEOKDCK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5B63C0)
#define HKNCBEOKDCK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5B66E0)
#define HKNCBEOKDCK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5B6740)

	class HKNCBEOKDCK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HKNCBEOKDCK")->GetStaticField(0x45E10);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNCBEOKDCK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HKNCBEOKDCK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKNCBEOKDCK*))((::PBYTE)hIl2Cpp + HKNCBEOKDCK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKNCBEOKDCK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HKNCBEOKDCK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNCBEOKDCK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HKNCBEOKDCK* Clone()
		{
			return ((::HKNCBEOKDCK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNCBEOKDCK_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNCBEOKDCK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HKNCBEOKDCK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HKNCBEOKDCK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HKNCBEOKDCK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HKNCBEOKDCK*))((::PBYTE)hIl2Cpp + HKNCBEOKDCK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNCBEOKDCK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNCBEOKDCK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HKNCBEOKDCK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNCBEOKDCK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HKNCBEOKDCK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKNCBEOKDCK*))((::PBYTE)hIl2Cpp + HKNCBEOKDCK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HKNCBEOKDCK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
