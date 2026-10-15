#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IKHMHNOIGAB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IKHMHNOIGAB_ABLLACJACMC_OFFSET UNITYSDK_OFFSET(0x1E674360)
#define IKHMHNOIGAB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6746C0)
#define IKHMHNOIGAB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6748E0)
#define IKHMHNOIGAB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E674310)
#define IKHMHNOIGAB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6742E0)
#define IKHMHNOIGAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6742D0)
#define IKHMHNOIGAB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E674440)
#define IKHMHNOIGAB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E674370)
#define IKHMHNOIGAB_FEMNPLHAHKC_OFFSET UNITYSDK_OFFSET(0x1E674350)
#define IKHMHNOIGAB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6745B0)
#define IKHMHNOIGAB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E674290)
#define IKHMHNOIGAB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E674780)
#define IKHMHNOIGAB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E674750)
#define IKHMHNOIGAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6742C0)
#define IKHMHNOIGAB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6745E0)
#define IKHMHNOIGAB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E674640)

inline static constexpr unsigned int IKHMHNOIGAB_TypeDefinitionIndex = 32862;

	class IKHMHNOIGAB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MFHBBHFIIBO; // 0x18
		static ::Google::Protobuf::MessageParser_1<::IKHMHNOIGAB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IKHMHNOIGAB*>**)UnitySDK::FromName("", "IKHMHNOIGAB")->GetStaticField(0x505E0);
		}

		// static const ::System::Object ABELECPLDAA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHMHNOIGAB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IKHMHNOIGAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKHMHNOIGAB*))((::PBYTE)hIl2Cpp + IKHMHNOIGAB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKHMHNOIGAB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IKHMHNOIGAB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IKHMHNOIGAB*>*(*)())((::PBYTE)hIl2Cpp + IKHMHNOIGAB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHMHNOIGAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IKHMHNOIGAB* Clone()
		{
			return ((::IKHMHNOIGAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHMHNOIGAB_CLONE_OFFSET))(this);
		}

		::System::UInt32 FEMNPLHAHKC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHMHNOIGAB_FEMNPLHAHKC_OFFSET))(this);
		}

		::System::Void ABLLACJACMC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKHMHNOIGAB_ABLLACJACMC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IKHMHNOIGAB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IKHMHNOIGAB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IKHMHNOIGAB*))((::PBYTE)hIl2Cpp + IKHMHNOIGAB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHMHNOIGAB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHMHNOIGAB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IKHMHNOIGAB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHMHNOIGAB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IKHMHNOIGAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKHMHNOIGAB*))((::PBYTE)hIl2Cpp + IKHMHNOIGAB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IKHMHNOIGAB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
