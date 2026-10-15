#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOFHHEBDEOD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BOFHHEBDEOD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E039D40)
#define BOFHHEBDEOD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E039F60)
#define BOFHHEBDEOD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E039930)
#define BOFHHEBDEOD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E039900)
#define BOFHHEBDEOD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0398F0)
#define BOFHHEBDEOD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E039AC0)
#define BOFHHEBDEOD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0399C0)
#define BOFHHEBDEOD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E039C30)
#define BOFHHEBDEOD_JHJCOEDMNIN_OFFSET UNITYSDK_OFFSET(0x1E0399A0)
#define BOFHHEBDEOD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E039880)
#define BOFHHEBDEOD_KAOEFHEOLAO_OFFSET UNITYSDK_OFFSET(0x1E0399B0)
#define BOFHHEBDEOD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E039E00)
#define BOFHHEBDEOD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E039DD0)
#define BOFHHEBDEOD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0398E0)
#define BOFHHEBDEOD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E039C60)
#define BOFHHEBDEOD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E039CC0)

	class BOFHHEBDEOD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DJJNAPLICOJ; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BOFHHEBDEOD")->GetStaticField(0x53180);
		}

		// static const ::System::Object KKMGCAJIOLL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOFHHEBDEOD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BOFHHEBDEOD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOFHHEBDEOD*))((::PBYTE)hIl2Cpp + BOFHHEBDEOD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOFHHEBDEOD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BOFHHEBDEOD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOFHHEBDEOD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BOFHHEBDEOD* Clone()
		{
			return ((::BOFHHEBDEOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOFHHEBDEOD_CLONE_OFFSET))(this);
		}

		::System::UInt32 JHJCOEDMNIN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOFHHEBDEOD_JHJCOEDMNIN_OFFSET))(this);
		}

		::System::Void KAOEFHEOLAO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BOFHHEBDEOD_KAOEFHEOLAO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BOFHHEBDEOD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BOFHHEBDEOD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BOFHHEBDEOD*))((::PBYTE)hIl2Cpp + BOFHHEBDEOD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOFHHEBDEOD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOFHHEBDEOD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BOFHHEBDEOD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOFHHEBDEOD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BOFHHEBDEOD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOFHHEBDEOD*))((::PBYTE)hIl2Cpp + BOFHHEBDEOD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BOFHHEBDEOD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
