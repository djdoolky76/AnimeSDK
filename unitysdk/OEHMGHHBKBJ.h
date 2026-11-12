#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPGACKPLGCD;
class OEHMGHHBKBJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OEHMGHHBKBJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F0CDD80)
#define OEHMGHHBKBJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0CE000)
#define OEHMGHHBKBJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1F0CD740)
#define OEHMGHHBKBJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F0CD6C0)
#define OEHMGHHBKBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0CD6B0)
#define OEHMGHHBKBJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F0CD960)
#define OEHMGHHBKBJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F0CD7F0)
#define OEHMGHHBKBJ_FMIDDKHIJKI_OFFSET UNITYSDK_OFFSET(0x1F0CD7E0)
#define OEHMGHHBKBJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F0CDC30)
#define OEHMGHHBKBJ_IEDCEFGFLEM_OFFSET UNITYSDK_OFFSET(0x1F0CD7D0)
#define OEHMGHHBKBJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F0CD670)
#define OEHMGHHBKBJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F0CDE80)
#define OEHMGHHBKBJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F0CDDE0)
#define OEHMGHHBKBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F0CD6A0)
#define OEHMGHHBKBJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F0CDC90)
#define OEHMGHHBKBJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F0CDCF0)

inline static constexpr unsigned int OEHMGHHBKBJ_TypeDefinitionIndex = 35139;

	class OEHMGHHBKBJ : public ::System::Object
	{
	public:
		::JPGACKPLGCD* EOKHKALHPBF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::OEHMGHHBKBJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OEHMGHHBKBJ*>**)UnitySDK::FromName("", "OEHMGHHBKBJ")->GetStaticField(0xF7B0);
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

		static ::Google::Protobuf::MessageParser_1<::OEHMGHHBKBJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OEHMGHHBKBJ*>*(*)())((::PBYTE)hIl2Cpp + OEHMGHHBKBJ_JJGHOBBFNJD_OFFSET))();
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
