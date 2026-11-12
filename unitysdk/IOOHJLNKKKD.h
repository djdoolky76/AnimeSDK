#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOOHJLNKKKD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IOOHJLNKKKD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F9E3B20)
#define IOOHJLNKKKD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9E3D40)
#define IOOHJLNKKKD_CLONE_OFFSET UNITYSDK_OFFSET(0x1F9E3770)
#define IOOHJLNKKKD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F9E3740)
#define IOOHJLNKKKD_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9E3730)
#define IOOHJLNKKKD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F9E38A0)
#define IOOHJLNKKKD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F9E37D0)
#define IOOHJLNKKKD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F9E3A10)
#define IOOHJLNKKKD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F9E36F0)
#define IOOHJLNKKKD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F9E3BE0)
#define IOOHJLNKKKD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F9E3BB0)
#define IOOHJLNKKKD_MFDGNAJMGLB_OFFSET UNITYSDK_OFFSET(0x1F9E37C0)
#define IOOHJLNKKKD_NOHEIINLGMA_OFFSET UNITYSDK_OFFSET(0x1F9E37B0)
#define IOOHJLNKKKD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F9E3720)
#define IOOHJLNKKKD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F9E3A40)
#define IOOHJLNKKKD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F9E3AA0)

inline static constexpr unsigned int IOOHJLNKKKD_TypeDefinitionIndex = 26522;

	class IOOHJLNKKKD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 ABPDPMHFFNN; // 0x18
		static ::Google::Protobuf::MessageParser_1<::IOOHJLNKKKD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IOOHJLNKKKD*>**)UnitySDK::FromName("", "IOOHJLNKKKD")->GetStaticField(0x58C00);
		}

		// static const ::System::Object EDGGGCNOFHI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOOHJLNKKKD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IOOHJLNKKKD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOOHJLNKKKD*))((::PBYTE)hIl2Cpp + IOOHJLNKKKD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IOOHJLNKKKD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IOOHJLNKKKD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IOOHJLNKKKD*>*(*)())((::PBYTE)hIl2Cpp + IOOHJLNKKKD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOOHJLNKKKD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IOOHJLNKKKD* Clone()
		{
			return ((::IOOHJLNKKKD*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOOHJLNKKKD_CLONE_OFFSET))(this);
		}

		::System::UInt32 NOHEIINLGMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOOHJLNKKKD_NOHEIINLGMA_OFFSET))(this);
		}

		::System::Void MFDGNAJMGLB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IOOHJLNKKKD_MFDGNAJMGLB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IOOHJLNKKKD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IOOHJLNKKKD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IOOHJLNKKKD*))((::PBYTE)hIl2Cpp + IOOHJLNKKKD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOOHJLNKKKD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOOHJLNKKKD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IOOHJLNKKKD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOOHJLNKKKD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IOOHJLNKKKD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOOHJLNKKKD*))((::PBYTE)hIl2Cpp + IOOHJLNKKKD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IOOHJLNKKKD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
