#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KEPIEGKPFIJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KEPIEGKPFIJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FB28A80)
#define KEPIEGKPFIJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB28CA0)
#define KEPIEGKPFIJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1FB28670)
#define KEPIEGKPFIJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB28640)
#define KEPIEGKPFIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB28630)
#define KEPIEGKPFIJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FB28800)
#define KEPIEGKPFIJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FB28700)
#define KEPIEGKPFIJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FB28970)
#define KEPIEGKPFIJ_HNBEEEALKNG_OFFSET UNITYSDK_OFFSET(0x1FB286F0)
#define KEPIEGKPFIJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FB285C0)
#define KEPIEGKPFIJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FB28B40)
#define KEPIEGKPFIJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FB28B10)
#define KEPIEGKPFIJ_NFIDBDMCPFI_OFFSET UNITYSDK_OFFSET(0x1FB286E0)
#define KEPIEGKPFIJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FB28620)
#define KEPIEGKPFIJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FB289A0)
#define KEPIEGKPFIJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FB28A00)

inline static constexpr unsigned int KEPIEGKPFIJ_TypeDefinitionIndex = 30094;

	class KEPIEGKPFIJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 INGNOGNLFBC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KEPIEGKPFIJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KEPIEGKPFIJ*>**)UnitySDK::FromName("", "KEPIEGKPFIJ")->GetStaticField(0xACF0);
		}

		// static const ::System::Object AGLBKMEBBPE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPIEGKPFIJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KEPIEGKPFIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KEPIEGKPFIJ*))((::PBYTE)hIl2Cpp + KEPIEGKPFIJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KEPIEGKPFIJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KEPIEGKPFIJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KEPIEGKPFIJ*>*(*)())((::PBYTE)hIl2Cpp + KEPIEGKPFIJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPIEGKPFIJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KEPIEGKPFIJ* Clone()
		{
			return ((::KEPIEGKPFIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPIEGKPFIJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 NFIDBDMCPFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPIEGKPFIJ_NFIDBDMCPFI_OFFSET))(this);
		}

		::System::Void HNBEEEALKNG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KEPIEGKPFIJ_HNBEEEALKNG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KEPIEGKPFIJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KEPIEGKPFIJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KEPIEGKPFIJ*))((::PBYTE)hIl2Cpp + KEPIEGKPFIJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPIEGKPFIJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPIEGKPFIJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KEPIEGKPFIJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPIEGKPFIJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KEPIEGKPFIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KEPIEGKPFIJ*))((::PBYTE)hIl2Cpp + KEPIEGKPFIJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KEPIEGKPFIJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
