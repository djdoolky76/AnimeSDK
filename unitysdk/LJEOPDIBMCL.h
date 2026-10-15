#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJEOPDIBMCL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LJEOPDIBMCL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E97ADE0)
#define LJEOPDIBMCL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E97AE80)
#define LJEOPDIBMCL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E97AAD0)
#define LJEOPDIBMCL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E97AAA0)
#define LJEOPDIBMCL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E97AA90)
#define LJEOPDIBMCL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E97ABE0)
#define LJEOPDIBMCL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E97AB10)
#define LJEOPDIBMCL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E97AD40)
#define LJEOPDIBMCL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E97AA50)
#define LJEOPDIBMCL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E97AE30)
#define LJEOPDIBMCL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E97AE00)
#define LJEOPDIBMCL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E97AA80)
#define LJEOPDIBMCL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E97AD70)
#define LJEOPDIBMCL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E97ADD0)

inline static constexpr unsigned int LJEOPDIBMCL_TypeDefinitionIndex = 34283;

	class LJEOPDIBMCL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::LJEOPDIBMCL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LJEOPDIBMCL*>**)UnitySDK::FromName("", "LJEOPDIBMCL")->GetStaticField(0x46FD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEOPDIBMCL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LJEOPDIBMCL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJEOPDIBMCL*))((::PBYTE)hIl2Cpp + LJEOPDIBMCL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJEOPDIBMCL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LJEOPDIBMCL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LJEOPDIBMCL*>*(*)())((::PBYTE)hIl2Cpp + LJEOPDIBMCL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEOPDIBMCL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LJEOPDIBMCL* Clone()
		{
			return ((::LJEOPDIBMCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEOPDIBMCL_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LJEOPDIBMCL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LJEOPDIBMCL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LJEOPDIBMCL*))((::PBYTE)hIl2Cpp + LJEOPDIBMCL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEOPDIBMCL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEOPDIBMCL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LJEOPDIBMCL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEOPDIBMCL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LJEOPDIBMCL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJEOPDIBMCL*))((::PBYTE)hIl2Cpp + LJEOPDIBMCL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LJEOPDIBMCL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
