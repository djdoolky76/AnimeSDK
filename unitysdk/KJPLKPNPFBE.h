#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJPLKPNPFBE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KJPLKPNPFBE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E846EB0)
#define KJPLKPNPFBE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E846F50)
#define KJPLKPNPFBE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E846BA0)
#define KJPLKPNPFBE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E846B70)
#define KJPLKPNPFBE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E846B60)
#define KJPLKPNPFBE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E846CB0)
#define KJPLKPNPFBE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E846BE0)
#define KJPLKPNPFBE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E846E10)
#define KJPLKPNPFBE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E846B20)
#define KJPLKPNPFBE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E846F00)
#define KJPLKPNPFBE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E846ED0)
#define KJPLKPNPFBE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E846B50)
#define KJPLKPNPFBE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E846E40)
#define KJPLKPNPFBE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E846EA0)

inline static constexpr unsigned int KJPLKPNPFBE_TypeDefinitionIndex = 26008;

	class KJPLKPNPFBE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::KJPLKPNPFBE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KJPLKPNPFBE*>**)UnitySDK::FromName("", "KJPLKPNPFBE")->GetStaticField(0x1B5E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPLKPNPFBE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KJPLKPNPFBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJPLKPNPFBE*))((::PBYTE)hIl2Cpp + KJPLKPNPFBE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJPLKPNPFBE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KJPLKPNPFBE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KJPLKPNPFBE*>*(*)())((::PBYTE)hIl2Cpp + KJPLKPNPFBE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPLKPNPFBE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KJPLKPNPFBE* Clone()
		{
			return ((::KJPLKPNPFBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPLKPNPFBE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KJPLKPNPFBE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KJPLKPNPFBE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KJPLKPNPFBE*))((::PBYTE)hIl2Cpp + KJPLKPNPFBE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPLKPNPFBE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPLKPNPFBE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KJPLKPNPFBE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPLKPNPFBE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KJPLKPNPFBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJPLKPNPFBE*))((::PBYTE)hIl2Cpp + KJPLKPNPFBE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KJPLKPNPFBE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
