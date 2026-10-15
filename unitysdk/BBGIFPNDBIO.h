#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BBGIFPNDBIO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BBGIFPNDBIO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7C3410)
#define BBGIFPNDBIO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7C3630)
#define BBGIFPNDBIO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7C3060)
#define BBGIFPNDBIO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7C3030)
#define BBGIFPNDBIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7C3020)
#define BBGIFPNDBIO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7C3190)
#define BBGIFPNDBIO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7C30C0)
#define BBGIFPNDBIO_FFPAHEBJIKK_OFFSET UNITYSDK_OFFSET(0x1E7C30A0)
#define BBGIFPNDBIO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7C3300)
#define BBGIFPNDBIO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7C2FE0)
#define BBGIFPNDBIO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7C34D0)
#define BBGIFPNDBIO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7C34A0)
#define BBGIFPNDBIO_OHEBFCPLMGF_OFFSET UNITYSDK_OFFSET(0x1E7C30B0)
#define BBGIFPNDBIO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7C3010)
#define BBGIFPNDBIO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7C3330)
#define BBGIFPNDBIO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7C3390)

inline static constexpr unsigned int BBGIFPNDBIO_TypeDefinitionIndex = 27224;

	class BBGIFPNDBIO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OPPNMFMNMGC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::BBGIFPNDBIO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BBGIFPNDBIO*>**)UnitySDK::FromName("", "BBGIFPNDBIO")->GetStaticField(0x476D0);
		}

		// static const ::System::Object BOIGPPCIPFF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGIFPNDBIO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BBGIFPNDBIO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBGIFPNDBIO*))((::PBYTE)hIl2Cpp + BBGIFPNDBIO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBGIFPNDBIO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BBGIFPNDBIO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BBGIFPNDBIO*>*(*)())((::PBYTE)hIl2Cpp + BBGIFPNDBIO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGIFPNDBIO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BBGIFPNDBIO* Clone()
		{
			return ((::BBGIFPNDBIO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGIFPNDBIO_CLONE_OFFSET))(this);
		}

		::System::UInt32 FFPAHEBJIKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGIFPNDBIO_FFPAHEBJIKK_OFFSET))(this);
		}

		::System::Void OHEBFCPLMGF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BBGIFPNDBIO_OHEBFCPLMGF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BBGIFPNDBIO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BBGIFPNDBIO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BBGIFPNDBIO*))((::PBYTE)hIl2Cpp + BBGIFPNDBIO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGIFPNDBIO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGIFPNDBIO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BBGIFPNDBIO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGIFPNDBIO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BBGIFPNDBIO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBGIFPNDBIO*))((::PBYTE)hIl2Cpp + BBGIFPNDBIO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BBGIFPNDBIO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
