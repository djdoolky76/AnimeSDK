#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLKHCGGLIMF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JLKHCGGLIMF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E77F9F0)
#define JLKHCGGLIMF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E77FA90)
#define JLKHCGGLIMF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E77F6E0)
#define JLKHCGGLIMF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E77F6B0)
#define JLKHCGGLIMF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E77F6A0)
#define JLKHCGGLIMF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E77F7F0)
#define JLKHCGGLIMF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E77F720)
#define JLKHCGGLIMF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E77F950)
#define JLKHCGGLIMF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E77F660)
#define JLKHCGGLIMF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E77FA40)
#define JLKHCGGLIMF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E77FA10)
#define JLKHCGGLIMF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E77F690)
#define JLKHCGGLIMF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E77F980)
#define JLKHCGGLIMF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E77F9E0)

inline static constexpr unsigned int JLKHCGGLIMF_TypeDefinitionIndex = 25944;

	class JLKHCGGLIMF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JLKHCGGLIMF")->GetStaticField(0x6BA00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKHCGGLIMF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JLKHCGGLIMF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLKHCGGLIMF*))((::PBYTE)hIl2Cpp + JLKHCGGLIMF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLKHCGGLIMF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JLKHCGGLIMF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKHCGGLIMF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JLKHCGGLIMF* Clone()
		{
			return ((::JLKHCGGLIMF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKHCGGLIMF_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JLKHCGGLIMF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JLKHCGGLIMF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JLKHCGGLIMF*))((::PBYTE)hIl2Cpp + JLKHCGGLIMF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKHCGGLIMF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKHCGGLIMF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JLKHCGGLIMF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKHCGGLIMF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JLKHCGGLIMF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLKHCGGLIMF*))((::PBYTE)hIl2Cpp + JLKHCGGLIMF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JLKHCGGLIMF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
