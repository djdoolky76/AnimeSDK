#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKPHDKEPMCJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CKPHDKEPMCJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0EFC50)
#define CKPHDKEPMCJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0EFE70)
#define CKPHDKEPMCJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0EF8A0)
#define CKPHDKEPMCJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0EF870)
#define CKPHDKEPMCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0EF860)
#define CKPHDKEPMCJ_EIGGOMFFLGG_OFFSET UNITYSDK_OFFSET(0x1E0EF8F0)
#define CKPHDKEPMCJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0EF9D0)
#define CKPHDKEPMCJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0EF900)
#define CKPHDKEPMCJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0EFB40)
#define CKPHDKEPMCJ_GJFLEDCJGPG_OFFSET UNITYSDK_OFFSET(0x1E0EF8E0)
#define CKPHDKEPMCJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0EF820)
#define CKPHDKEPMCJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0EFD10)
#define CKPHDKEPMCJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0EFCE0)
#define CKPHDKEPMCJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0EF850)
#define CKPHDKEPMCJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0EFB70)
#define CKPHDKEPMCJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0EFBD0)

	class CKPHDKEPMCJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JEPIGMEMEKE; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CKPHDKEPMCJ")->GetStaticField(0x1BC00);
		}

		// static const ::System::Object GEPLKKBDGGD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPHDKEPMCJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CKPHDKEPMCJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKPHDKEPMCJ*))((::PBYTE)hIl2Cpp + CKPHDKEPMCJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKPHDKEPMCJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CKPHDKEPMCJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPHDKEPMCJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CKPHDKEPMCJ* Clone()
		{
			return ((::CKPHDKEPMCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPHDKEPMCJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 GJFLEDCJGPG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPHDKEPMCJ_GJFLEDCJGPG_OFFSET))(this);
		}

		::System::Void EIGGOMFFLGG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CKPHDKEPMCJ_EIGGOMFFLGG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CKPHDKEPMCJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CKPHDKEPMCJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CKPHDKEPMCJ*))((::PBYTE)hIl2Cpp + CKPHDKEPMCJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPHDKEPMCJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPHDKEPMCJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CKPHDKEPMCJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPHDKEPMCJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CKPHDKEPMCJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKPHDKEPMCJ*))((::PBYTE)hIl2Cpp + CKPHDKEPMCJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CKPHDKEPMCJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
