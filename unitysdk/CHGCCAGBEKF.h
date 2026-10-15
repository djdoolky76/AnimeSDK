#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHGCCAGBEKF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CHGCCAGBEKF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E098840)
#define CHGCCAGBEKF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E098A60)
#define CHGCCAGBEKF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E098490)
#define CHGCCAGBEKF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E098460)
#define CHGCCAGBEKF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E098450)
#define CHGCCAGBEKF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0985C0)
#define CHGCCAGBEKF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0984F0)
#define CHGCCAGBEKF_FJLENKEAHEN_OFFSET UNITYSDK_OFFSET(0x1E0984E0)
#define CHGCCAGBEKF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E098730)
#define CHGCCAGBEKF_JHEGBMMFLFK_OFFSET UNITYSDK_OFFSET(0x1E0984D0)
#define CHGCCAGBEKF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E098410)
#define CHGCCAGBEKF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E098900)
#define CHGCCAGBEKF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0988D0)
#define CHGCCAGBEKF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E098440)
#define CHGCCAGBEKF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E098760)
#define CHGCCAGBEKF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0987C0)

inline static constexpr unsigned int CHGCCAGBEKF_TypeDefinitionIndex = 34572;

	class CHGCCAGBEKF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MJLJNCEJAMP; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CHGCCAGBEKF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CHGCCAGBEKF*>**)UnitySDK::FromName("", "CHGCCAGBEKF")->GetStaticField(0x157A0);
		}

		// static const ::System::Object NNLOBPKKJIJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGCCAGBEKF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CHGCCAGBEKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHGCCAGBEKF*))((::PBYTE)hIl2Cpp + CHGCCAGBEKF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHGCCAGBEKF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CHGCCAGBEKF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CHGCCAGBEKF*>*(*)())((::PBYTE)hIl2Cpp + CHGCCAGBEKF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGCCAGBEKF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CHGCCAGBEKF* Clone()
		{
			return ((::CHGCCAGBEKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGCCAGBEKF_CLONE_OFFSET))(this);
		}

		::System::UInt32 JHEGBMMFLFK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGCCAGBEKF_JHEGBMMFLFK_OFFSET))(this);
		}

		::System::Void FJLENKEAHEN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CHGCCAGBEKF_FJLENKEAHEN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CHGCCAGBEKF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CHGCCAGBEKF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CHGCCAGBEKF*))((::PBYTE)hIl2Cpp + CHGCCAGBEKF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGCCAGBEKF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGCCAGBEKF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CHGCCAGBEKF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGCCAGBEKF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CHGCCAGBEKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHGCCAGBEKF*))((::PBYTE)hIl2Cpp + CHGCCAGBEKF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CHGCCAGBEKF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
