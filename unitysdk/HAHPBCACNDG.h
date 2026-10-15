#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HAHPBCACNDG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HAHPBCACNDG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E504E10)
#define HAHPBCACNDG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E504EB0)
#define HAHPBCACNDG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E504B00)
#define HAHPBCACNDG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E504AD0)
#define HAHPBCACNDG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E504AC0)
#define HAHPBCACNDG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E504C10)
#define HAHPBCACNDG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E504B40)
#define HAHPBCACNDG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E504D70)
#define HAHPBCACNDG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E504A80)
#define HAHPBCACNDG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E504E60)
#define HAHPBCACNDG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E504E30)
#define HAHPBCACNDG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E504AB0)
#define HAHPBCACNDG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E504DA0)
#define HAHPBCACNDG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E504E00)

inline static constexpr unsigned int HAHPBCACNDG_TypeDefinitionIndex = 27419;

	class HAHPBCACNDG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::HAHPBCACNDG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HAHPBCACNDG*>**)UnitySDK::FromName("", "HAHPBCACNDG")->GetStaticField(0x2CB80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAHPBCACNDG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HAHPBCACNDG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HAHPBCACNDG*))((::PBYTE)hIl2Cpp + HAHPBCACNDG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAHPBCACNDG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HAHPBCACNDG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HAHPBCACNDG*>*(*)())((::PBYTE)hIl2Cpp + HAHPBCACNDG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAHPBCACNDG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HAHPBCACNDG* Clone()
		{
			return ((::HAHPBCACNDG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAHPBCACNDG_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HAHPBCACNDG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HAHPBCACNDG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAHPBCACNDG*))((::PBYTE)hIl2Cpp + HAHPBCACNDG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAHPBCACNDG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAHPBCACNDG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HAHPBCACNDG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAHPBCACNDG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HAHPBCACNDG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HAHPBCACNDG*))((::PBYTE)hIl2Cpp + HAHPBCACNDG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HAHPBCACNDG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
