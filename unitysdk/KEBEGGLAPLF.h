#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KEBEGGLAPLF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KEBEGGLAPLF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E809370)
#define KEBEGGLAPLF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8095D0)
#define KEBEGGLAPLF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E808F80)
#define KEBEGGLAPLF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E808F40)
#define KEBEGGLAPLF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E808F30)
#define KEBEGGLAPLF_EPKNBMOGDIF_OFFSET UNITYSDK_OFFSET(0x1E809000)
#define KEBEGGLAPLF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8090F0)
#define KEBEGGLAPLF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E809010)
#define KEBEGGLAPLF_GBLDMKDBOIB_OFFSET UNITYSDK_OFFSET(0x1E808FE0)
#define KEBEGGLAPLF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8091D0)
#define KEBEGGLAPLF_GLPDJFFEILA_OFFSET UNITYSDK_OFFSET(0x1E808FD0)
#define KEBEGGLAPLF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E808EF0)
#define KEBEGGLAPLF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E809450)
#define KEBEGGLAPLF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E809410)
#define KEBEGGLAPLF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E808F20)
#define KEBEGGLAPLF_PKFNPIHFAME_OFFSET UNITYSDK_OFFSET(0x1E808FF0)
#define KEBEGGLAPLF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E809200)
#define KEBEGGLAPLF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E809260)

inline static constexpr unsigned int KEBEGGLAPLF_TypeDefinitionIndex = 34535;

	class KEBEGGLAPLF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KDHBDECBPJK; // 0x18
		::System::Boolean NKDIPABDIIO; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KEBEGGLAPLF")->GetStaticField(0x11840);
		}

		// static const ::System::Object ELFBAKNFEIG; // 0x0
		// static const ::System::Object EKICJHILLNJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEBEGGLAPLF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KEBEGGLAPLF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KEBEGGLAPLF*))((::PBYTE)hIl2Cpp + KEBEGGLAPLF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KEBEGGLAPLF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KEBEGGLAPLF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEBEGGLAPLF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KEBEGGLAPLF* Clone()
		{
			return ((::KEBEGGLAPLF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEBEGGLAPLF_CLONE_OFFSET))(this);
		}

		::System::UInt32 GLPDJFFEILA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEBEGGLAPLF_GLPDJFFEILA_OFFSET))(this);
		}

		::System::Void GBLDMKDBOIB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KEBEGGLAPLF_GBLDMKDBOIB_OFFSET))(this, a1);
		}

		::System::Boolean PKFNPIHFAME()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KEBEGGLAPLF_PKFNPIHFAME_OFFSET))(this);
		}

		::System::Void EPKNBMOGDIF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KEBEGGLAPLF_EPKNBMOGDIF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KEBEGGLAPLF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KEBEGGLAPLF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KEBEGGLAPLF*))((::PBYTE)hIl2Cpp + KEBEGGLAPLF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEBEGGLAPLF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEBEGGLAPLF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KEBEGGLAPLF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEBEGGLAPLF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KEBEGGLAPLF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KEBEGGLAPLF*))((::PBYTE)hIl2Cpp + KEBEGGLAPLF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KEBEGGLAPLF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
