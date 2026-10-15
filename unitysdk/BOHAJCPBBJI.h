#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOHAJCPBBJI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BOHAJCPBBJI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E00DD30)
#define BOHAJCPBBJI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E00DDD0)
#define BOHAJCPBBJI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E00D9D0)
#define BOHAJCPBBJI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E00D9A0)
#define BOHAJCPBBJI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E00D990)
#define BOHAJCPBBJI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E00DB30)
#define BOHAJCPBBJI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E00DA40)
#define BOHAJCPBBJI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E00DC90)
#define BOHAJCPBBJI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E00D920)
#define BOHAJCPBBJI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E00DD80)
#define BOHAJCPBBJI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E00DD50)
#define BOHAJCPBBJI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E00D980)
#define BOHAJCPBBJI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E00DCC0)
#define BOHAJCPBBJI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E00DD20)

inline static constexpr unsigned int BOHAJCPBBJI_TypeDefinitionIndex = 33160;

	class BOHAJCPBBJI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::BOHAJCPBBJI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BOHAJCPBBJI*>**)UnitySDK::FromName("", "BOHAJCPBBJI")->GetStaticField(0x5DF80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOHAJCPBBJI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BOHAJCPBBJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOHAJCPBBJI*))((::PBYTE)hIl2Cpp + BOHAJCPBBJI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOHAJCPBBJI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BOHAJCPBBJI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BOHAJCPBBJI*>*(*)())((::PBYTE)hIl2Cpp + BOHAJCPBBJI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOHAJCPBBJI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BOHAJCPBBJI* Clone()
		{
			return ((::BOHAJCPBBJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOHAJCPBBJI_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BOHAJCPBBJI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BOHAJCPBBJI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BOHAJCPBBJI*))((::PBYTE)hIl2Cpp + BOHAJCPBBJI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOHAJCPBBJI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOHAJCPBBJI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BOHAJCPBBJI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOHAJCPBBJI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BOHAJCPBBJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOHAJCPBBJI*))((::PBYTE)hIl2Cpp + BOHAJCPBBJI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BOHAJCPBBJI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
