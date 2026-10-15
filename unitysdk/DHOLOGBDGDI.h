#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DHOLOGBDGDI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DHOLOGBDGDI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1BA060)
#define DHOLOGBDGDI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1BA380)
#define DHOLOGBDGDI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1B9CA0)
#define DHOLOGBDGDI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1B9C60)
#define DHOLOGBDGDI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B9C50)
#define DHOLOGBDGDI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1B9E10)
#define DHOLOGBDGDI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1B9D30)
#define DHOLOGBDGDI_FGGBMGCGCKF_OFFSET UNITYSDK_OFFSET(0x1E1B9D20)
#define DHOLOGBDGDI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1B9EE0)
#define DHOLOGBDGDI_JAOPBIKPOMI_OFFSET UNITYSDK_OFFSET(0x1E1B9D10)
#define DHOLOGBDGDI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1B9C10)
#define DHOLOGBDGDI_LKBDNLAMPPG_OFFSET UNITYSDK_OFFSET(0x1E1B9D00)
#define DHOLOGBDGDI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1BA200)
#define DHOLOGBDGDI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1BA1C0)
#define DHOLOGBDGDI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1B9C40)
#define DHOLOGBDGDI_PFNPJNPKHHG_OFFSET UNITYSDK_OFFSET(0x1E1B9CF0)
#define DHOLOGBDGDI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1B9F20)
#define DHOLOGBDGDI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1B9F80)

inline static constexpr unsigned int DHOLOGBDGDI_TypeDefinitionIndex = 31221;

	class DHOLOGBDGDI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AENFHPAGFOI; // 0x18
		::System::Byte _padding0[0x4];
		::System::UInt64 BHDCGBNFPKI; // 0x20
		static ::Google::Protobuf::MessageParser_1<::DHOLOGBDGDI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DHOLOGBDGDI*>**)UnitySDK::FromName("", "DHOLOGBDGDI")->GetStaticField(0x35AE0);
		}

		// static const ::System::Object KGAMBJABCOJ; // 0x0
		// static const ::System::Object HLGEDBNIHII; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHOLOGBDGDI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DHOLOGBDGDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DHOLOGBDGDI*))((::PBYTE)hIl2Cpp + DHOLOGBDGDI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHOLOGBDGDI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DHOLOGBDGDI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DHOLOGBDGDI*>*(*)())((::PBYTE)hIl2Cpp + DHOLOGBDGDI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHOLOGBDGDI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DHOLOGBDGDI* Clone()
		{
			return ((::DHOLOGBDGDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHOLOGBDGDI_CLONE_OFFSET))(this);
		}

		::System::UInt64 PFNPJNPKHHG()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + DHOLOGBDGDI_PFNPJNPKHHG_OFFSET))(this);
		}

		::System::Void LKBDNLAMPPG(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + DHOLOGBDGDI_LKBDNLAMPPG_OFFSET))(this, a1);
		}

		::System::UInt32 JAOPBIKPOMI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHOLOGBDGDI_JAOPBIKPOMI_OFFSET))(this);
		}

		::System::Void FGGBMGCGCKF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DHOLOGBDGDI_FGGBMGCGCKF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DHOLOGBDGDI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DHOLOGBDGDI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DHOLOGBDGDI*))((::PBYTE)hIl2Cpp + DHOLOGBDGDI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHOLOGBDGDI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHOLOGBDGDI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DHOLOGBDGDI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHOLOGBDGDI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DHOLOGBDGDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DHOLOGBDGDI*))((::PBYTE)hIl2Cpp + DHOLOGBDGDI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DHOLOGBDGDI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
