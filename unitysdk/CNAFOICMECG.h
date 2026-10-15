#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNAFOICMECG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CNAFOICMECG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0D8990)
#define CNAFOICMECG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0D8A30)
#define CNAFOICMECG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0D8680)
#define CNAFOICMECG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0D8650)
#define CNAFOICMECG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D8640)
#define CNAFOICMECG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0D8790)
#define CNAFOICMECG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0D86C0)
#define CNAFOICMECG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0D88F0)
#define CNAFOICMECG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0D8600)
#define CNAFOICMECG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0D89E0)
#define CNAFOICMECG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0D89B0)
#define CNAFOICMECG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0D8630)
#define CNAFOICMECG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0D8920)
#define CNAFOICMECG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0D8980)

inline static constexpr unsigned int CNAFOICMECG_TypeDefinitionIndex = 27967;

	class CNAFOICMECG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::CNAFOICMECG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CNAFOICMECG*>**)UnitySDK::FromName("", "CNAFOICMECG")->GetStaticField(0x1C9E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNAFOICMECG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CNAFOICMECG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNAFOICMECG*))((::PBYTE)hIl2Cpp + CNAFOICMECG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNAFOICMECG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CNAFOICMECG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CNAFOICMECG*>*(*)())((::PBYTE)hIl2Cpp + CNAFOICMECG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNAFOICMECG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CNAFOICMECG* Clone()
		{
			return ((::CNAFOICMECG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNAFOICMECG_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CNAFOICMECG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CNAFOICMECG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CNAFOICMECG*))((::PBYTE)hIl2Cpp + CNAFOICMECG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNAFOICMECG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNAFOICMECG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CNAFOICMECG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNAFOICMECG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CNAFOICMECG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNAFOICMECG*))((::PBYTE)hIl2Cpp + CNAFOICMECG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CNAFOICMECG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
