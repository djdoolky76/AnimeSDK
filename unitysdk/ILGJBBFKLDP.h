#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CEBJAAAIPDA.h"
#include "unitysdk/System/Object.h"
class ILGJBBFKLDP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ILGJBBFKLDP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6AD830)
#define ILGJBBFKLDP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6ADB40)
#define ILGJBBFKLDP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6AD470)
#define ILGJBBFKLDP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6AD440)
#define ILGJBBFKLDP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6AD430)
#define ILGJBBFKLDP_DMAJLABJKDF_OFFSET UNITYSDK_OFFSET(0x1E6AD4F0)
#define ILGJBBFKLDP_ENDJAMFEKDG_OFFSET UNITYSDK_OFFSET(0x1E6AD4C0)
#define ILGJBBFKLDP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6AD5E0)
#define ILGJBBFKLDP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6AD500)
#define ILGJBBFKLDP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6AD6B0)
#define ILGJBBFKLDP_HICOOKBPHIO_OFFSET UNITYSDK_OFFSET(0x1E6AD4E0)
#define ILGJBBFKLDP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6AD3F0)
#define ILGJBBFKLDP_JJHKFLMKNBP_OFFSET UNITYSDK_OFFSET(0x1E6AD4D0)
#define ILGJBBFKLDP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6AD9C0)
#define ILGJBBFKLDP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6AD980)
#define ILGJBBFKLDP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6AD420)
#define ILGJBBFKLDP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6AD6E0)
#define ILGJBBFKLDP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6AD740)

inline static constexpr unsigned int ILGJBBFKLDP_TypeDefinitionIndex = 35056;

	class ILGJBBFKLDP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::CEBJAAAIPDA IHALENLCAKN; // 0x18
		::System::UInt32 OEAHKANPNOM; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ILGJBBFKLDP")->GetStaticField(0x56420);
		}

		// static const ::System::Object LPPPEDOHNOK; // 0x0
		// static const ::System::Object HNLEALIBPBB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGJBBFKLDP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ILGJBBFKLDP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILGJBBFKLDP*))((::PBYTE)hIl2Cpp + ILGJBBFKLDP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILGJBBFKLDP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ILGJBBFKLDP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGJBBFKLDP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ILGJBBFKLDP* Clone()
		{
			return ((::ILGJBBFKLDP*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGJBBFKLDP_CLONE_OFFSET))(this);
		}

		::CEBJAAAIPDA ENDJAMFEKDG()
		{
			return ((::CEBJAAAIPDA(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGJBBFKLDP_ENDJAMFEKDG_OFFSET))(this);
		}

		::System::Void JJHKFLMKNBP(::CEBJAAAIPDA a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEBJAAAIPDA))((::PBYTE)hIl2Cpp + ILGJBBFKLDP_JJHKFLMKNBP_OFFSET))(this, a1);
		}

		::System::UInt32 HICOOKBPHIO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGJBBFKLDP_HICOOKBPHIO_OFFSET))(this);
		}

		::System::Void DMAJLABJKDF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ILGJBBFKLDP_DMAJLABJKDF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ILGJBBFKLDP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ILGJBBFKLDP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ILGJBBFKLDP*))((::PBYTE)hIl2Cpp + ILGJBBFKLDP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGJBBFKLDP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGJBBFKLDP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ILGJBBFKLDP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGJBBFKLDP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ILGJBBFKLDP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILGJBBFKLDP*))((::PBYTE)hIl2Cpp + ILGJBBFKLDP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ILGJBBFKLDP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
