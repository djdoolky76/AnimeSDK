#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLNFNACOFFF;
class OLBKADIKIGL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OLBKADIKIGL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEA4AC0)
#define OLBKADIKIGL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEA4E20)
#define OLBKADIKIGL_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEA4420)
#define OLBKADIKIGL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEA4390)
#define OLBKADIKIGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEA4380)
#define OLBKADIKIGL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEA46B0)
#define OLBKADIKIGL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEA4510)
#define OLBKADIKIGL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEA4980)
#define OLBKADIKIGL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEA4310)
#define OLBKADIKIGL_KKGGPGIKGCJ_OFFSET UNITYSDK_OFFSET(0x1DEA44F0)
#define OLBKADIKIGL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEA4C20)
#define OLBKADIKIGL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEA4B20)
#define OLBKADIKIGL_NABLONFJGKA_OFFSET UNITYSDK_OFFSET(0x1DEA4500)
#define OLBKADIKIGL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEA4370)
#define OLBKADIKIGL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEA49D0)
#define OLBKADIKIGL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEA4A30)

inline static constexpr unsigned int OLBKADIKIGL_TypeDefinitionIndex = 34792;

	class OLBKADIKIGL : public ::System::Object
	{
	public:
		::HLNFNACOFFF* PFHLPOOHFAC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OLBKADIKIGL")->GetStaticField(0x23570);
		}

		// static const ::System::Object BNBFOJPGGJI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLBKADIKIGL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OLBKADIKIGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLBKADIKIGL*))((::PBYTE)hIl2Cpp + OLBKADIKIGL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLBKADIKIGL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OLBKADIKIGL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLBKADIKIGL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OLBKADIKIGL* Clone()
		{
			return ((::OLBKADIKIGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLBKADIKIGL_CLONE_OFFSET))(this);
		}

		::HLNFNACOFFF* KKGGPGIKGCJ()
		{
			return ((::HLNFNACOFFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLBKADIKIGL_KKGGPGIKGCJ_OFFSET))(this);
		}

		::System::Void NABLONFJGKA(::HLNFNACOFFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLNFNACOFFF*))((::PBYTE)hIl2Cpp + OLBKADIKIGL_NABLONFJGKA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OLBKADIKIGL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OLBKADIKIGL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OLBKADIKIGL*))((::PBYTE)hIl2Cpp + OLBKADIKIGL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLBKADIKIGL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLBKADIKIGL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OLBKADIKIGL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLBKADIKIGL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OLBKADIKIGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLBKADIKIGL*))((::PBYTE)hIl2Cpp + OLBKADIKIGL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OLBKADIKIGL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
