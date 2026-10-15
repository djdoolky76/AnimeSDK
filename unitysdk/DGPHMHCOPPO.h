#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DGPHMHCOPPO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DGPHMHCOPPO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1844D0)
#define DGPHMHCOPPO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1846F0)
#define DGPHMHCOPPO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E184120)
#define DGPHMHCOPPO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1840F0)
#define DGPHMHCOPPO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1840E0)
#define DGPHMHCOPPO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E184250)
#define DGPHMHCOPPO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E184180)
#define DGPHMHCOPPO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1843C0)
#define DGPHMHCOPPO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1840A0)
#define DGPHMHCOPPO_JNFBHFOFHFO_OFFSET UNITYSDK_OFFSET(0x1E184170)
#define DGPHMHCOPPO_KLKAIAKLHMF_OFFSET UNITYSDK_OFFSET(0x1E184160)
#define DGPHMHCOPPO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E184590)
#define DGPHMHCOPPO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E184560)
#define DGPHMHCOPPO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1840D0)
#define DGPHMHCOPPO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1843F0)
#define DGPHMHCOPPO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E184450)

inline static constexpr unsigned int DGPHMHCOPPO_TypeDefinitionIndex = 34039;

	class DGPHMHCOPPO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AMOPIFLCGOO; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DGPHMHCOPPO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DGPHMHCOPPO*>**)UnitySDK::FromName("", "DGPHMHCOPPO")->GetStaticField(0x30610);
		}

		// static const ::System::Object KKHPBDAEOLM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGPHMHCOPPO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DGPHMHCOPPO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DGPHMHCOPPO*))((::PBYTE)hIl2Cpp + DGPHMHCOPPO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGPHMHCOPPO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DGPHMHCOPPO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DGPHMHCOPPO*>*(*)())((::PBYTE)hIl2Cpp + DGPHMHCOPPO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGPHMHCOPPO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DGPHMHCOPPO* Clone()
		{
			return ((::DGPHMHCOPPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGPHMHCOPPO_CLONE_OFFSET))(this);
		}

		::System::UInt32 KLKAIAKLHMF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGPHMHCOPPO_KLKAIAKLHMF_OFFSET))(this);
		}

		::System::Void JNFBHFOFHFO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DGPHMHCOPPO_JNFBHFOFHFO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DGPHMHCOPPO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DGPHMHCOPPO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DGPHMHCOPPO*))((::PBYTE)hIl2Cpp + DGPHMHCOPPO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGPHMHCOPPO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGPHMHCOPPO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DGPHMHCOPPO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGPHMHCOPPO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DGPHMHCOPPO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DGPHMHCOPPO*))((::PBYTE)hIl2Cpp + DGPHMHCOPPO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DGPHMHCOPPO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
