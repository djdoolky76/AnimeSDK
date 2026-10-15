#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJHDAJAGFIJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EJHDAJAGFIJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2B67F0)
#define EJHDAJAGFIJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2B6A50)
#define EJHDAJAGFIJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2B63A0)
#define EJHDAJAGFIJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2B6360)
#define EJHDAJAGFIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2B6350)
#define EJHDAJAGFIJ_EDONLEAOOIJ_OFFSET UNITYSDK_OFFSET(0x1E2B6420)
#define EJHDAJAGFIJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2B6570)
#define EJHDAJAGFIJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2B6460)
#define EJHDAJAGFIJ_FDNANEGDBLH_OFFSET UNITYSDK_OFFSET(0x1E2B6430)
#define EJHDAJAGFIJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2B6650)
#define EJHDAJAGFIJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2B62E0)
#define EJHDAJAGFIJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2B68D0)
#define EJHDAJAGFIJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2B6890)
#define EJHDAJAGFIJ_OAGFOAEFDOA_OFFSET UNITYSDK_OFFSET(0x1E2B6440)
#define EJHDAJAGFIJ_OIOMLNOPAON_OFFSET UNITYSDK_OFFSET(0x1E2B6450)
#define EJHDAJAGFIJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2B6340)
#define EJHDAJAGFIJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2B6680)
#define EJHDAJAGFIJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2B66E0)

inline static constexpr unsigned int EJHDAJAGFIJ_TypeDefinitionIndex = 33521;

	class EJHDAJAGFIJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LLJBFIOJHCG; // 0x18
		::System::Boolean LOEPIAFBCIJ; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EJHDAJAGFIJ")->GetStaticField(0x4B710);
		}

		// static const ::System::Object IICCJCDPLHO; // 0x0
		// static const ::System::Object OPKLCINAFJC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHDAJAGFIJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EJHDAJAGFIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJHDAJAGFIJ*))((::PBYTE)hIl2Cpp + EJHDAJAGFIJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJHDAJAGFIJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EJHDAJAGFIJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHDAJAGFIJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EJHDAJAGFIJ* Clone()
		{
			return ((::EJHDAJAGFIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHDAJAGFIJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 EDONLEAOOIJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHDAJAGFIJ_EDONLEAOOIJ_OFFSET))(this);
		}

		::System::Void FDNANEGDBLH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EJHDAJAGFIJ_FDNANEGDBLH_OFFSET))(this, a1);
		}

		::System::Boolean OAGFOAEFDOA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHDAJAGFIJ_OAGFOAEFDOA_OFFSET))(this);
		}

		::System::Void OIOMLNOPAON(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EJHDAJAGFIJ_OIOMLNOPAON_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EJHDAJAGFIJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EJHDAJAGFIJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EJHDAJAGFIJ*))((::PBYTE)hIl2Cpp + EJHDAJAGFIJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHDAJAGFIJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHDAJAGFIJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EJHDAJAGFIJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHDAJAGFIJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EJHDAJAGFIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJHDAJAGFIJ*))((::PBYTE)hIl2Cpp + EJHDAJAGFIJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EJHDAJAGFIJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
