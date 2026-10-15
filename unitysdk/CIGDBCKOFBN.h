#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIGDBCKOFBN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CIGDBCKOFBN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0D23C0)
#define CIGDBCKOFBN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0D2620)
#define CIGDBCKOFBN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0D1FD0)
#define CIGDBCKOFBN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0D1F90)
#define CIGDBCKOFBN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D1F80)
#define CIGDBCKOFBN_EOHDCEKJMGN_OFFSET UNITYSDK_OFFSET(0x1E0D2040)
#define CIGDBCKOFBN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0D2140)
#define CIGDBCKOFBN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0D2060)
#define CIGDBCKOFBN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0D2220)
#define CIGDBCKOFBN_IGJJJIJIDND_OFFSET UNITYSDK_OFFSET(0x1E0D2030)
#define CIGDBCKOFBN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0D1F40)
#define CIGDBCKOFBN_JKPCKIFONCA_OFFSET UNITYSDK_OFFSET(0x1E0D2050)
#define CIGDBCKOFBN_JPELNAEOECH_OFFSET UNITYSDK_OFFSET(0x1E0D2020)
#define CIGDBCKOFBN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0D24A0)
#define CIGDBCKOFBN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0D2460)
#define CIGDBCKOFBN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0D1F70)
#define CIGDBCKOFBN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0D2250)
#define CIGDBCKOFBN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0D22B0)

inline static constexpr unsigned int CIGDBCKOFBN_TypeDefinitionIndex = 33191;

	class CIGDBCKOFBN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean MPAOPHOAMBP; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 FAIGNAFCOOO; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::CIGDBCKOFBN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CIGDBCKOFBN*>**)UnitySDK::FromName("", "CIGDBCKOFBN")->GetStaticField(0x174B0);
		}

		// static const ::System::Object DHLJDIPLLPF; // 0x0
		// static const ::System::Object AMMGPIGICPJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGDBCKOFBN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CIGDBCKOFBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIGDBCKOFBN*))((::PBYTE)hIl2Cpp + CIGDBCKOFBN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIGDBCKOFBN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CIGDBCKOFBN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CIGDBCKOFBN*>*(*)())((::PBYTE)hIl2Cpp + CIGDBCKOFBN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGDBCKOFBN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CIGDBCKOFBN* Clone()
		{
			return ((::CIGDBCKOFBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGDBCKOFBN_CLONE_OFFSET))(this);
		}

		::System::UInt32 JPELNAEOECH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGDBCKOFBN_JPELNAEOECH_OFFSET))(this);
		}

		::System::Void IGJJJIJIDND(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CIGDBCKOFBN_IGJJJIJIDND_OFFSET))(this, a1);
		}

		::System::Boolean EOHDCEKJMGN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGDBCKOFBN_EOHDCEKJMGN_OFFSET))(this);
		}

		::System::Void JKPCKIFONCA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CIGDBCKOFBN_JKPCKIFONCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CIGDBCKOFBN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CIGDBCKOFBN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CIGDBCKOFBN*))((::PBYTE)hIl2Cpp + CIGDBCKOFBN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGDBCKOFBN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGDBCKOFBN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CIGDBCKOFBN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGDBCKOFBN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CIGDBCKOFBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIGDBCKOFBN*))((::PBYTE)hIl2Cpp + CIGDBCKOFBN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CIGDBCKOFBN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
