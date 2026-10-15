#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HNANALOFHKL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HNANALOFHKL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5D7850)
#define HNANALOFHKL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5D78F0)
#define HNANALOFHKL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5D7540)
#define HNANALOFHKL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5D7510)
#define HNANALOFHKL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5D7500)
#define HNANALOFHKL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5D7650)
#define HNANALOFHKL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5D7580)
#define HNANALOFHKL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5D77B0)
#define HNANALOFHKL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5D74C0)
#define HNANALOFHKL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5D78A0)
#define HNANALOFHKL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5D7870)
#define HNANALOFHKL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5D74F0)
#define HNANALOFHKL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5D77E0)
#define HNANALOFHKL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5D7840)

inline static constexpr unsigned int HNANALOFHKL_TypeDefinitionIndex = 34445;

	class HNANALOFHKL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::HNANALOFHKL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HNANALOFHKL*>**)UnitySDK::FromName("", "HNANALOFHKL")->GetStaticField(0x4B130);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNANALOFHKL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HNANALOFHKL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNANALOFHKL*))((::PBYTE)hIl2Cpp + HNANALOFHKL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNANALOFHKL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HNANALOFHKL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HNANALOFHKL*>*(*)())((::PBYTE)hIl2Cpp + HNANALOFHKL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNANALOFHKL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HNANALOFHKL* Clone()
		{
			return ((::HNANALOFHKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNANALOFHKL_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HNANALOFHKL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HNANALOFHKL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HNANALOFHKL*))((::PBYTE)hIl2Cpp + HNANALOFHKL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNANALOFHKL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNANALOFHKL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HNANALOFHKL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNANALOFHKL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HNANALOFHKL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNANALOFHKL*))((::PBYTE)hIl2Cpp + HNANALOFHKL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HNANALOFHKL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
