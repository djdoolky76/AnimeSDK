#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GJBGNMGGDLE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GJBGNMGGDLE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4A4BC0)
#define GJBGNMGGDLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4A4DE0)
#define GJBGNMGGDLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4A4810)
#define GJBGNMGGDLE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4A47E0)
#define GJBGNMGGDLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4A47D0)
#define GJBGNMGGDLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4A4940)
#define GJBGNMGGDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4A4870)
#define GJBGNMGGDLE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E4A4860)
#define GJBGNMGGDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4A4AB0)
#define GJBGNMGGDLE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4A4790)
#define GJBGNMGGDLE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4A4C80)
#define GJBGNMGGDLE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4A4C50)
#define GJBGNMGGDLE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E4A4850)
#define GJBGNMGGDLE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4A47C0)
#define GJBGNMGGDLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4A4AE0)
#define GJBGNMGGDLE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4A4B40)

inline static constexpr unsigned int GJBGNMGGDLE_TypeDefinitionIndex = 30439;

	class GJBGNMGGDLE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GJBGNMGGDLE")->GetStaticField(0x1B290);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GJBGNMGGDLE_JJGHOBBFNJD_OFFSET))();
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
