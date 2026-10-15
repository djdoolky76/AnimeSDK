#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGDHPBBNEIC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IGDHPBBNEIC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E64A650)
#define IGDHPBBNEIC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E64A870)
#define IGDHPBBNEIC_CIHIACBANKF_OFFSET UNITYSDK_OFFSET(0x1E64A2E0)
#define IGDHPBBNEIC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E64A2A0)
#define IGDHPBBNEIC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E64A270)
#define IGDHPBBNEIC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E64A260)
#define IGDHPBBNEIC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E64A3D0)
#define IGDHPBBNEIC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E64A300)
#define IGDHPBBNEIC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E64A540)
#define IGDHPBBNEIC_HAHFLCFONPK_OFFSET UNITYSDK_OFFSET(0x1E64A2F0)
#define IGDHPBBNEIC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E64A220)
#define IGDHPBBNEIC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E64A710)
#define IGDHPBBNEIC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E64A6E0)
#define IGDHPBBNEIC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E64A250)
#define IGDHPBBNEIC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E64A570)
#define IGDHPBBNEIC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E64A5D0)

inline static constexpr unsigned int IGDHPBBNEIC_TypeDefinitionIndex = 33704;

	class IGDHPBBNEIC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GJJDLFJNHFJ; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IGDHPBBNEIC")->GetStaticField(0x4ABD0);
		}

		// static const ::System::Object ACLKHKBOAIH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDHPBBNEIC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IGDHPBBNEIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGDHPBBNEIC*))((::PBYTE)hIl2Cpp + IGDHPBBNEIC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGDHPBBNEIC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IGDHPBBNEIC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDHPBBNEIC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IGDHPBBNEIC* Clone()
		{
			return ((::IGDHPBBNEIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDHPBBNEIC_CLONE_OFFSET))(this);
		}

		::System::UInt32 CIHIACBANKF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDHPBBNEIC_CIHIACBANKF_OFFSET))(this);
		}

		::System::Void HAHFLCFONPK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IGDHPBBNEIC_HAHFLCFONPK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IGDHPBBNEIC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IGDHPBBNEIC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IGDHPBBNEIC*))((::PBYTE)hIl2Cpp + IGDHPBBNEIC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDHPBBNEIC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDHPBBNEIC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IGDHPBBNEIC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDHPBBNEIC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IGDHPBBNEIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGDHPBBNEIC*))((::PBYTE)hIl2Cpp + IGDHPBBNEIC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IGDHPBBNEIC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
