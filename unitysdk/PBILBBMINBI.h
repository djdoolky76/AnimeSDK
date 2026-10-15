#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PBILBBMINBI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PBILBBMINBI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DECA170)
#define PBILBBMINBI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DECA390)
#define PBILBBMINBI_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEC9DC0)
#define PBILBBMINBI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEC9D90)
#define PBILBBMINBI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC9D80)
#define PBILBBMINBI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEC9EF0)
#define PBILBBMINBI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEC9E20)
#define PBILBBMINBI_FJEOKLJJJBP_OFFSET UNITYSDK_OFFSET(0x1DEC9E00)
#define PBILBBMINBI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DECA060)
#define PBILBBMINBI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEC9D40)
#define PBILBBMINBI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DECA230)
#define PBILBBMINBI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DECA200)
#define PBILBBMINBI_NBBKMKBJHCF_OFFSET UNITYSDK_OFFSET(0x1DEC9E10)
#define PBILBBMINBI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEC9D70)
#define PBILBBMINBI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DECA090)
#define PBILBBMINBI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DECA0F0)

inline static constexpr unsigned int PBILBBMINBI_TypeDefinitionIndex = 27371;

	class PBILBBMINBI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OIFNINOMHKL; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PBILBBMINBI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PBILBBMINBI*>**)UnitySDK::FromName("", "PBILBBMINBI")->GetStaticField(0x2C940);
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

		static ::Google::Protobuf::MessageParser_1<::PBILBBMINBI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PBILBBMINBI*>*(*)())((::PBYTE)hIl2Cpp + PBILBBMINBI_JJGHOBBFNJD_OFFSET))();
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
