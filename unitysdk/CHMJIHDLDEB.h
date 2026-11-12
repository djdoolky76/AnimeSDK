#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHMJIHDLDEB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CHMJIHDLDEB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F39BCE0)
#define CHMJIHDLDEB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F39BF00)
#define CHMJIHDLDEB_CLONE_OFFSET UNITYSDK_OFFSET(0x1F39B930)
#define CHMJIHDLDEB_CPBLBPJOBMN_OFFSET UNITYSDK_OFFSET(0x1F39B970)
#define CHMJIHDLDEB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F39B900)
#define CHMJIHDLDEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1F39B8F0)
#define CHMJIHDLDEB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F39BA60)
#define CHMJIHDLDEB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F39B990)
#define CHMJIHDLDEB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F39BBD0)
#define CHMJIHDLDEB_IJFJCEOHDLE_OFFSET UNITYSDK_OFFSET(0x1F39B980)
#define CHMJIHDLDEB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F39B8B0)
#define CHMJIHDLDEB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F39BDA0)
#define CHMJIHDLDEB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F39BD70)
#define CHMJIHDLDEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F39B8E0)
#define CHMJIHDLDEB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F39BC00)
#define CHMJIHDLDEB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F39BC60)

inline static constexpr unsigned int CHMJIHDLDEB_TypeDefinitionIndex = 32311;

	class CHMJIHDLDEB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KJAENGKDFJD; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CHMJIHDLDEB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CHMJIHDLDEB*>**)UnitySDK::FromName("", "CHMJIHDLDEB")->GetStaticField(0x10250);
		}

		// static const ::System::Object PIACMPBJOIK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMJIHDLDEB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CHMJIHDLDEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHMJIHDLDEB*))((::PBYTE)hIl2Cpp + CHMJIHDLDEB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHMJIHDLDEB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CHMJIHDLDEB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CHMJIHDLDEB*>*(*)())((::PBYTE)hIl2Cpp + CHMJIHDLDEB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMJIHDLDEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CHMJIHDLDEB* Clone()
		{
			return ((::CHMJIHDLDEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMJIHDLDEB_CLONE_OFFSET))(this);
		}

		::System::UInt32 CPBLBPJOBMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMJIHDLDEB_CPBLBPJOBMN_OFFSET))(this);
		}

		::System::Void IJFJCEOHDLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CHMJIHDLDEB_IJFJCEOHDLE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CHMJIHDLDEB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CHMJIHDLDEB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CHMJIHDLDEB*))((::PBYTE)hIl2Cpp + CHMJIHDLDEB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMJIHDLDEB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMJIHDLDEB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CHMJIHDLDEB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMJIHDLDEB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CHMJIHDLDEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHMJIHDLDEB*))((::PBYTE)hIl2Cpp + CHMJIHDLDEB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CHMJIHDLDEB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
