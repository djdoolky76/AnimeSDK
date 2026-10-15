#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LGAMHIEPIIP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LGAMHIEPIIP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E949290)
#define LGAMHIEPIIP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9494B0)
#define LGAMHIEPIIP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E948EE0)
#define LGAMHIEPIIP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E948EB0)
#define LGAMHIEPIIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E948EA0)
#define LGAMHIEPIIP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E949010)
#define LGAMHIEPIIP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E948F40)
#define LGAMHIEPIIP_FGGBMGCGCKF_OFFSET UNITYSDK_OFFSET(0x1E948F30)
#define LGAMHIEPIIP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E949180)
#define LGAMHIEPIIP_JAOPBIKPOMI_OFFSET UNITYSDK_OFFSET(0x1E948F20)
#define LGAMHIEPIIP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E948E60)
#define LGAMHIEPIIP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E949350)
#define LGAMHIEPIIP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E949320)
#define LGAMHIEPIIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E948E90)
#define LGAMHIEPIIP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9491B0)
#define LGAMHIEPIIP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E949210)

inline static constexpr unsigned int LGAMHIEPIIP_TypeDefinitionIndex = 31213;

	class LGAMHIEPIIP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AENFHPAGFOI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LGAMHIEPIIP")->GetStaticField(0x3D660);
		}

		// static const ::System::Object HLGEDBNIHII; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGAMHIEPIIP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LGAMHIEPIIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGAMHIEPIIP*))((::PBYTE)hIl2Cpp + LGAMHIEPIIP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGAMHIEPIIP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LGAMHIEPIIP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGAMHIEPIIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LGAMHIEPIIP* Clone()
		{
			return ((::LGAMHIEPIIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGAMHIEPIIP_CLONE_OFFSET))(this);
		}

		::System::UInt32 JAOPBIKPOMI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGAMHIEPIIP_JAOPBIKPOMI_OFFSET))(this);
		}

		::System::Void FGGBMGCGCKF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGAMHIEPIIP_FGGBMGCGCKF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LGAMHIEPIIP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LGAMHIEPIIP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGAMHIEPIIP*))((::PBYTE)hIl2Cpp + LGAMHIEPIIP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGAMHIEPIIP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGAMHIEPIIP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LGAMHIEPIIP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGAMHIEPIIP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LGAMHIEPIIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGAMHIEPIIP*))((::PBYTE)hIl2Cpp + LGAMHIEPIIP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LGAMHIEPIIP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
