#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBDDBLNJFPF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IBDDBLNJFPF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5E41E0)
#define IBDDBLNJFPF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5E4280)
#define IBDDBLNJFPF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5E3ED0)
#define IBDDBLNJFPF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5E3EA0)
#define IBDDBLNJFPF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5E3E90)
#define IBDDBLNJFPF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5E3FE0)
#define IBDDBLNJFPF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5E3F10)
#define IBDDBLNJFPF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5E4140)
#define IBDDBLNJFPF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5E3E50)
#define IBDDBLNJFPF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5E4230)
#define IBDDBLNJFPF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5E4200)
#define IBDDBLNJFPF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5E3E80)
#define IBDDBLNJFPF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5E4170)
#define IBDDBLNJFPF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5E41D0)

inline static constexpr unsigned int IBDDBLNJFPF_TypeDefinitionIndex = 26036;

	class IBDDBLNJFPF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::IBDDBLNJFPF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IBDDBLNJFPF*>**)UnitySDK::FromName("", "IBDDBLNJFPF")->GetStaticField(0x42CC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBDDBLNJFPF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IBDDBLNJFPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBDDBLNJFPF*))((::PBYTE)hIl2Cpp + IBDDBLNJFPF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBDDBLNJFPF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IBDDBLNJFPF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IBDDBLNJFPF*>*(*)())((::PBYTE)hIl2Cpp + IBDDBLNJFPF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBDDBLNJFPF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IBDDBLNJFPF* Clone()
		{
			return ((::IBDDBLNJFPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBDDBLNJFPF_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IBDDBLNJFPF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IBDDBLNJFPF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IBDDBLNJFPF*))((::PBYTE)hIl2Cpp + IBDDBLNJFPF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBDDBLNJFPF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBDDBLNJFPF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IBDDBLNJFPF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBDDBLNJFPF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IBDDBLNJFPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBDDBLNJFPF*))((::PBYTE)hIl2Cpp + IBDDBLNJFPF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IBDDBLNJFPF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
