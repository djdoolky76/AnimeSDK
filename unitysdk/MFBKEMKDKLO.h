#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MFBKEMKDKLO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MFBKEMKDKLO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9E7C90)
#define MFBKEMKDKLO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9E7D30)
#define MFBKEMKDKLO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9E7980)
#define MFBKEMKDKLO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9E7950)
#define MFBKEMKDKLO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9E7940)
#define MFBKEMKDKLO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9E7A90)
#define MFBKEMKDKLO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9E79C0)
#define MFBKEMKDKLO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9E7BF0)
#define MFBKEMKDKLO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9E7900)
#define MFBKEMKDKLO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9E7CE0)
#define MFBKEMKDKLO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9E7CB0)
#define MFBKEMKDKLO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9E7930)
#define MFBKEMKDKLO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9E7C20)
#define MFBKEMKDKLO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9E7C80)

inline static constexpr unsigned int MFBKEMKDKLO_TypeDefinitionIndex = 28215;

	class MFBKEMKDKLO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::MFBKEMKDKLO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MFBKEMKDKLO*>**)UnitySDK::FromName("", "MFBKEMKDKLO")->GetStaticField(0x4E7D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBKEMKDKLO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MFBKEMKDKLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MFBKEMKDKLO*))((::PBYTE)hIl2Cpp + MFBKEMKDKLO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFBKEMKDKLO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MFBKEMKDKLO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MFBKEMKDKLO*>*(*)())((::PBYTE)hIl2Cpp + MFBKEMKDKLO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBKEMKDKLO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MFBKEMKDKLO* Clone()
		{
			return ((::MFBKEMKDKLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBKEMKDKLO_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MFBKEMKDKLO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MFBKEMKDKLO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MFBKEMKDKLO*))((::PBYTE)hIl2Cpp + MFBKEMKDKLO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBKEMKDKLO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBKEMKDKLO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MFBKEMKDKLO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBKEMKDKLO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MFBKEMKDKLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MFBKEMKDKLO*))((::PBYTE)hIl2Cpp + MFBKEMKDKLO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MFBKEMKDKLO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
