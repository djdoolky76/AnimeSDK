#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDHHAGAANBG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CDHHAGAANBG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0850F0)
#define CDHHAGAANBG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E085190)
#define CDHHAGAANBG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E084DE0)
#define CDHHAGAANBG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E084DB0)
#define CDHHAGAANBG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E084DA0)
#define CDHHAGAANBG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E084EF0)
#define CDHHAGAANBG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E084E20)
#define CDHHAGAANBG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E085050)
#define CDHHAGAANBG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E084D60)
#define CDHHAGAANBG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E085140)
#define CDHHAGAANBG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E085110)
#define CDHHAGAANBG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E084D90)
#define CDHHAGAANBG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E085080)
#define CDHHAGAANBG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0850E0)

inline static constexpr unsigned int CDHHAGAANBG_TypeDefinitionIndex = 32180;

	class CDHHAGAANBG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CDHHAGAANBG")->GetStaticField(0xF150);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDHHAGAANBG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CDHHAGAANBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDHHAGAANBG*))((::PBYTE)hIl2Cpp + CDHHAGAANBG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDHHAGAANBG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CDHHAGAANBG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDHHAGAANBG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CDHHAGAANBG* Clone()
		{
			return ((::CDHHAGAANBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDHHAGAANBG_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CDHHAGAANBG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CDHHAGAANBG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CDHHAGAANBG*))((::PBYTE)hIl2Cpp + CDHHAGAANBG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDHHAGAANBG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDHHAGAANBG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CDHHAGAANBG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDHHAGAANBG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CDHHAGAANBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDHHAGAANBG*))((::PBYTE)hIl2Cpp + CDHHAGAANBG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CDHHAGAANBG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
