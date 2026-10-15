#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PDHBDPNPMPI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PDHBDPNPMPI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEE1E40)
#define PDHBDPNPMPI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEE1EE0)
#define PDHBDPNPMPI_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEE1B30)
#define PDHBDPNPMPI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEE1B00)
#define PDHBDPNPMPI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEE1AF0)
#define PDHBDPNPMPI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEE1C40)
#define PDHBDPNPMPI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEE1B70)
#define PDHBDPNPMPI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEE1DA0)
#define PDHBDPNPMPI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEE1AB0)
#define PDHBDPNPMPI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEE1E90)
#define PDHBDPNPMPI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEE1E60)
#define PDHBDPNPMPI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEE1AE0)
#define PDHBDPNPMPI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEE1DD0)
#define PDHBDPNPMPI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEE1E30)

inline static constexpr unsigned int PDHBDPNPMPI_TypeDefinitionIndex = 34023;

	class PDHBDPNPMPI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::PDHBDPNPMPI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PDHBDPNPMPI*>**)UnitySDK::FromName("", "PDHBDPNPMPI")->GetStaticField(0x2F520);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDHBDPNPMPI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PDHBDPNPMPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PDHBDPNPMPI*))((::PBYTE)hIl2Cpp + PDHBDPNPMPI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDHBDPNPMPI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PDHBDPNPMPI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PDHBDPNPMPI*>*(*)())((::PBYTE)hIl2Cpp + PDHBDPNPMPI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDHBDPNPMPI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PDHBDPNPMPI* Clone()
		{
			return ((::PDHBDPNPMPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDHBDPNPMPI_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PDHBDPNPMPI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PDHBDPNPMPI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PDHBDPNPMPI*))((::PBYTE)hIl2Cpp + PDHBDPNPMPI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDHBDPNPMPI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDHBDPNPMPI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PDHBDPNPMPI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDHBDPNPMPI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PDHBDPNPMPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PDHBDPNPMPI*))((::PBYTE)hIl2Cpp + PDHBDPNPMPI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PDHBDPNPMPI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
