#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIKGCABFJAE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PIKGCABFJAE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF6AA80)
#define PIKGCABFJAE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF6AD50)
#define PIKGCABFJAE_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF6A6D0)
#define PIKGCABFJAE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF6A6A0)
#define PIKGCABFJAE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF6A690)
#define PIKGCABFJAE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF6A840)
#define PIKGCABFJAE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF6A760)
#define PIKGCABFJAE_FJNIJBIIFGO_OFFSET UNITYSDK_OFFSET(0x1DF6A720)
#define PIKGCABFJAE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF6A910)
#define PIKGCABFJAE_GHDHAGLJJOI_OFFSET UNITYSDK_OFFSET(0x1DF6A750)
#define PIKGCABFJAE_IMCMNNDFAEP_OFFSET UNITYSDK_OFFSET(0x1DF6A740)
#define PIKGCABFJAE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF6A650)
#define PIKGCABFJAE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF6ABD0)
#define PIKGCABFJAE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF6AB90)
#define PIKGCABFJAE_NGCIBAOKDNB_OFFSET UNITYSDK_OFFSET(0x1DF6A730)
#define PIKGCABFJAE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF6A680)
#define PIKGCABFJAE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF6A940)
#define PIKGCABFJAE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF6A9A0)

inline static constexpr unsigned int PIKGCABFJAE_TypeDefinitionIndex = 32402;

	class PIKGCABFJAE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BENKNNHKAAC; // 0x18
		::System::UInt32 NDFIDCNNGMJ; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::PIKGCABFJAE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PIKGCABFJAE*>**)UnitySDK::FromName("", "PIKGCABFJAE")->GetStaticField(0x442B0);
		}

		// static const ::System::Object KLJANMLJHEF; // 0x0
		// static const ::System::Object EIGEDOPBCKH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKGCABFJAE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PIKGCABFJAE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIKGCABFJAE*))((::PBYTE)hIl2Cpp + PIKGCABFJAE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIKGCABFJAE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PIKGCABFJAE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PIKGCABFJAE*>*(*)())((::PBYTE)hIl2Cpp + PIKGCABFJAE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKGCABFJAE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PIKGCABFJAE* Clone()
		{
			return ((::PIKGCABFJAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKGCABFJAE_CLONE_OFFSET))(this);
		}

		::System::UInt32 FJNIJBIIFGO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKGCABFJAE_FJNIJBIIFGO_OFFSET))(this);
		}

		::System::Void NGCIBAOKDNB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PIKGCABFJAE_NGCIBAOKDNB_OFFSET))(this, a1);
		}

		::System::UInt32 IMCMNNDFAEP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKGCABFJAE_IMCMNNDFAEP_OFFSET))(this);
		}

		::System::Void GHDHAGLJJOI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PIKGCABFJAE_GHDHAGLJJOI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PIKGCABFJAE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PIKGCABFJAE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PIKGCABFJAE*))((::PBYTE)hIl2Cpp + PIKGCABFJAE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKGCABFJAE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKGCABFJAE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PIKGCABFJAE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKGCABFJAE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PIKGCABFJAE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIKGCABFJAE*))((::PBYTE)hIl2Cpp + PIKGCABFJAE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PIKGCABFJAE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
