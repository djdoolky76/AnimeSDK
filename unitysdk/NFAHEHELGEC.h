#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NFAHEHELGEC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NFAHEHELGEC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAFF410)
#define NFAHEHELGEC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAFF4B0)
#define NFAHEHELGEC_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAFF100)
#define NFAHEHELGEC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAFF0D0)
#define NFAHEHELGEC_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAFF0C0)
#define NFAHEHELGEC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAFF210)
#define NFAHEHELGEC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAFF140)
#define NFAHEHELGEC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAFF370)
#define NFAHEHELGEC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAFF080)
#define NFAHEHELGEC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAFF460)
#define NFAHEHELGEC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAFF430)
#define NFAHEHELGEC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAFF0B0)
#define NFAHEHELGEC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAFF3A0)
#define NFAHEHELGEC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAFF400)

inline static constexpr unsigned int NFAHEHELGEC_TypeDefinitionIndex = 27122;

	class NFAHEHELGEC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::NFAHEHELGEC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NFAHEHELGEC*>**)UnitySDK::FromName("", "NFAHEHELGEC")->GetStaticField(0x5E500);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAHEHELGEC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NFAHEHELGEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFAHEHELGEC*))((::PBYTE)hIl2Cpp + NFAHEHELGEC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFAHEHELGEC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NFAHEHELGEC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NFAHEHELGEC*>*(*)())((::PBYTE)hIl2Cpp + NFAHEHELGEC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAHEHELGEC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NFAHEHELGEC* Clone()
		{
			return ((::NFAHEHELGEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAHEHELGEC_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NFAHEHELGEC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NFAHEHELGEC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NFAHEHELGEC*))((::PBYTE)hIl2Cpp + NFAHEHELGEC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAHEHELGEC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAHEHELGEC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NFAHEHELGEC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAHEHELGEC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NFAHEHELGEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFAHEHELGEC*))((::PBYTE)hIl2Cpp + NFAHEHELGEC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NFAHEHELGEC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
