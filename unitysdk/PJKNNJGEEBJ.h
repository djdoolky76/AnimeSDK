#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PJKNNJGEEBJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PJKNNJGEEBJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF4F360)
#define PJKNNJGEEBJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF4F400)
#define PJKNNJGEEBJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF4F000)
#define PJKNNJGEEBJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF4EFD0)
#define PJKNNJGEEBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF4EFC0)
#define PJKNNJGEEBJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF4F160)
#define PJKNNJGEEBJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF4F070)
#define PJKNNJGEEBJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF4F2C0)
#define PJKNNJGEEBJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF4EF50)
#define PJKNNJGEEBJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF4F3B0)
#define PJKNNJGEEBJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF4F380)
#define PJKNNJGEEBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF4EFB0)
#define PJKNNJGEEBJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF4F2F0)
#define PJKNNJGEEBJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF4F350)

inline static constexpr unsigned int PJKNNJGEEBJ_TypeDefinitionIndex = 34394;

	class PJKNNJGEEBJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::PJKNNJGEEBJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PJKNNJGEEBJ*>**)UnitySDK::FromName("", "PJKNNJGEEBJ")->GetStaticField(0x36B30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJKNNJGEEBJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PJKNNJGEEBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJKNNJGEEBJ*))((::PBYTE)hIl2Cpp + PJKNNJGEEBJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJKNNJGEEBJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PJKNNJGEEBJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PJKNNJGEEBJ*>*(*)())((::PBYTE)hIl2Cpp + PJKNNJGEEBJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJKNNJGEEBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PJKNNJGEEBJ* Clone()
		{
			return ((::PJKNNJGEEBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJKNNJGEEBJ_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PJKNNJGEEBJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PJKNNJGEEBJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PJKNNJGEEBJ*))((::PBYTE)hIl2Cpp + PJKNNJGEEBJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJKNNJGEEBJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJKNNJGEEBJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PJKNNJGEEBJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJKNNJGEEBJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PJKNNJGEEBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJKNNJGEEBJ*))((::PBYTE)hIl2Cpp + PJKNNJGEEBJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PJKNNJGEEBJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
