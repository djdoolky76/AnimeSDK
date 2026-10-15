#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGKLEEPMGEF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KGKLEEPMGEF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E80BC10)
#define KGKLEEPMGEF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E80BCB0)
#define KGKLEEPMGEF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E80B900)
#define KGKLEEPMGEF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E80B8D0)
#define KGKLEEPMGEF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E80B8C0)
#define KGKLEEPMGEF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E80BA10)
#define KGKLEEPMGEF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E80B940)
#define KGKLEEPMGEF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E80BB70)
#define KGKLEEPMGEF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E80B880)
#define KGKLEEPMGEF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E80BC60)
#define KGKLEEPMGEF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E80BC30)
#define KGKLEEPMGEF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E80B8B0)
#define KGKLEEPMGEF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E80BBA0)
#define KGKLEEPMGEF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E80BC00)

inline static constexpr unsigned int KGKLEEPMGEF_TypeDefinitionIndex = 26804;

	class KGKLEEPMGEF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::KGKLEEPMGEF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KGKLEEPMGEF*>**)UnitySDK::FromName("", "KGKLEEPMGEF")->GetStaticField(0x154F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKLEEPMGEF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KGKLEEPMGEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGKLEEPMGEF*))((::PBYTE)hIl2Cpp + KGKLEEPMGEF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGKLEEPMGEF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KGKLEEPMGEF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KGKLEEPMGEF*>*(*)())((::PBYTE)hIl2Cpp + KGKLEEPMGEF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKLEEPMGEF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KGKLEEPMGEF* Clone()
		{
			return ((::KGKLEEPMGEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKLEEPMGEF_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KGKLEEPMGEF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KGKLEEPMGEF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KGKLEEPMGEF*))((::PBYTE)hIl2Cpp + KGKLEEPMGEF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKLEEPMGEF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKLEEPMGEF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KGKLEEPMGEF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKLEEPMGEF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KGKLEEPMGEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGKLEEPMGEF*))((::PBYTE)hIl2Cpp + KGKLEEPMGEF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KGKLEEPMGEF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
