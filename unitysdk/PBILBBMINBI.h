#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PBILBBMINBI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PBILBBMINBI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEF7870)
#define PBILBBMINBI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEF7A90)
#define PBILBBMINBI_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEF74C0)
#define PBILBBMINBI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEF7490)
#define PBILBBMINBI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEF7480)
#define PBILBBMINBI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEF75F0)
#define PBILBBMINBI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEF7520)
#define PBILBBMINBI_FJEOKLJJJBP_OFFSET UNITYSDK_OFFSET(0x1DEF7500)
#define PBILBBMINBI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEF7760)
#define PBILBBMINBI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEF7440)
#define PBILBBMINBI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEF7930)
#define PBILBBMINBI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEF7900)
#define PBILBBMINBI_NBBKMKBJHCF_OFFSET UNITYSDK_OFFSET(0x1DEF7510)
#define PBILBBMINBI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEF7470)
#define PBILBBMINBI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEF7790)
#define PBILBBMINBI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEF77F0)

inline static constexpr unsigned int PBILBBMINBI_TypeDefinitionIndex = 27371;

	class PBILBBMINBI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OIFNINOMHKL; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PBILBBMINBI")->GetStaticField(0x336F0);
		}

		// static const ::System::Object IJAOJBIBDEN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBILBBMINBI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PBILBBMINBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBILBBMINBI*))((::PBYTE)hIl2Cpp + PBILBBMINBI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBILBBMINBI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PBILBBMINBI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBILBBMINBI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PBILBBMINBI* Clone()
		{
			return ((::PBILBBMINBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBILBBMINBI_CLONE_OFFSET))(this);
		}

		::System::UInt32 FJEOKLJJJBP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBILBBMINBI_FJEOKLJJJBP_OFFSET))(this);
		}

		::System::Void NBBKMKBJHCF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PBILBBMINBI_NBBKMKBJHCF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PBILBBMINBI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PBILBBMINBI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PBILBBMINBI*))((::PBYTE)hIl2Cpp + PBILBBMINBI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBILBBMINBI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBILBBMINBI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PBILBBMINBI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBILBBMINBI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PBILBBMINBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBILBBMINBI*))((::PBYTE)hIl2Cpp + PBILBBMINBI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PBILBBMINBI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
