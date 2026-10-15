#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DGHLOHPCFKP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DGHLOHPCFKP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1AD070)
#define DGHLOHPCFKP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1AD110)
#define DGHLOHPCFKP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1ACD60)
#define DGHLOHPCFKP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1ACD30)
#define DGHLOHPCFKP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1ACD20)
#define DGHLOHPCFKP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1ACE70)
#define DGHLOHPCFKP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1ACDA0)
#define DGHLOHPCFKP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1ACFD0)
#define DGHLOHPCFKP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1ACCE0)
#define DGHLOHPCFKP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1AD0C0)
#define DGHLOHPCFKP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1AD090)
#define DGHLOHPCFKP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1ACD10)
#define DGHLOHPCFKP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1AD000)
#define DGHLOHPCFKP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1AD060)

inline static constexpr unsigned int DGHLOHPCFKP_TypeDefinitionIndex = 28188;

	class DGHLOHPCFKP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::DGHLOHPCFKP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DGHLOHPCFKP*>**)UnitySDK::FromName("", "DGHLOHPCFKP")->GetStaticField(0x34200);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGHLOHPCFKP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DGHLOHPCFKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DGHLOHPCFKP*))((::PBYTE)hIl2Cpp + DGHLOHPCFKP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGHLOHPCFKP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DGHLOHPCFKP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DGHLOHPCFKP*>*(*)())((::PBYTE)hIl2Cpp + DGHLOHPCFKP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGHLOHPCFKP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DGHLOHPCFKP* Clone()
		{
			return ((::DGHLOHPCFKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGHLOHPCFKP_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DGHLOHPCFKP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DGHLOHPCFKP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DGHLOHPCFKP*))((::PBYTE)hIl2Cpp + DGHLOHPCFKP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGHLOHPCFKP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGHLOHPCFKP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DGHLOHPCFKP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGHLOHPCFKP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DGHLOHPCFKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DGHLOHPCFKP*))((::PBYTE)hIl2Cpp + DGHLOHPCFKP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DGHLOHPCFKP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
