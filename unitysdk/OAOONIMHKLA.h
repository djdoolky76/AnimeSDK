#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OAOONIMHKLA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OAOONIMHKLA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB7CBA0)
#define OAOONIMHKLA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB7CDC0)
#define OAOONIMHKLA_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB7C7F0)
#define OAOONIMHKLA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB7C7C0)
#define OAOONIMHKLA_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB7C7B0)
#define OAOONIMHKLA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB7C920)
#define OAOONIMHKLA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB7C850)
#define OAOONIMHKLA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EB7C840)
#define OAOONIMHKLA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB7CA90)
#define OAOONIMHKLA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB7C770)
#define OAOONIMHKLA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB7CC60)
#define OAOONIMHKLA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB7CC30)
#define OAOONIMHKLA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EB7C830)
#define OAOONIMHKLA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB7C7A0)
#define OAOONIMHKLA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB7CAC0)
#define OAOONIMHKLA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB7CB20)

inline static constexpr unsigned int OAOONIMHKLA_TypeDefinitionIndex = 26621;

	class OAOONIMHKLA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::OAOONIMHKLA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OAOONIMHKLA*>**)UnitySDK::FromName("", "OAOONIMHKLA")->GetStaticField(0xF050);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOONIMHKLA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OAOONIMHKLA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OAOONIMHKLA*))((::PBYTE)hIl2Cpp + OAOONIMHKLA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OAOONIMHKLA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OAOONIMHKLA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OAOONIMHKLA*>*(*)())((::PBYTE)hIl2Cpp + OAOONIMHKLA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOONIMHKLA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OAOONIMHKLA* Clone()
		{
			return ((::OAOONIMHKLA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOONIMHKLA_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOONIMHKLA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OAOONIMHKLA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OAOONIMHKLA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OAOONIMHKLA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OAOONIMHKLA*))((::PBYTE)hIl2Cpp + OAOONIMHKLA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOONIMHKLA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOONIMHKLA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OAOONIMHKLA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOONIMHKLA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OAOONIMHKLA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OAOONIMHKLA*))((::PBYTE)hIl2Cpp + OAOONIMHKLA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OAOONIMHKLA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
