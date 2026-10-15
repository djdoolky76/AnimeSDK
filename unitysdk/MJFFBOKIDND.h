#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MJFFBOKIDND;
class MKCBFFIOBAB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MJFFBOKIDND_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA49510)
#define MJFFBOKIDND_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA49930)
#define MJFFBOKIDND_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA48FA0)
#define MJFFBOKIDND_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA48E90)
#define MJFFBOKIDND_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA48E80)
#define MJFFBOKIDND_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA49190)
#define MJFFBOKIDND_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA49010)
#define MJFFBOKIDND_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA49310)
#define MJFFBOKIDND_GFNAIKCBHNO_OFFSET UNITYSDK_OFFSET(0x1EA48FE0)
#define MJFFBOKIDND_GPAFPIFJEAF_OFFSET UNITYSDK_OFFSET(0x1EA49000)
#define MJFFBOKIDND_HLACEGGLEGF_OFFSET UNITYSDK_OFFSET(0x1EA48FF0)
#define MJFFBOKIDND_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA48E40)
#define MJFFBOKIDND_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA49780)
#define MJFFBOKIDND_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA49640)
#define MJFFBOKIDND_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA48E70)
#define MJFFBOKIDND_PDGHKFIPNHC_OFFSET UNITYSDK_OFFSET(0x1EA48FD0)
#define MJFFBOKIDND_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA493D0)
#define MJFFBOKIDND_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA49430)

inline static constexpr unsigned int MJFFBOKIDND_TypeDefinitionIndex = 34117;

	class MJFFBOKIDND : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::MKCBFFIOBAB* LNCJBCJGOFP; // 0x18
		::System::UInt64 JEHBHEOHGLN; // 0x20
		static ::Google::Protobuf::MessageParser_1<::MJFFBOKIDND*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MJFFBOKIDND*>**)UnitySDK::FromName("", "MJFFBOKIDND")->GetStaticField(0x55750);
		}

		// static const ::System::Object MPMEBEMMDPL; // 0x0
		// static const ::System::Object GEMDHFJFBHD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJFFBOKIDND_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MJFFBOKIDND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJFFBOKIDND*))((::PBYTE)hIl2Cpp + MJFFBOKIDND_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJFFBOKIDND_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MJFFBOKIDND*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MJFFBOKIDND*>*(*)())((::PBYTE)hIl2Cpp + MJFFBOKIDND_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJFFBOKIDND_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MJFFBOKIDND* Clone()
		{
			return ((::MJFFBOKIDND*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJFFBOKIDND_CLONE_OFFSET))(this);
		}

		::MKCBFFIOBAB* PDGHKFIPNHC()
		{
			return ((::MKCBFFIOBAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJFFBOKIDND_PDGHKFIPNHC_OFFSET))(this);
		}

		::System::Void GFNAIKCBHNO(::MKCBFFIOBAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKCBFFIOBAB*))((::PBYTE)hIl2Cpp + MJFFBOKIDND_GFNAIKCBHNO_OFFSET))(this, a1);
		}

		::System::UInt64 HLACEGGLEGF()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MJFFBOKIDND_HLACEGGLEGF_OFFSET))(this);
		}

		::System::Void GPAFPIFJEAF(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MJFFBOKIDND_GPAFPIFJEAF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MJFFBOKIDND_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MJFFBOKIDND* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MJFFBOKIDND*))((::PBYTE)hIl2Cpp + MJFFBOKIDND_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJFFBOKIDND_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJFFBOKIDND_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MJFFBOKIDND_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJFFBOKIDND_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MJFFBOKIDND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJFFBOKIDND*))((::PBYTE)hIl2Cpp + MJFFBOKIDND_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MJFFBOKIDND_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
