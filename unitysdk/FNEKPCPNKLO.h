#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNEKPCPNKLO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FNEKPCPNKLO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3C0F80)
#define FNEKPCPNKLO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3C1020)
#define FNEKPCPNKLO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3C0C70)
#define FNEKPCPNKLO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3C0C40)
#define FNEKPCPNKLO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3C0C30)
#define FNEKPCPNKLO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3C0D80)
#define FNEKPCPNKLO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3C0CB0)
#define FNEKPCPNKLO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3C0EE0)
#define FNEKPCPNKLO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3C0BF0)
#define FNEKPCPNKLO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3C0FD0)
#define FNEKPCPNKLO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3C0FA0)
#define FNEKPCPNKLO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3C0C20)
#define FNEKPCPNKLO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3C0F10)
#define FNEKPCPNKLO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3C0F70)

inline static constexpr unsigned int FNEKPCPNKLO_TypeDefinitionIndex = 26382;

	class FNEKPCPNKLO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::FNEKPCPNKLO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FNEKPCPNKLO*>**)UnitySDK::FromName("", "FNEKPCPNKLO")->GetStaticField(0x5D9C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNEKPCPNKLO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FNEKPCPNKLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNEKPCPNKLO*))((::PBYTE)hIl2Cpp + FNEKPCPNKLO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNEKPCPNKLO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FNEKPCPNKLO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FNEKPCPNKLO*>*(*)())((::PBYTE)hIl2Cpp + FNEKPCPNKLO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNEKPCPNKLO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FNEKPCPNKLO* Clone()
		{
			return ((::FNEKPCPNKLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNEKPCPNKLO_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FNEKPCPNKLO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FNEKPCPNKLO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FNEKPCPNKLO*))((::PBYTE)hIl2Cpp + FNEKPCPNKLO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNEKPCPNKLO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNEKPCPNKLO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FNEKPCPNKLO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNEKPCPNKLO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FNEKPCPNKLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNEKPCPNKLO*))((::PBYTE)hIl2Cpp + FNEKPCPNKLO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FNEKPCPNKLO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
