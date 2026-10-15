#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNFMEHAEIJI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CNFMEHAEIJI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E108AD0)
#define CNFMEHAEIJI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E108B70)
#define CNFMEHAEIJI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1087C0)
#define CNFMEHAEIJI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E108790)
#define CNFMEHAEIJI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E108780)
#define CNFMEHAEIJI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1088D0)
#define CNFMEHAEIJI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E108800)
#define CNFMEHAEIJI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E108A30)
#define CNFMEHAEIJI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E108740)
#define CNFMEHAEIJI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E108B20)
#define CNFMEHAEIJI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E108AF0)
#define CNFMEHAEIJI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E108770)
#define CNFMEHAEIJI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E108A60)
#define CNFMEHAEIJI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E108AC0)

inline static constexpr unsigned int CNFMEHAEIJI_TypeDefinitionIndex = 27890;

	class CNFMEHAEIJI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::CNFMEHAEIJI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CNFMEHAEIJI*>**)UnitySDK::FromName("", "CNFMEHAEIJI")->GetStaticField(0x1FAC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNFMEHAEIJI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CNFMEHAEIJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNFMEHAEIJI*))((::PBYTE)hIl2Cpp + CNFMEHAEIJI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNFMEHAEIJI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CNFMEHAEIJI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CNFMEHAEIJI*>*(*)())((::PBYTE)hIl2Cpp + CNFMEHAEIJI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNFMEHAEIJI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CNFMEHAEIJI* Clone()
		{
			return ((::CNFMEHAEIJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNFMEHAEIJI_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CNFMEHAEIJI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CNFMEHAEIJI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CNFMEHAEIJI*))((::PBYTE)hIl2Cpp + CNFMEHAEIJI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNFMEHAEIJI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNFMEHAEIJI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CNFMEHAEIJI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNFMEHAEIJI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CNFMEHAEIJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNFMEHAEIJI*))((::PBYTE)hIl2Cpp + CNFMEHAEIJI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CNFMEHAEIJI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
