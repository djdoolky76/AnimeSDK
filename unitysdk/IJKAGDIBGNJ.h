#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IJKAGDIBGNJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IJKAGDIBGNJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E669100)
#define IJKAGDIBGNJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6691A0)
#define IJKAGDIBGNJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E668DF0)
#define IJKAGDIBGNJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E668DC0)
#define IJKAGDIBGNJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E668DB0)
#define IJKAGDIBGNJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E668F00)
#define IJKAGDIBGNJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E668E30)
#define IJKAGDIBGNJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E669060)
#define IJKAGDIBGNJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E668D70)
#define IJKAGDIBGNJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E669150)
#define IJKAGDIBGNJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E669120)
#define IJKAGDIBGNJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E668DA0)
#define IJKAGDIBGNJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E669090)
#define IJKAGDIBGNJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6690F0)

inline static constexpr unsigned int IJKAGDIBGNJ_TypeDefinitionIndex = 26894;

	class IJKAGDIBGNJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::IJKAGDIBGNJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IJKAGDIBGNJ*>**)UnitySDK::FromName("", "IJKAGDIBGNJ")->GetStaticField(0x4F700);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJKAGDIBGNJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IJKAGDIBGNJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJKAGDIBGNJ*))((::PBYTE)hIl2Cpp + IJKAGDIBGNJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJKAGDIBGNJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IJKAGDIBGNJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IJKAGDIBGNJ*>*(*)())((::PBYTE)hIl2Cpp + IJKAGDIBGNJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJKAGDIBGNJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IJKAGDIBGNJ* Clone()
		{
			return ((::IJKAGDIBGNJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJKAGDIBGNJ_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IJKAGDIBGNJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IJKAGDIBGNJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IJKAGDIBGNJ*))((::PBYTE)hIl2Cpp + IJKAGDIBGNJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJKAGDIBGNJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJKAGDIBGNJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IJKAGDIBGNJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJKAGDIBGNJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IJKAGDIBGNJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJKAGDIBGNJ*))((::PBYTE)hIl2Cpp + IJKAGDIBGNJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IJKAGDIBGNJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
