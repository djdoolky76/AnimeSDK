#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GJBGNMGGDLE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GJBGNMGGDLE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FBD8FF0)
#define GJBGNMGGDLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBD9210)
#define GJBGNMGGDLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1FBD8C40)
#define GJBGNMGGDLE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FBD8C10)
#define GJBGNMGGDLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBD8C00)
#define GJBGNMGGDLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FBD8D70)
#define GJBGNMGGDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FBD8CA0)
#define GJBGNMGGDLE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FBD8C90)
#define GJBGNMGGDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FBD8EE0)
#define GJBGNMGGDLE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FBD8BC0)
#define GJBGNMGGDLE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FBD90B0)
#define GJBGNMGGDLE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FBD9080)
#define GJBGNMGGDLE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FBD8C80)
#define GJBGNMGGDLE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FBD8BF0)
#define GJBGNMGGDLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FBD8F10)
#define GJBGNMGGDLE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FBD8F70)

inline static constexpr unsigned int GJBGNMGGDLE_TypeDefinitionIndex = 31345;

	class GJBGNMGGDLE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GJBGNMGGDLE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GJBGNMGGDLE*>**)UnitySDK::FromName("", "GJBGNMGGDLE")->GetStaticField(0x12860);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJBGNMGGDLE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GJBGNMGGDLE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GJBGNMGGDLE*))((::PBYTE)hIl2Cpp + GJBGNMGGDLE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJBGNMGGDLE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GJBGNMGGDLE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GJBGNMGGDLE*>*(*)())((::PBYTE)hIl2Cpp + GJBGNMGGDLE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJBGNMGGDLE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GJBGNMGGDLE* Clone()
		{
			return ((::GJBGNMGGDLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJBGNMGGDLE_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJBGNMGGDLE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GJBGNMGGDLE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GJBGNMGGDLE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GJBGNMGGDLE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GJBGNMGGDLE*))((::PBYTE)hIl2Cpp + GJBGNMGGDLE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJBGNMGGDLE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJBGNMGGDLE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GJBGNMGGDLE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJBGNMGGDLE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GJBGNMGGDLE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GJBGNMGGDLE*))((::PBYTE)hIl2Cpp + GJBGNMGGDLE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GJBGNMGGDLE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
