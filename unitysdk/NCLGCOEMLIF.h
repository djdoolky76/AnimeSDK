#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NCLGCOEMLIF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NCLGCOEMLIF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x202F52A0)
#define NCLGCOEMLIF_CCTOR_OFFSET UNITYSDK_OFFSET(0x202F5340)
#define NCLGCOEMLIF_CLONE_OFFSET UNITYSDK_OFFSET(0x202F4F90)
#define NCLGCOEMLIF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x202F4F60)
#define NCLGCOEMLIF_CTOR_OFFSET UNITYSDK_OFFSET(0x202F4F50)
#define NCLGCOEMLIF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x202F50A0)
#define NCLGCOEMLIF_EQUALS_OFFSET UNITYSDK_OFFSET(0x202F4FD0)
#define NCLGCOEMLIF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x202F5200)
#define NCLGCOEMLIF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x202F4F10)
#define NCLGCOEMLIF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x202F52F0)
#define NCLGCOEMLIF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x202F52C0)
#define NCLGCOEMLIF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x202F4F40)
#define NCLGCOEMLIF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x202F5230)
#define NCLGCOEMLIF_WRITETO_OFFSET UNITYSDK_OFFSET(0x202F5290)

inline static constexpr unsigned int NCLGCOEMLIF_TypeDefinitionIndex = 32436;

	class NCLGCOEMLIF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::NCLGCOEMLIF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NCLGCOEMLIF*>**)UnitySDK::FromName("", "NCLGCOEMLIF")->GetStaticField(0x5D080);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLGCOEMLIF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NCLGCOEMLIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCLGCOEMLIF*))((::PBYTE)hIl2Cpp + NCLGCOEMLIF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCLGCOEMLIF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NCLGCOEMLIF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NCLGCOEMLIF*>*(*)())((::PBYTE)hIl2Cpp + NCLGCOEMLIF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLGCOEMLIF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NCLGCOEMLIF* Clone()
		{
			return ((::NCLGCOEMLIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLGCOEMLIF_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NCLGCOEMLIF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NCLGCOEMLIF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NCLGCOEMLIF*))((::PBYTE)hIl2Cpp + NCLGCOEMLIF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLGCOEMLIF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLGCOEMLIF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NCLGCOEMLIF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLGCOEMLIF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NCLGCOEMLIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCLGCOEMLIF*))((::PBYTE)hIl2Cpp + NCLGCOEMLIF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NCLGCOEMLIF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
