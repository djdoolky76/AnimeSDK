#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJHPILBBHDI_BBIBCFCKPJH_EGCFNCBLHJC.h"
#include "unitysdk/System/Object.h"
class IJHPILBBHDI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IJHPILBBHDI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6946C0)
#define IJHPILBBHDI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6949D0)
#define IJHPILBBHDI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E694300)
#define IJHPILBBHDI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6942D0)
#define IJHPILBBHDI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6942C0)
#define IJHPILBBHDI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E694470)
#define IJHPILBBHDI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E694390)
#define IJHPILBBHDI_GAIKIHDIOBM_OFFSET UNITYSDK_OFFSET(0x1E694360)
#define IJHPILBBHDI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E694540)
#define IJHPILBBHDI_JBENBABCOGB_OFFSET UNITYSDK_OFFSET(0x1E694350)
#define IJHPILBBHDI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E694280)
#define IJHPILBBHDI_JNMHHAEPECA_OFFSET UNITYSDK_OFFSET(0x1E694380)
#define IJHPILBBHDI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E694850)
#define IJHPILBBHDI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E694810)
#define IJHPILBBHDI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6942B0)
#define IJHPILBBHDI_PCKEJOJIOOM_OFFSET UNITYSDK_OFFSET(0x1E694370)
#define IJHPILBBHDI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E694570)
#define IJHPILBBHDI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6945D0)

inline static constexpr unsigned int IJHPILBBHDI_TypeDefinitionIndex = 32434;

	class IJHPILBBHDI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KCIKBKIBOPB; // 0x18
		::IJHPILBBHDI_BBIBCFCKPJH_EGCFNCBLHJC AFHHMCKLLAJ; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IJHPILBBHDI")->GetStaticField(0x52500);
		}

		// static const ::System::Object LFMHICIGAPC; // 0x0
		// static const ::System::Object LKCCGCBCJJM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJHPILBBHDI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IJHPILBBHDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJHPILBBHDI*))((::PBYTE)hIl2Cpp + IJHPILBBHDI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJHPILBBHDI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IJHPILBBHDI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJHPILBBHDI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IJHPILBBHDI* Clone()
		{
			return ((::IJHPILBBHDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJHPILBBHDI_CLONE_OFFSET))(this);
		}

		::IJHPILBBHDI_BBIBCFCKPJH_EGCFNCBLHJC JBENBABCOGB()
		{
			return ((::IJHPILBBHDI_BBIBCFCKPJH_EGCFNCBLHJC(*)(::PVOID))((::PBYTE)hIl2Cpp + IJHPILBBHDI_JBENBABCOGB_OFFSET))(this);
		}

		::System::Void GAIKIHDIOBM(::IJHPILBBHDI_BBIBCFCKPJH_EGCFNCBLHJC a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJHPILBBHDI_BBIBCFCKPJH_EGCFNCBLHJC))((::PBYTE)hIl2Cpp + IJHPILBBHDI_GAIKIHDIOBM_OFFSET))(this, a1);
		}

		::System::UInt32 PCKEJOJIOOM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJHPILBBHDI_PCKEJOJIOOM_OFFSET))(this);
		}

		::System::Void JNMHHAEPECA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IJHPILBBHDI_JNMHHAEPECA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IJHPILBBHDI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IJHPILBBHDI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IJHPILBBHDI*))((::PBYTE)hIl2Cpp + IJHPILBBHDI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJHPILBBHDI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJHPILBBHDI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IJHPILBBHDI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJHPILBBHDI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IJHPILBBHDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJHPILBBHDI*))((::PBYTE)hIl2Cpp + IJHPILBBHDI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IJHPILBBHDI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
