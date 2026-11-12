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

#define IBDDBLNJFPF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F90E950)
#define IBDDBLNJFPF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F90E9F0)
#define IBDDBLNJFPF_CLONE_OFFSET UNITYSDK_OFFSET(0x1F90E640)
#define IBDDBLNJFPF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F90E610)
#define IBDDBLNJFPF_CTOR_OFFSET UNITYSDK_OFFSET(0x1F90E600)
#define IBDDBLNJFPF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F90E750)
#define IBDDBLNJFPF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F90E680)
#define IBDDBLNJFPF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F90E8B0)
#define IBDDBLNJFPF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F90E5C0)
#define IBDDBLNJFPF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F90E9A0)
#define IBDDBLNJFPF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F90E970)
#define IBDDBLNJFPF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F90E5F0)
#define IBDDBLNJFPF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F90E8E0)
#define IBDDBLNJFPF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F90E940)

inline static constexpr unsigned int IBDDBLNJFPF_TypeDefinitionIndex = 26563;

	class IBDDBLNJFPF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::IBDDBLNJFPF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IBDDBLNJFPF*>**)UnitySDK::FromName("", "IBDDBLNJFPF")->GetStaticField(0x47F20);
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
