#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICOPHOIEECL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ICOPHOIEECL_AMEFBODJIHJ_OFFSET UNITYSDK_OFFSET(0x1E626CE0)
#define ICOPHOIEECL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E627030)
#define ICOPHOIEECL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E627350)
#define ICOPHOIEECL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E626C70)
#define ICOPHOIEECL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E626C30)
#define ICOPHOIEECL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E626C20)
#define ICOPHOIEECL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E626DE0)
#define ICOPHOIEECL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E626D00)
#define ICOPHOIEECL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E626EB0)
#define ICOPHOIEECL_GPAFPIFJEAF_OFFSET UNITYSDK_OFFSET(0x1E626CD0)
#define ICOPHOIEECL_HLACEGGLEGF_OFFSET UNITYSDK_OFFSET(0x1E626CC0)
#define ICOPHOIEECL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E626BE0)
#define ICOPHOIEECL_KMANAJJOLLP_OFFSET UNITYSDK_OFFSET(0x1E626CF0)
#define ICOPHOIEECL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6271D0)
#define ICOPHOIEECL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E627190)
#define ICOPHOIEECL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E626C10)
#define ICOPHOIEECL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E626EF0)
#define ICOPHOIEECL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E626F50)

inline static constexpr unsigned int ICOPHOIEECL_TypeDefinitionIndex = 34017;

	class ICOPHOIEECL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AAGAKAIKGCM; // 0x18
		::System::Byte _padding0[0x4];
		::System::UInt64 JEHBHEOHGLN; // 0x20
		static ::Google::Protobuf::MessageParser_1<::ICOPHOIEECL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ICOPHOIEECL*>**)UnitySDK::FromName("", "ICOPHOIEECL")->GetStaticField(0x45340);
		}

		// static const ::System::Object GEMDHFJFBHD; // 0x0
		// static const ::System::Object MGPGDLIJKLM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOPHOIEECL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ICOPHOIEECL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICOPHOIEECL*))((::PBYTE)hIl2Cpp + ICOPHOIEECL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICOPHOIEECL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ICOPHOIEECL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ICOPHOIEECL*>*(*)())((::PBYTE)hIl2Cpp + ICOPHOIEECL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOPHOIEECL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ICOPHOIEECL* Clone()
		{
			return ((::ICOPHOIEECL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOPHOIEECL_CLONE_OFFSET))(this);
		}

		::System::UInt64 HLACEGGLEGF()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOPHOIEECL_HLACEGGLEGF_OFFSET))(this);
		}

		::System::Void GPAFPIFJEAF(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ICOPHOIEECL_GPAFPIFJEAF_OFFSET))(this, a1);
		}

		::System::UInt32 AMEFBODJIHJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOPHOIEECL_AMEFBODJIHJ_OFFSET))(this);
		}

		::System::Void KMANAJJOLLP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ICOPHOIEECL_KMANAJJOLLP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ICOPHOIEECL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ICOPHOIEECL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ICOPHOIEECL*))((::PBYTE)hIl2Cpp + ICOPHOIEECL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOPHOIEECL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOPHOIEECL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ICOPHOIEECL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOPHOIEECL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ICOPHOIEECL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICOPHOIEECL*))((::PBYTE)hIl2Cpp + ICOPHOIEECL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ICOPHOIEECL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
