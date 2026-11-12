#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMHGNOPOONF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GMHGNOPOONF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F7E4410)
#define GMHGNOPOONF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7E44B0)
#define GMHGNOPOONF_CLONE_OFFSET UNITYSDK_OFFSET(0x1F7E4100)
#define GMHGNOPOONF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F7E40D0)
#define GMHGNOPOONF_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7E40C0)
#define GMHGNOPOONF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F7E4210)
#define GMHGNOPOONF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F7E4140)
#define GMHGNOPOONF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F7E4370)
#define GMHGNOPOONF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F7E4080)
#define GMHGNOPOONF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F7E4460)
#define GMHGNOPOONF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F7E4430)
#define GMHGNOPOONF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F7E40B0)
#define GMHGNOPOONF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F7E43A0)
#define GMHGNOPOONF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F7E4400)

inline static constexpr unsigned int GMHGNOPOONF_TypeDefinitionIndex = 26572;

	class GMHGNOPOONF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::GMHGNOPOONF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GMHGNOPOONF*>**)UnitySDK::FromName("", "GMHGNOPOONF")->GetStaticField(0x18790);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMHGNOPOONF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GMHGNOPOONF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMHGNOPOONF*))((::PBYTE)hIl2Cpp + GMHGNOPOONF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMHGNOPOONF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GMHGNOPOONF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GMHGNOPOONF*>*(*)())((::PBYTE)hIl2Cpp + GMHGNOPOONF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMHGNOPOONF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GMHGNOPOONF* Clone()
		{
			return ((::GMHGNOPOONF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMHGNOPOONF_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GMHGNOPOONF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GMHGNOPOONF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GMHGNOPOONF*))((::PBYTE)hIl2Cpp + GMHGNOPOONF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMHGNOPOONF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMHGNOPOONF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GMHGNOPOONF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMHGNOPOONF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GMHGNOPOONF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMHGNOPOONF*))((::PBYTE)hIl2Cpp + GMHGNOPOONF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GMHGNOPOONF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
