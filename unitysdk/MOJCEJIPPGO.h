#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MOJCEJIPPGO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MOJCEJIPPGO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FF15F70)
#define MOJCEJIPPGO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF16010)
#define MOJCEJIPPGO_CLONE_OFFSET UNITYSDK_OFFSET(0x1FF15C10)
#define MOJCEJIPPGO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FF15BE0)
#define MOJCEJIPPGO_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF15BD0)
#define MOJCEJIPPGO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FF15D70)
#define MOJCEJIPPGO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FF15C80)
#define MOJCEJIPPGO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FF15ED0)
#define MOJCEJIPPGO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FF15B60)
#define MOJCEJIPPGO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FF15FC0)
#define MOJCEJIPPGO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FF15F90)
#define MOJCEJIPPGO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FF15BC0)
#define MOJCEJIPPGO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FF15F00)
#define MOJCEJIPPGO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FF15F60)

inline static constexpr unsigned int MOJCEJIPPGO_TypeDefinitionIndex = 32597;

	class MOJCEJIPPGO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::MOJCEJIPPGO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MOJCEJIPPGO*>**)UnitySDK::FromName("", "MOJCEJIPPGO")->GetStaticField(0x545D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJCEJIPPGO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MOJCEJIPPGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOJCEJIPPGO*))((::PBYTE)hIl2Cpp + MOJCEJIPPGO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOJCEJIPPGO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MOJCEJIPPGO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MOJCEJIPPGO*>*(*)())((::PBYTE)hIl2Cpp + MOJCEJIPPGO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJCEJIPPGO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MOJCEJIPPGO* Clone()
		{
			return ((::MOJCEJIPPGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJCEJIPPGO_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOJCEJIPPGO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MOJCEJIPPGO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MOJCEJIPPGO*))((::PBYTE)hIl2Cpp + MOJCEJIPPGO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJCEJIPPGO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJCEJIPPGO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MOJCEJIPPGO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJCEJIPPGO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MOJCEJIPPGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOJCEJIPPGO*))((::PBYTE)hIl2Cpp + MOJCEJIPPGO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MOJCEJIPPGO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
