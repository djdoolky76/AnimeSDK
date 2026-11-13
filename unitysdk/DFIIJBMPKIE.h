#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFIIJBMPKIE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DFIIJBMPKIE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FFB5BC0)
#define DFIIJBMPKIE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FFB5DE0)
#define DFIIJBMPKIE_CLONE_OFFSET UNITYSDK_OFFSET(0x1FFB57B0)
#define DFIIJBMPKIE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FFB5780)
#define DFIIJBMPKIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1FFB5770)
#define DFIIJBMPKIE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FFB5940)
#define DFIIJBMPKIE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FFB5840)
#define DFIIJBMPKIE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FFB5AB0)
#define DFIIJBMPKIE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FFB5700)
#define DFIIJBMPKIE_LEIKCAJDHPD_OFFSET UNITYSDK_OFFSET(0x1FFB5830)
#define DFIIJBMPKIE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FFB5C80)
#define DFIIJBMPKIE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FFB5C50)
#define DFIIJBMPKIE_NOFJKOGEFFG_OFFSET UNITYSDK_OFFSET(0x1FFB5820)
#define DFIIJBMPKIE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FFB5760)
#define DFIIJBMPKIE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FFB5AE0)
#define DFIIJBMPKIE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FFB5B40)

inline static constexpr unsigned int DFIIJBMPKIE_TypeDefinitionIndex = 30143;

	class DFIIJBMPKIE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PJGGJMOFIHC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DFIIJBMPKIE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DFIIJBMPKIE*>**)UnitySDK::FromName("", "DFIIJBMPKIE")->GetStaticField(0x28930);
		}

		// static const ::System::Object IEPMFABLOIA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFIIJBMPKIE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DFIIJBMPKIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFIIJBMPKIE*))((::PBYTE)hIl2Cpp + DFIIJBMPKIE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFIIJBMPKIE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DFIIJBMPKIE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DFIIJBMPKIE*>*(*)())((::PBYTE)hIl2Cpp + DFIIJBMPKIE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFIIJBMPKIE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DFIIJBMPKIE* Clone()
		{
			return ((::DFIIJBMPKIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFIIJBMPKIE_CLONE_OFFSET))(this);
		}

		::System::UInt32 NOFJKOGEFFG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFIIJBMPKIE_NOFJKOGEFFG_OFFSET))(this);
		}

		::System::Void LEIKCAJDHPD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DFIIJBMPKIE_LEIKCAJDHPD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DFIIJBMPKIE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DFIIJBMPKIE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DFIIJBMPKIE*))((::PBYTE)hIl2Cpp + DFIIJBMPKIE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFIIJBMPKIE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFIIJBMPKIE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DFIIJBMPKIE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFIIJBMPKIE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DFIIJBMPKIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFIIJBMPKIE*))((::PBYTE)hIl2Cpp + DFIIJBMPKIE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DFIIJBMPKIE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
