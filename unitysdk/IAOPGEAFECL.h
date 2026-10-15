#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IAOPGEAFECL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IAOPGEAFECL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5DFA50)
#define IAOPGEAFECL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5DFAF0)
#define IAOPGEAFECL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5DF740)
#define IAOPGEAFECL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5DF710)
#define IAOPGEAFECL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5DF700)
#define IAOPGEAFECL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5DF850)
#define IAOPGEAFECL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5DF780)
#define IAOPGEAFECL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5DF9B0)
#define IAOPGEAFECL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5DF6C0)
#define IAOPGEAFECL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5DFAA0)
#define IAOPGEAFECL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5DFA70)
#define IAOPGEAFECL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5DF6F0)
#define IAOPGEAFECL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5DF9E0)
#define IAOPGEAFECL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5DFA40)

inline static constexpr unsigned int IAOPGEAFECL_TypeDefinitionIndex = 31666;

	class IAOPGEAFECL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::IAOPGEAFECL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IAOPGEAFECL*>**)UnitySDK::FromName("", "IAOPGEAFECL")->GetStaticField(0x41E40);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAOPGEAFECL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IAOPGEAFECL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAOPGEAFECL*))((::PBYTE)hIl2Cpp + IAOPGEAFECL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAOPGEAFECL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IAOPGEAFECL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IAOPGEAFECL*>*(*)())((::PBYTE)hIl2Cpp + IAOPGEAFECL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAOPGEAFECL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IAOPGEAFECL* Clone()
		{
			return ((::IAOPGEAFECL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAOPGEAFECL_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IAOPGEAFECL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IAOPGEAFECL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IAOPGEAFECL*))((::PBYTE)hIl2Cpp + IAOPGEAFECL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAOPGEAFECL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAOPGEAFECL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IAOPGEAFECL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAOPGEAFECL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IAOPGEAFECL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAOPGEAFECL*))((::PBYTE)hIl2Cpp + IAOPGEAFECL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IAOPGEAFECL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
