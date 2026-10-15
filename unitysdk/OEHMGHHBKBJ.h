#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPGACKPLGCD;
class OEHMGHHBKBJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OEHMGHHBKBJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE2B100)
#define OEHMGHHBKBJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE2B380)
#define OEHMGHHBKBJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE2AAC0)
#define OEHMGHHBKBJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE2AA40)
#define OEHMGHHBKBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE2AA30)
#define OEHMGHHBKBJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE2ACE0)
#define OEHMGHHBKBJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE2AB70)
#define OEHMGHHBKBJ_FMIDDKHIJKI_OFFSET UNITYSDK_OFFSET(0x1DE2AB60)
#define OEHMGHHBKBJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE2AFB0)
#define OEHMGHHBKBJ_IEDCEFGFLEM_OFFSET UNITYSDK_OFFSET(0x1DE2AB50)
#define OEHMGHHBKBJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE2A9F0)
#define OEHMGHHBKBJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE2B200)
#define OEHMGHHBKBJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE2B160)
#define OEHMGHHBKBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE2AA20)
#define OEHMGHHBKBJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE2B010)
#define OEHMGHHBKBJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE2B070)

inline static constexpr unsigned int OEHMGHHBKBJ_TypeDefinitionIndex = 34211;

	class OEHMGHHBKBJ : public ::System::Object
	{
	public:
		::JPGACKPLGCD* EOKHKALHPBF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OEHMGHHBKBJ")->GetStaticField(0x14C90);
		}

		// static const ::System::Object HBJBEGGGCBK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEHMGHHBKBJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OEHMGHHBKBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEHMGHHBKBJ*))((::PBYTE)hIl2Cpp + OEHMGHHBKBJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEHMGHHBKBJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OEHMGHHBKBJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEHMGHHBKBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OEHMGHHBKBJ* Clone()
		{
			return ((::OEHMGHHBKBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEHMGHHBKBJ_CLONE_OFFSET))(this);
		}

		::JPGACKPLGCD* IEDCEFGFLEM()
		{
			return ((::JPGACKPLGCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEHMGHHBKBJ_IEDCEFGFLEM_OFFSET))(this);
		}

		::System::Void FMIDDKHIJKI(::JPGACKPLGCD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPGACKPLGCD*))((::PBYTE)hIl2Cpp + OEHMGHHBKBJ_FMIDDKHIJKI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OEHMGHHBKBJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OEHMGHHBKBJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OEHMGHHBKBJ*))((::PBYTE)hIl2Cpp + OEHMGHHBKBJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEHMGHHBKBJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEHMGHHBKBJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OEHMGHHBKBJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEHMGHHBKBJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OEHMGHHBKBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEHMGHHBKBJ*))((::PBYTE)hIl2Cpp + OEHMGHHBKBJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OEHMGHHBKBJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
