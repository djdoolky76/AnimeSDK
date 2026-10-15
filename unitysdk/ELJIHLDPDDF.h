#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELJIHLDPDDF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ELJIHLDPDDF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2A6CB0)
#define ELJIHLDPDDF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2A6D50)
#define ELJIHLDPDDF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2A69A0)
#define ELJIHLDPDDF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2A6970)
#define ELJIHLDPDDF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A6960)
#define ELJIHLDPDDF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2A6AB0)
#define ELJIHLDPDDF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2A69E0)
#define ELJIHLDPDDF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2A6C10)
#define ELJIHLDPDDF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2A6920)
#define ELJIHLDPDDF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2A6D00)
#define ELJIHLDPDDF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2A6CD0)
#define ELJIHLDPDDF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2A6950)
#define ELJIHLDPDDF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2A6C40)
#define ELJIHLDPDDF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2A6CA0)

inline static constexpr unsigned int ELJIHLDPDDF_TypeDefinitionIndex = 33794;

	class ELJIHLDPDDF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::ELJIHLDPDDF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ELJIHLDPDDF*>**)UnitySDK::FromName("", "ELJIHLDPDDF")->GetStaticField(0x51AE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJIHLDPDDF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ELJIHLDPDDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELJIHLDPDDF*))((::PBYTE)hIl2Cpp + ELJIHLDPDDF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELJIHLDPDDF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ELJIHLDPDDF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ELJIHLDPDDF*>*(*)())((::PBYTE)hIl2Cpp + ELJIHLDPDDF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJIHLDPDDF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ELJIHLDPDDF* Clone()
		{
			return ((::ELJIHLDPDDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJIHLDPDDF_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ELJIHLDPDDF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ELJIHLDPDDF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ELJIHLDPDDF*))((::PBYTE)hIl2Cpp + ELJIHLDPDDF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJIHLDPDDF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJIHLDPDDF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ELJIHLDPDDF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJIHLDPDDF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ELJIHLDPDDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELJIHLDPDDF*))((::PBYTE)hIl2Cpp + ELJIHLDPDDF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ELJIHLDPDDF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
