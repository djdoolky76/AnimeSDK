#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MBFFBPKEPLN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MBFFBPKEPLN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9B7060)
#define MBFFBPKEPLN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9B7280)
#define MBFFBPKEPLN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9B6CB0)
#define MBFFBPKEPLN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9B6C80)
#define MBFFBPKEPLN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9B6C70)
#define MBFFBPKEPLN_DOINAIBOGOI_OFFSET UNITYSDK_OFFSET(0x1E9B6CF0)
#define MBFFBPKEPLN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9B6DE0)
#define MBFFBPKEPLN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9B6D10)
#define MBFFBPKEPLN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9B6F50)
#define MBFFBPKEPLN_IELCCNPGBLI_OFFSET UNITYSDK_OFFSET(0x1E9B6D00)
#define MBFFBPKEPLN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9B6C30)
#define MBFFBPKEPLN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9B7120)
#define MBFFBPKEPLN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9B70F0)
#define MBFFBPKEPLN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9B6C60)
#define MBFFBPKEPLN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9B6F80)
#define MBFFBPKEPLN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9B6FE0)

inline static constexpr unsigned int MBFFBPKEPLN_TypeDefinitionIndex = 26474;

	class MBFFBPKEPLN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FJLILEOEEIB; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MBFFBPKEPLN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MBFFBPKEPLN*>**)UnitySDK::FromName("", "MBFFBPKEPLN")->GetStaticField(0x47630);
		}

		// static const ::System::Object JBLABOEPILK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBFFBPKEPLN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MBFFBPKEPLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBFFBPKEPLN*))((::PBYTE)hIl2Cpp + MBFFBPKEPLN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBFFBPKEPLN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MBFFBPKEPLN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MBFFBPKEPLN*>*(*)())((::PBYTE)hIl2Cpp + MBFFBPKEPLN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBFFBPKEPLN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MBFFBPKEPLN* Clone()
		{
			return ((::MBFFBPKEPLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBFFBPKEPLN_CLONE_OFFSET))(this);
		}

		::System::UInt32 DOINAIBOGOI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBFFBPKEPLN_DOINAIBOGOI_OFFSET))(this);
		}

		::System::Void IELCCNPGBLI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MBFFBPKEPLN_IELCCNPGBLI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MBFFBPKEPLN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MBFFBPKEPLN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MBFFBPKEPLN*))((::PBYTE)hIl2Cpp + MBFFBPKEPLN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBFFBPKEPLN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBFFBPKEPLN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MBFFBPKEPLN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBFFBPKEPLN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MBFFBPKEPLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBFFBPKEPLN*))((::PBYTE)hIl2Cpp + MBFFBPKEPLN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MBFFBPKEPLN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
