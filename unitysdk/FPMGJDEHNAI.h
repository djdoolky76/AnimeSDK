#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPMGJDEHNAI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FPMGJDEHNAI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E40D890)
#define FPMGJDEHNAI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E40DAB0)
#define FPMGJDEHNAI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E40D4E0)
#define FPMGJDEHNAI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E40D4B0)
#define FPMGJDEHNAI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E40D4A0)
#define FPMGJDEHNAI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E40D610)
#define FPMGJDEHNAI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E40D540)
#define FPMGJDEHNAI_FFPAHEBJIKK_OFFSET UNITYSDK_OFFSET(0x1E40D520)
#define FPMGJDEHNAI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E40D780)
#define FPMGJDEHNAI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E40D460)
#define FPMGJDEHNAI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E40D950)
#define FPMGJDEHNAI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E40D920)
#define FPMGJDEHNAI_OHEBFCPLMGF_OFFSET UNITYSDK_OFFSET(0x1E40D530)
#define FPMGJDEHNAI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E40D490)
#define FPMGJDEHNAI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E40D7B0)
#define FPMGJDEHNAI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E40D810)

inline static constexpr unsigned int FPMGJDEHNAI_TypeDefinitionIndex = 28153;

	class FPMGJDEHNAI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OPPNMFMNMGC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FPMGJDEHNAI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FPMGJDEHNAI*>**)UnitySDK::FromName("", "FPMGJDEHNAI")->GetStaticField(0x69840);
		}

		// static const ::System::Object BOIGPPCIPFF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMGJDEHNAI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FPMGJDEHNAI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPMGJDEHNAI*))((::PBYTE)hIl2Cpp + FPMGJDEHNAI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPMGJDEHNAI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FPMGJDEHNAI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FPMGJDEHNAI*>*(*)())((::PBYTE)hIl2Cpp + FPMGJDEHNAI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMGJDEHNAI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FPMGJDEHNAI* Clone()
		{
			return ((::FPMGJDEHNAI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMGJDEHNAI_CLONE_OFFSET))(this);
		}

		::System::UInt32 FFPAHEBJIKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMGJDEHNAI_FFPAHEBJIKK_OFFSET))(this);
		}

		::System::Void OHEBFCPLMGF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FPMGJDEHNAI_OHEBFCPLMGF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FPMGJDEHNAI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FPMGJDEHNAI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FPMGJDEHNAI*))((::PBYTE)hIl2Cpp + FPMGJDEHNAI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMGJDEHNAI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMGJDEHNAI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FPMGJDEHNAI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMGJDEHNAI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FPMGJDEHNAI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPMGJDEHNAI*))((::PBYTE)hIl2Cpp + FPMGJDEHNAI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FPMGJDEHNAI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
