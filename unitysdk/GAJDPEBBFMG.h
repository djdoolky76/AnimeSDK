#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAGKEDMHEOI;
class GAJDPEBBFMG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GAJDPEBBFMG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F70BF20)
#define GAJDPEBBFMG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F70C1C0)
#define GAJDPEBBFMG_CLONE_OFFSET UNITYSDK_OFFSET(0x1F70B8B0)
#define GAJDPEBBFMG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F70B840)
#define GAJDPEBBFMG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F70B830)
#define GAJDPEBBFMG_DOKNAGBFBEC_OFFSET UNITYSDK_OFFSET(0x1F70B930)
#define GAJDPEBBFMG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F70BAC0)
#define GAJDPEBBFMG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F70B950)
#define GAJDPEBBFMG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F70BD90)
#define GAJDPEBBFMG_GJOFDMODOHJ_OFFSET UNITYSDK_OFFSET(0x1F70B940)
#define GAJDPEBBFMG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F70B7F0)
#define GAJDPEBBFMG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F70C010)
#define GAJDPEBBFMG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F70BF80)
#define GAJDPEBBFMG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F70B820)
#define GAJDPEBBFMG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F70BE30)
#define GAJDPEBBFMG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F70BE90)

inline static constexpr unsigned int GAJDPEBBFMG_TypeDefinitionIndex = 27803;

	class GAJDPEBBFMG : public ::System::Object
	{
	public:
		::CAGKEDMHEOI* PHBFHCCKHIC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GAJDPEBBFMG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GAJDPEBBFMG*>**)UnitySDK::FromName("", "GAJDPEBBFMG")->GetStaticField(0x54770);
		}

		// static const ::System::Object EOPEFMJDFKC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJDPEBBFMG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GAJDPEBBFMG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAJDPEBBFMG*))((::PBYTE)hIl2Cpp + GAJDPEBBFMG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAJDPEBBFMG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GAJDPEBBFMG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GAJDPEBBFMG*>*(*)())((::PBYTE)hIl2Cpp + GAJDPEBBFMG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJDPEBBFMG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GAJDPEBBFMG* Clone()
		{
			return ((::GAJDPEBBFMG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJDPEBBFMG_CLONE_OFFSET))(this);
		}

		::CAGKEDMHEOI* DOKNAGBFBEC()
		{
			return ((::CAGKEDMHEOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJDPEBBFMG_DOKNAGBFBEC_OFFSET))(this);
		}

		::System::Void GJOFDMODOHJ(::CAGKEDMHEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGKEDMHEOI*))((::PBYTE)hIl2Cpp + GAJDPEBBFMG_GJOFDMODOHJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GAJDPEBBFMG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GAJDPEBBFMG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GAJDPEBBFMG*))((::PBYTE)hIl2Cpp + GAJDPEBBFMG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJDPEBBFMG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJDPEBBFMG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GAJDPEBBFMG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJDPEBBFMG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GAJDPEBBFMG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAJDPEBBFMG*))((::PBYTE)hIl2Cpp + GAJDPEBBFMG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GAJDPEBBFMG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
