#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MOEMKBLCKKO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MOEMKBLCKKO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FF0EE00)
#define MOEMKBLCKKO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF0EEA0)
#define MOEMKBLCKKO_CLONE_OFFSET UNITYSDK_OFFSET(0x1FF0EAA0)
#define MOEMKBLCKKO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FF0EA70)
#define MOEMKBLCKKO_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF0EA60)
#define MOEMKBLCKKO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FF0EC00)
#define MOEMKBLCKKO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FF0EB10)
#define MOEMKBLCKKO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FF0ED60)
#define MOEMKBLCKKO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FF0E9F0)
#define MOEMKBLCKKO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FF0EE50)
#define MOEMKBLCKKO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FF0EE20)
#define MOEMKBLCKKO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FF0EA50)
#define MOEMKBLCKKO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FF0ED90)
#define MOEMKBLCKKO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FF0EDF0)

inline static constexpr unsigned int MOEMKBLCKKO_TypeDefinitionIndex = 28283;

	class MOEMKBLCKKO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::MOEMKBLCKKO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MOEMKBLCKKO*>**)UnitySDK::FromName("", "MOEMKBLCKKO")->GetStaticField(0x538D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOEMKBLCKKO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MOEMKBLCKKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOEMKBLCKKO*))((::PBYTE)hIl2Cpp + MOEMKBLCKKO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOEMKBLCKKO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MOEMKBLCKKO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MOEMKBLCKKO*>*(*)())((::PBYTE)hIl2Cpp + MOEMKBLCKKO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOEMKBLCKKO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MOEMKBLCKKO* Clone()
		{
			return ((::MOEMKBLCKKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOEMKBLCKKO_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOEMKBLCKKO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MOEMKBLCKKO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MOEMKBLCKKO*))((::PBYTE)hIl2Cpp + MOEMKBLCKKO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOEMKBLCKKO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOEMKBLCKKO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MOEMKBLCKKO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOEMKBLCKKO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MOEMKBLCKKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOEMKBLCKKO*))((::PBYTE)hIl2Cpp + MOEMKBLCKKO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MOEMKBLCKKO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
