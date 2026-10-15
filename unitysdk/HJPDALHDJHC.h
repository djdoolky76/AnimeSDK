#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HJPDALHDJHC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HJPDALHDJHC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E57FF20)
#define HJPDALHDJHC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E57FFC0)
#define HJPDALHDJHC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E57FBC0)
#define HJPDALHDJHC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E57FB90)
#define HJPDALHDJHC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E57FB80)
#define HJPDALHDJHC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E57FD20)
#define HJPDALHDJHC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E57FC30)
#define HJPDALHDJHC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E57FE80)
#define HJPDALHDJHC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E57FB10)
#define HJPDALHDJHC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E57FF70)
#define HJPDALHDJHC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E57FF40)
#define HJPDALHDJHC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E57FB70)
#define HJPDALHDJHC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E57FEB0)
#define HJPDALHDJHC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E57FF10)

inline static constexpr unsigned int HJPDALHDJHC_TypeDefinitionIndex = 29482;

	class HJPDALHDJHC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::HJPDALHDJHC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HJPDALHDJHC*>**)UnitySDK::FromName("", "HJPDALHDJHC")->GetStaticField(0x36640);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPDALHDJHC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HJPDALHDJHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJPDALHDJHC*))((::PBYTE)hIl2Cpp + HJPDALHDJHC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJPDALHDJHC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HJPDALHDJHC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HJPDALHDJHC*>*(*)())((::PBYTE)hIl2Cpp + HJPDALHDJHC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPDALHDJHC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HJPDALHDJHC* Clone()
		{
			return ((::HJPDALHDJHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPDALHDJHC_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HJPDALHDJHC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HJPDALHDJHC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HJPDALHDJHC*))((::PBYTE)hIl2Cpp + HJPDALHDJHC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPDALHDJHC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPDALHDJHC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HJPDALHDJHC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPDALHDJHC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HJPDALHDJHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJPDALHDJHC*))((::PBYTE)hIl2Cpp + HJPDALHDJHC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HJPDALHDJHC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
