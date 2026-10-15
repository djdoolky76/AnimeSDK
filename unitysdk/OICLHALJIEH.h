#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OICLHALJIEH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OICLHALJIEH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE69720)
#define OICLHALJIEH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE697C0)
#define OICLHALJIEH_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE69410)
#define OICLHALJIEH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE693E0)
#define OICLHALJIEH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE693D0)
#define OICLHALJIEH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE69520)
#define OICLHALJIEH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE69450)
#define OICLHALJIEH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE69680)
#define OICLHALJIEH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE69390)
#define OICLHALJIEH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE69770)
#define OICLHALJIEH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE69740)
#define OICLHALJIEH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE693C0)
#define OICLHALJIEH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE696B0)
#define OICLHALJIEH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE69710)

inline static constexpr unsigned int OICLHALJIEH_TypeDefinitionIndex = 32392;

	class OICLHALJIEH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::OICLHALJIEH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OICLHALJIEH*>**)UnitySDK::FromName("", "OICLHALJIEH")->GetStaticField(0x1BAE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OICLHALJIEH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OICLHALJIEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OICLHALJIEH*))((::PBYTE)hIl2Cpp + OICLHALJIEH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OICLHALJIEH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OICLHALJIEH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OICLHALJIEH*>*(*)())((::PBYTE)hIl2Cpp + OICLHALJIEH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OICLHALJIEH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OICLHALJIEH* Clone()
		{
			return ((::OICLHALJIEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OICLHALJIEH_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OICLHALJIEH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OICLHALJIEH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OICLHALJIEH*))((::PBYTE)hIl2Cpp + OICLHALJIEH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OICLHALJIEH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OICLHALJIEH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OICLHALJIEH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OICLHALJIEH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OICLHALJIEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OICLHALJIEH*))((::PBYTE)hIl2Cpp + OICLHALJIEH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OICLHALJIEH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
