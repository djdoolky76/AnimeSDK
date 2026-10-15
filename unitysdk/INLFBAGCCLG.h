#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INLFBAGCCLG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define INLFBAGCCLG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E698620)
#define INLFBAGCCLG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6986C0)
#define INLFBAGCCLG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E698310)
#define INLFBAGCCLG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6982E0)
#define INLFBAGCCLG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6982D0)
#define INLFBAGCCLG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E698420)
#define INLFBAGCCLG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E698350)
#define INLFBAGCCLG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E698580)
#define INLFBAGCCLG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E698290)
#define INLFBAGCCLG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E698670)
#define INLFBAGCCLG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E698640)
#define INLFBAGCCLG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6982C0)
#define INLFBAGCCLG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6985B0)
#define INLFBAGCCLG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E698610)

inline static constexpr unsigned int INLFBAGCCLG_TypeDefinitionIndex = 32040;

	class INLFBAGCCLG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::INLFBAGCCLG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::INLFBAGCCLG*>**)UnitySDK::FromName("", "INLFBAGCCLG")->GetStaticField(0x53E60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INLFBAGCCLG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::INLFBAGCCLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INLFBAGCCLG*))((::PBYTE)hIl2Cpp + INLFBAGCCLG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INLFBAGCCLG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::INLFBAGCCLG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::INLFBAGCCLG*>*(*)())((::PBYTE)hIl2Cpp + INLFBAGCCLG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + INLFBAGCCLG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::INLFBAGCCLG* Clone()
		{
			return ((::INLFBAGCCLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + INLFBAGCCLG_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INLFBAGCCLG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::INLFBAGCCLG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::INLFBAGCCLG*))((::PBYTE)hIl2Cpp + INLFBAGCCLG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INLFBAGCCLG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INLFBAGCCLG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + INLFBAGCCLG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INLFBAGCCLG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::INLFBAGCCLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INLFBAGCCLG*))((::PBYTE)hIl2Cpp + INLFBAGCCLG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + INLFBAGCCLG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
