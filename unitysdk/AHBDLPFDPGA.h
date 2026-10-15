#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHBDLPFDPGA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AHBDLPFDPGA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E26BDB0)
#define AHBDLPFDPGA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E26BE50)
#define AHBDLPFDPGA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E26BAA0)
#define AHBDLPFDPGA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E26BA70)
#define AHBDLPFDPGA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E26BA60)
#define AHBDLPFDPGA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E26BBB0)
#define AHBDLPFDPGA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E26BAE0)
#define AHBDLPFDPGA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E26BD10)
#define AHBDLPFDPGA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E26BA20)
#define AHBDLPFDPGA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E26BE00)
#define AHBDLPFDPGA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E26BDD0)
#define AHBDLPFDPGA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E26BA50)
#define AHBDLPFDPGA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E26BD40)
#define AHBDLPFDPGA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E26BDA0)

inline static constexpr unsigned int AHBDLPFDPGA_TypeDefinitionIndex = 27602;

	class AHBDLPFDPGA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::AHBDLPFDPGA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AHBDLPFDPGA*>**)UnitySDK::FromName("", "AHBDLPFDPGA")->GetStaticField(0x31340);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHBDLPFDPGA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AHBDLPFDPGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHBDLPFDPGA*))((::PBYTE)hIl2Cpp + AHBDLPFDPGA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHBDLPFDPGA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AHBDLPFDPGA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AHBDLPFDPGA*>*(*)())((::PBYTE)hIl2Cpp + AHBDLPFDPGA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHBDLPFDPGA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AHBDLPFDPGA* Clone()
		{
			return ((::AHBDLPFDPGA*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHBDLPFDPGA_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AHBDLPFDPGA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AHBDLPFDPGA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AHBDLPFDPGA*))((::PBYTE)hIl2Cpp + AHBDLPFDPGA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHBDLPFDPGA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHBDLPFDPGA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AHBDLPFDPGA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHBDLPFDPGA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AHBDLPFDPGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHBDLPFDPGA*))((::PBYTE)hIl2Cpp + AHBDLPFDPGA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AHBDLPFDPGA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
