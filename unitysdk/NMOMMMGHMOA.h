#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMOMMMGHMOA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NMOMMMGHMOA_AFAKLHKJCLI_OFFSET UNITYSDK_OFFSET(0x1EB7B400)
#define NMOMMMGHMOA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB7B780)
#define NMOMMMGHMOA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB7B9E0)
#define NMOMMMGHMOA_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB7B390)
#define NMOMMMGHMOA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB7B350)
#define NMOMMMGHMOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB7B340)
#define NMOMMMGHMOA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB7B500)
#define NMOMMMGHMOA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB7B420)
#define NMOMMMGHMOA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB7B5E0)
#define NMOMMMGHMOA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB7B300)
#define NMOMMMGHMOA_MDOGANFKFID_OFFSET UNITYSDK_OFFSET(0x1EB7B3F0)
#define NMOMMMGHMOA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB7B860)
#define NMOMMMGHMOA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB7B820)
#define NMOMMMGHMOA_NPAENPLOGPP_OFFSET UNITYSDK_OFFSET(0x1EB7B410)
#define NMOMMMGHMOA_OHFAFGMOMEI_OFFSET UNITYSDK_OFFSET(0x1EB7B3E0)
#define NMOMMMGHMOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB7B330)
#define NMOMMMGHMOA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB7B610)
#define NMOMMMGHMOA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB7B670)

inline static constexpr unsigned int NMOMMMGHMOA_TypeDefinitionIndex = 33547;

	class NMOMMMGHMOA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean EEFPMEKJLEB; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 DHDFOMGAOME; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NMOMMMGHMOA")->GetStaticField(0x1310);
		}

		// static const ::System::Object OBPJACJDNLJ; // 0x0
		// static const ::System::Object APGDDELCFJE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMOMMMGHMOA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NMOMMMGHMOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMOMMMGHMOA*))((::PBYTE)hIl2Cpp + NMOMMMGHMOA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMOMMMGHMOA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NMOMMMGHMOA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMOMMMGHMOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NMOMMMGHMOA* Clone()
		{
			return ((::NMOMMMGHMOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMOMMMGHMOA_CLONE_OFFSET))(this);
		}

		::System::Boolean OHFAFGMOMEI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NMOMMMGHMOA_OHFAFGMOMEI_OFFSET))(this);
		}

		::System::Void MDOGANFKFID(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NMOMMMGHMOA_MDOGANFKFID_OFFSET))(this, a1);
		}

		::System::UInt32 AFAKLHKJCLI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMOMMMGHMOA_AFAKLHKJCLI_OFFSET))(this);
		}

		::System::Void NPAENPLOGPP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NMOMMMGHMOA_NPAENPLOGPP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NMOMMMGHMOA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NMOMMMGHMOA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NMOMMMGHMOA*))((::PBYTE)hIl2Cpp + NMOMMMGHMOA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMOMMMGHMOA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMOMMMGHMOA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NMOMMMGHMOA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMOMMMGHMOA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NMOMMMGHMOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMOMMMGHMOA*))((::PBYTE)hIl2Cpp + NMOMMMGHMOA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NMOMMMGHMOA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
