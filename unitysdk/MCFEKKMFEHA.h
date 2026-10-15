#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MCFEKKMFEHA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MCFEKKMFEHA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9C74C0)
#define MCFEKKMFEHA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9C7560)
#define MCFEKKMFEHA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9C7160)
#define MCFEKKMFEHA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9C7130)
#define MCFEKKMFEHA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9C7120)
#define MCFEKKMFEHA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9C72C0)
#define MCFEKKMFEHA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9C71D0)
#define MCFEKKMFEHA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9C7420)
#define MCFEKKMFEHA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9C70B0)
#define MCFEKKMFEHA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9C7510)
#define MCFEKKMFEHA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9C74E0)
#define MCFEKKMFEHA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9C7110)
#define MCFEKKMFEHA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9C7450)
#define MCFEKKMFEHA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9C74B0)

inline static constexpr unsigned int MCFEKKMFEHA_TypeDefinitionIndex = 33111;

	class MCFEKKMFEHA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::MCFEKKMFEHA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MCFEKKMFEHA*>**)UnitySDK::FromName("", "MCFEKKMFEHA")->GetStaticField(0x49C80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCFEKKMFEHA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MCFEKKMFEHA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MCFEKKMFEHA*))((::PBYTE)hIl2Cpp + MCFEKKMFEHA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCFEKKMFEHA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MCFEKKMFEHA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MCFEKKMFEHA*>*(*)())((::PBYTE)hIl2Cpp + MCFEKKMFEHA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCFEKKMFEHA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MCFEKKMFEHA* Clone()
		{
			return ((::MCFEKKMFEHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCFEKKMFEHA_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MCFEKKMFEHA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MCFEKKMFEHA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MCFEKKMFEHA*))((::PBYTE)hIl2Cpp + MCFEKKMFEHA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCFEKKMFEHA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCFEKKMFEHA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MCFEKKMFEHA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCFEKKMFEHA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MCFEKKMFEHA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MCFEKKMFEHA*))((::PBYTE)hIl2Cpp + MCFEKKMFEHA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MCFEKKMFEHA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
