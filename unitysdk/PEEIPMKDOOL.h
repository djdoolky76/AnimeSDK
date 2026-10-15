#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PEEIPMKDOOL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PEEIPMKDOOL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF16280)
#define PEEIPMKDOOL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF164A0)
#define PEEIPMKDOOL_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF15ED0)
#define PEEIPMKDOOL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF15EA0)
#define PEEIPMKDOOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF15E90)
#define PEEIPMKDOOL_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1DF15F10)
#define PEEIPMKDOOL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF16000)
#define PEEIPMKDOOL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF15F30)
#define PEEIPMKDOOL_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1DF15F20)
#define PEEIPMKDOOL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF16170)
#define PEEIPMKDOOL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF15E50)
#define PEEIPMKDOOL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF16340)
#define PEEIPMKDOOL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF16310)
#define PEEIPMKDOOL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF15E80)
#define PEEIPMKDOOL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF161A0)
#define PEEIPMKDOOL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF16200)

inline static constexpr unsigned int PEEIPMKDOOL_TypeDefinitionIndex = 30488;

	class PEEIPMKDOOL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GEMFJILOPLL; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PEEIPMKDOOL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PEEIPMKDOOL*>**)UnitySDK::FromName("", "PEEIPMKDOOL")->GetStaticField(0x38810);
		}

		// static const ::System::Object AKFFJEHMCCB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEIPMKDOOL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PEEIPMKDOOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEEIPMKDOOL*))((::PBYTE)hIl2Cpp + PEEIPMKDOOL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEEIPMKDOOL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PEEIPMKDOOL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PEEIPMKDOOL*>*(*)())((::PBYTE)hIl2Cpp + PEEIPMKDOOL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEIPMKDOOL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PEEIPMKDOOL* Clone()
		{
			return ((::PEEIPMKDOOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEIPMKDOOL_CLONE_OFFSET))(this);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEIPMKDOOL_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PEEIPMKDOOL_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PEEIPMKDOOL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PEEIPMKDOOL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PEEIPMKDOOL*))((::PBYTE)hIl2Cpp + PEEIPMKDOOL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEIPMKDOOL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEIPMKDOOL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PEEIPMKDOOL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEIPMKDOOL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PEEIPMKDOOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEEIPMKDOOL*))((::PBYTE)hIl2Cpp + PEEIPMKDOOL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PEEIPMKDOOL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
