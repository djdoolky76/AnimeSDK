#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DACEFJFGLGM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DACEFJFGLGM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E14C6E0)
#define DACEFJFGLGM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E14C780)
#define DACEFJFGLGM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E14C3D0)
#define DACEFJFGLGM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E14C3A0)
#define DACEFJFGLGM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E14C390)
#define DACEFJFGLGM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E14C4E0)
#define DACEFJFGLGM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E14C410)
#define DACEFJFGLGM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E14C640)
#define DACEFJFGLGM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E14C350)
#define DACEFJFGLGM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E14C730)
#define DACEFJFGLGM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E14C700)
#define DACEFJFGLGM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E14C380)
#define DACEFJFGLGM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E14C670)
#define DACEFJFGLGM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E14C6D0)

inline static constexpr unsigned int DACEFJFGLGM_TypeDefinitionIndex = 30437;

	class DACEFJFGLGM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DACEFJFGLGM")->GetStaticField(0x23CC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DACEFJFGLGM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DACEFJFGLGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DACEFJFGLGM*))((::PBYTE)hIl2Cpp + DACEFJFGLGM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DACEFJFGLGM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DACEFJFGLGM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DACEFJFGLGM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DACEFJFGLGM* Clone()
		{
			return ((::DACEFJFGLGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DACEFJFGLGM_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DACEFJFGLGM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DACEFJFGLGM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DACEFJFGLGM*))((::PBYTE)hIl2Cpp + DACEFJFGLGM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DACEFJFGLGM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DACEFJFGLGM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DACEFJFGLGM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DACEFJFGLGM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DACEFJFGLGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DACEFJFGLGM*))((::PBYTE)hIl2Cpp + DACEFJFGLGM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DACEFJFGLGM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
