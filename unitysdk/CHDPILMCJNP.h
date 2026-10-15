#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHDPILMCJNP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CHDPILMCJNP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0C2C20)
#define CHDPILMCJNP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0C2CC0)
#define CHDPILMCJNP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0C28C0)
#define CHDPILMCJNP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0C2890)
#define CHDPILMCJNP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0C2880)
#define CHDPILMCJNP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0C2A20)
#define CHDPILMCJNP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0C2930)
#define CHDPILMCJNP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0C2B80)
#define CHDPILMCJNP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0C2810)
#define CHDPILMCJNP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0C2C70)
#define CHDPILMCJNP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0C2C40)
#define CHDPILMCJNP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0C2870)
#define CHDPILMCJNP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0C2BB0)
#define CHDPILMCJNP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0C2C10)

inline static constexpr unsigned int CHDPILMCJNP_TypeDefinitionIndex = 33059;

	class CHDPILMCJNP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::CHDPILMCJNP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CHDPILMCJNP*>**)UnitySDK::FromName("", "CHDPILMCJNP")->GetStaticField(0x16150);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHDPILMCJNP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CHDPILMCJNP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHDPILMCJNP*))((::PBYTE)hIl2Cpp + CHDPILMCJNP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHDPILMCJNP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CHDPILMCJNP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CHDPILMCJNP*>*(*)())((::PBYTE)hIl2Cpp + CHDPILMCJNP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHDPILMCJNP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CHDPILMCJNP* Clone()
		{
			return ((::CHDPILMCJNP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHDPILMCJNP_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CHDPILMCJNP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CHDPILMCJNP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CHDPILMCJNP*))((::PBYTE)hIl2Cpp + CHDPILMCJNP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHDPILMCJNP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHDPILMCJNP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CHDPILMCJNP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHDPILMCJNP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CHDPILMCJNP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHDPILMCJNP*))((::PBYTE)hIl2Cpp + CHDPILMCJNP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CHDPILMCJNP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
