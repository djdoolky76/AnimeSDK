#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EGGOCLKIAME;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EGGOCLKIAME_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x2049ACF0)
#define EGGOCLKIAME_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x2049B060)
#define EGGOCLKIAME_CCTOR_OFFSET UNITYSDK_OFFSET(0x2049B280)
#define EGGOCLKIAME_CLONE_OFFSET UNITYSDK_OFFSET(0x2049ACB0)
#define EGGOCLKIAME_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2049AC80)
#define EGGOCLKIAME_CTOR_OFFSET UNITYSDK_OFFSET(0x2049AC70)
#define EGGOCLKIAME_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x2049AD00)
#define EGGOCLKIAME_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2049ADE0)
#define EGGOCLKIAME_EQUALS_OFFSET UNITYSDK_OFFSET(0x2049AD10)
#define EGGOCLKIAME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2049AF50)
#define EGGOCLKIAME_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x2049AC30)
#define EGGOCLKIAME_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2049B120)
#define EGGOCLKIAME_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x2049B0F0)
#define EGGOCLKIAME_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2049AC60)
#define EGGOCLKIAME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2049AF80)
#define EGGOCLKIAME_WRITETO_OFFSET UNITYSDK_OFFSET(0x2049AFE0)

inline static constexpr unsigned int EGGOCLKIAME_TypeDefinitionIndex = 33488;

	class EGGOCLKIAME : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NPFBAFODCBI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::EGGOCLKIAME*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EGGOCLKIAME*>**)UnitySDK::FromName("", "EGGOCLKIAME")->GetStaticField(0x4C200);
		}

		// static const ::System::Object JJDOFLLPDJE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGOCLKIAME_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EGGOCLKIAME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EGGOCLKIAME*))((::PBYTE)hIl2Cpp + EGGOCLKIAME_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGGOCLKIAME_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EGGOCLKIAME*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EGGOCLKIAME*>*(*)())((::PBYTE)hIl2Cpp + EGGOCLKIAME_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGOCLKIAME_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EGGOCLKIAME* Clone()
		{
			return ((::EGGOCLKIAME*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGOCLKIAME_CLONE_OFFSET))(this);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGOCLKIAME_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EGGOCLKIAME_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EGGOCLKIAME_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EGGOCLKIAME* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EGGOCLKIAME*))((::PBYTE)hIl2Cpp + EGGOCLKIAME_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGOCLKIAME_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGOCLKIAME_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EGGOCLKIAME_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGOCLKIAME_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EGGOCLKIAME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EGGOCLKIAME*))((::PBYTE)hIl2Cpp + EGGOCLKIAME_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EGGOCLKIAME_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
