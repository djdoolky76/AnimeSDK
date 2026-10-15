#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGFMDMPCKDN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CGFMDMPCKDN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0AE840)
#define CGFMDMPCKDN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0AEA60)
#define CGFMDMPCKDN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0AE490)
#define CGFMDMPCKDN_CPBLBPJOBMN_OFFSET UNITYSDK_OFFSET(0x1E0AE4D0)
#define CGFMDMPCKDN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0AE460)
#define CGFMDMPCKDN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0AE450)
#define CGFMDMPCKDN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0AE5C0)
#define CGFMDMPCKDN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0AE4F0)
#define CGFMDMPCKDN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0AE730)
#define CGFMDMPCKDN_IJFJCEOHDLE_OFFSET UNITYSDK_OFFSET(0x1E0AE4E0)
#define CGFMDMPCKDN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0AE410)
#define CGFMDMPCKDN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0AE900)
#define CGFMDMPCKDN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0AE8D0)
#define CGFMDMPCKDN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0AE440)
#define CGFMDMPCKDN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0AE760)
#define CGFMDMPCKDN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0AE7C0)

inline static constexpr unsigned int CGFMDMPCKDN_TypeDefinitionIndex = 34258;

	class CGFMDMPCKDN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KJAENGKDFJD; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CGFMDMPCKDN")->GetStaticField(0x13E70);
		}

		// static const ::System::Object PIACMPBJOIK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGFMDMPCKDN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CGFMDMPCKDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CGFMDMPCKDN*))((::PBYTE)hIl2Cpp + CGFMDMPCKDN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGFMDMPCKDN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CGFMDMPCKDN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGFMDMPCKDN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CGFMDMPCKDN* Clone()
		{
			return ((::CGFMDMPCKDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGFMDMPCKDN_CLONE_OFFSET))(this);
		}

		::System::UInt32 CPBLBPJOBMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGFMDMPCKDN_CPBLBPJOBMN_OFFSET))(this);
		}

		::System::Void IJFJCEOHDLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CGFMDMPCKDN_IJFJCEOHDLE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CGFMDMPCKDN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CGFMDMPCKDN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CGFMDMPCKDN*))((::PBYTE)hIl2Cpp + CGFMDMPCKDN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGFMDMPCKDN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGFMDMPCKDN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CGFMDMPCKDN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGFMDMPCKDN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CGFMDMPCKDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CGFMDMPCKDN*))((::PBYTE)hIl2Cpp + CGFMDMPCKDN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CGFMDMPCKDN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
