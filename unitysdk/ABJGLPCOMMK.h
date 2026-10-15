#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABJGLPCOMMK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ABJGLPCOMMK_BPLHOEHNLOJ_OFFSET UNITYSDK_OFFSET(0x1DDCD220)
#define ABJGLPCOMMK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDCD5C0)
#define ABJGLPCOMMK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDCD7E0)
#define ABJGLPCOMMK_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDCD1B0)
#define ABJGLPCOMMK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDCD180)
#define ABJGLPCOMMK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDCD170)
#define ABJGLPCOMMK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDCD340)
#define ABJGLPCOMMK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDCD240)
#define ABJGLPCOMMK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDCD4B0)
#define ABJGLPCOMMK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDCD100)
#define ABJGLPCOMMK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDCD680)
#define ABJGLPCOMMK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDCD650)
#define ABJGLPCOMMK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDCD160)
#define ABJGLPCOMMK_PKDALMEFABJ_OFFSET UNITYSDK_OFFSET(0x1DDCD230)
#define ABJGLPCOMMK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDCD4E0)
#define ABJGLPCOMMK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDCD540)

inline static constexpr unsigned int ABJGLPCOMMK_TypeDefinitionIndex = 25522;

	class ABJGLPCOMMK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JCNNLBKJNCD; // 0x18
		static ::Google::Protobuf::MessageParser_1<::ABJGLPCOMMK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ABJGLPCOMMK*>**)UnitySDK::FromName("", "ABJGLPCOMMK")->GetStaticField(0x39890);
		}

		// static const ::System::Object JDIKLBOEIHK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJGLPCOMMK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ABJGLPCOMMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABJGLPCOMMK*))((::PBYTE)hIl2Cpp + ABJGLPCOMMK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABJGLPCOMMK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ABJGLPCOMMK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ABJGLPCOMMK*>*(*)())((::PBYTE)hIl2Cpp + ABJGLPCOMMK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJGLPCOMMK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ABJGLPCOMMK* Clone()
		{
			return ((::ABJGLPCOMMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJGLPCOMMK_CLONE_OFFSET))(this);
		}

		::System::UInt32 BPLHOEHNLOJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJGLPCOMMK_BPLHOEHNLOJ_OFFSET))(this);
		}

		::System::Void PKDALMEFABJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABJGLPCOMMK_PKDALMEFABJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ABJGLPCOMMK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ABJGLPCOMMK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABJGLPCOMMK*))((::PBYTE)hIl2Cpp + ABJGLPCOMMK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJGLPCOMMK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJGLPCOMMK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ABJGLPCOMMK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJGLPCOMMK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ABJGLPCOMMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABJGLPCOMMK*))((::PBYTE)hIl2Cpp + ABJGLPCOMMK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ABJGLPCOMMK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
