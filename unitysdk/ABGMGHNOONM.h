#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABGMGHNOONM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ABGMGHNOONM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDCC480)
#define ABGMGHNOONM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDCC520)
#define ABGMGHNOONM_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDCC170)
#define ABGMGHNOONM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDCC140)
#define ABGMGHNOONM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDCC130)
#define ABGMGHNOONM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDCC280)
#define ABGMGHNOONM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDCC1B0)
#define ABGMGHNOONM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDCC3E0)
#define ABGMGHNOONM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDCC0F0)
#define ABGMGHNOONM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDCC4D0)
#define ABGMGHNOONM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDCC4A0)
#define ABGMGHNOONM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDCC120)
#define ABGMGHNOONM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDCC410)
#define ABGMGHNOONM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDCC470)

inline static constexpr unsigned int ABGMGHNOONM_TypeDefinitionIndex = 28819;

	class ABGMGHNOONM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ABGMGHNOONM")->GetStaticField(0x393F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABGMGHNOONM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ABGMGHNOONM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABGMGHNOONM*))((::PBYTE)hIl2Cpp + ABGMGHNOONM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABGMGHNOONM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ABGMGHNOONM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABGMGHNOONM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ABGMGHNOONM* Clone()
		{
			return ((::ABGMGHNOONM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABGMGHNOONM_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ABGMGHNOONM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ABGMGHNOONM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABGMGHNOONM*))((::PBYTE)hIl2Cpp + ABGMGHNOONM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABGMGHNOONM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABGMGHNOONM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ABGMGHNOONM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABGMGHNOONM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ABGMGHNOONM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABGMGHNOONM*))((::PBYTE)hIl2Cpp + ABGMGHNOONM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ABGMGHNOONM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
