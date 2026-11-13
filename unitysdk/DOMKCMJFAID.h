#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DOMKCMJFAID;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DOMKCMJFAID_AMEKLCPENBN_OFFSET UNITYSDK_OFFSET(0x1F75DFF0)
#define DOMKCMJFAID_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F75E390)
#define DOMKCMJFAID_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F75E5B0)
#define DOMKCMJFAID_CLONE_OFFSET UNITYSDK_OFFSET(0x1F75DF80)
#define DOMKCMJFAID_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F75DF50)
#define DOMKCMJFAID_CTOR_OFFSET UNITYSDK_OFFSET(0x1F75DF40)
#define DOMKCMJFAID_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F75E110)
#define DOMKCMJFAID_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F75E010)
#define DOMKCMJFAID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F75E280)
#define DOMKCMJFAID_GMJIJMKMEAF_OFFSET UNITYSDK_OFFSET(0x1F75E000)
#define DOMKCMJFAID_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F75DED0)
#define DOMKCMJFAID_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F75E450)
#define DOMKCMJFAID_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F75E420)
#define DOMKCMJFAID_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F75DF30)
#define DOMKCMJFAID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F75E2B0)
#define DOMKCMJFAID_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F75E310)

inline static constexpr unsigned int DOMKCMJFAID_TypeDefinitionIndex = 29961;

	class DOMKCMJFAID : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BPGAKBFBLON; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DOMKCMJFAID*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DOMKCMJFAID*>**)UnitySDK::FromName("", "DOMKCMJFAID")->GetStaticField(0x38F40);
		}

		// static const ::System::Object GPEIDPKBLEG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOMKCMJFAID_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DOMKCMJFAID* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DOMKCMJFAID*))((::PBYTE)hIl2Cpp + DOMKCMJFAID_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOMKCMJFAID_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DOMKCMJFAID*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DOMKCMJFAID*>*(*)())((::PBYTE)hIl2Cpp + DOMKCMJFAID_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOMKCMJFAID_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DOMKCMJFAID* Clone()
		{
			return ((::DOMKCMJFAID*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOMKCMJFAID_CLONE_OFFSET))(this);
		}

		::System::UInt32 AMEKLCPENBN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOMKCMJFAID_AMEKLCPENBN_OFFSET))(this);
		}

		::System::Void GMJIJMKMEAF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DOMKCMJFAID_GMJIJMKMEAF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DOMKCMJFAID_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DOMKCMJFAID* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DOMKCMJFAID*))((::PBYTE)hIl2Cpp + DOMKCMJFAID_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOMKCMJFAID_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOMKCMJFAID_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DOMKCMJFAID_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOMKCMJFAID_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DOMKCMJFAID* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DOMKCMJFAID*))((::PBYTE)hIl2Cpp + DOMKCMJFAID_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DOMKCMJFAID_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
