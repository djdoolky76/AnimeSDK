#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OJOEOMAKAGI;
namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OJOEOMAKAGI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE8BD90)
#define OJOEOMAKAGI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE8C180)
#define OJOEOMAKAGI_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE8B7B0)
#define OJOEOMAKAGI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE8B730)
#define OJOEOMAKAGI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE8B6E0)
#define OJOEOMAKAGI_EHMAFEANNKM_OFFSET UNITYSDK_OFFSET(0x1DE8B8D0)
#define OJOEOMAKAGI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE8B970)
#define OJOEOMAKAGI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE8B8E0)
#define OJOEOMAKAGI_FHOKFBBCLLN_OFFSET UNITYSDK_OFFSET(0x1DE8B860)
#define OJOEOMAKAGI_FLDEJDGGMGD_OFFSET UNITYSDK_OFFSET(0x1DE8B8C0)
#define OJOEOMAKAGI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE8BA90)
#define OJOEOMAKAGI_GJOBMJCOBPE_OFFSET UNITYSDK_OFFSET(0x1DE8B850)
#define OJOEOMAKAGI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE8B6A0)
#define OJOEOMAKAGI_KDIDNNCPODN_OFFSET UNITYSDK_OFFSET(0x1DE8B840)
#define OJOEOMAKAGI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE8BFB0)
#define OJOEOMAKAGI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE8BF50)
#define OJOEOMAKAGI_MNBADFBIMEO_OFFSET UNITYSDK_OFFSET(0x1DE8B870)
#define OJOEOMAKAGI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE8B6D0)
#define OJOEOMAKAGI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE8BBC0)
#define OJOEOMAKAGI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE8BC20)

	class OJOEOMAKAGI : public ::System::Object
	{
	public:
		::Google::Protobuf::ByteString* EEJGDAAEFAG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 HJEGLCJEOKC; // 0x20
		::System::UInt32 EEBKDMBJHEC; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OJOEOMAKAGI")->GetStaticField(0x20180);
		}

		// static const ::System::Object IEIFMNNMINA; // 0x0
		// static const ::System::Object ODAJJNFOFKC; // 0x0
		// static const ::System::Object DCPHPJKBJBN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOEOMAKAGI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OJOEOMAKAGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OJOEOMAKAGI*))((::PBYTE)hIl2Cpp + OJOEOMAKAGI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJOEOMAKAGI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OJOEOMAKAGI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOEOMAKAGI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OJOEOMAKAGI* Clone()
		{
			return ((::OJOEOMAKAGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOEOMAKAGI_CLONE_OFFSET))(this);
		}

		::System::UInt32 KDIDNNCPODN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOEOMAKAGI_KDIDNNCPODN_OFFSET))(this);
		}

		::System::Void GJOBMJCOBPE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OJOEOMAKAGI_GJOBMJCOBPE_OFFSET))(this, a1);
		}

		::Google::Protobuf::ByteString* FHOKFBBCLLN()
		{
			return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOEOMAKAGI_FHOKFBBCLLN_OFFSET))(this);
		}

		::System::Void MNBADFBIMEO(::Google::Protobuf::ByteString* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + OJOEOMAKAGI_MNBADFBIMEO_OFFSET))(this, a1);
		}

		::System::UInt32 FLDEJDGGMGD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOEOMAKAGI_FLDEJDGGMGD_OFFSET))(this);
		}

		::System::Void EHMAFEANNKM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OJOEOMAKAGI_EHMAFEANNKM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OJOEOMAKAGI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OJOEOMAKAGI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OJOEOMAKAGI*))((::PBYTE)hIl2Cpp + OJOEOMAKAGI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOEOMAKAGI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOEOMAKAGI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OJOEOMAKAGI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOEOMAKAGI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OJOEOMAKAGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OJOEOMAKAGI*))((::PBYTE)hIl2Cpp + OJOEOMAKAGI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OJOEOMAKAGI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
