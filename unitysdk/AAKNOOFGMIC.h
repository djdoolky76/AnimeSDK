#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAKNOOFGMIC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AAKNOOFGMIC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDBD960)
#define AAKNOOFGMIC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDBDB80)
#define AAKNOOFGMIC_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDBD5B0)
#define AAKNOOFGMIC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDBD580)
#define AAKNOOFGMIC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDBD570)
#define AAKNOOFGMIC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDBD6E0)
#define AAKNOOFGMIC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDBD610)
#define AAKNOOFGMIC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDBD850)
#define AAKNOOFGMIC_IGHHFLHPCDN_OFFSET UNITYSDK_OFFSET(0x1DDBD600)
#define AAKNOOFGMIC_JGKCDIFEMPL_OFFSET UNITYSDK_OFFSET(0x1DDBD5F0)
#define AAKNOOFGMIC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDBD530)
#define AAKNOOFGMIC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDBDA20)
#define AAKNOOFGMIC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDBD9F0)
#define AAKNOOFGMIC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDBD560)
#define AAKNOOFGMIC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDBD880)
#define AAKNOOFGMIC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDBD8E0)

	class AAKNOOFGMIC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AJPNGCJCMEB; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AAKNOOFGMIC")->GetStaticField(0x371F0);
		}

		// static const ::System::Object FBCFBAPNOGL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKNOOFGMIC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AAKNOOFGMIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AAKNOOFGMIC*))((::PBYTE)hIl2Cpp + AAKNOOFGMIC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAKNOOFGMIC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AAKNOOFGMIC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKNOOFGMIC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AAKNOOFGMIC* Clone()
		{
			return ((::AAKNOOFGMIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKNOOFGMIC_CLONE_OFFSET))(this);
		}

		::System::UInt32 JGKCDIFEMPL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKNOOFGMIC_JGKCDIFEMPL_OFFSET))(this);
		}

		::System::Void IGHHFLHPCDN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AAKNOOFGMIC_IGHHFLHPCDN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AAKNOOFGMIC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AAKNOOFGMIC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AAKNOOFGMIC*))((::PBYTE)hIl2Cpp + AAKNOOFGMIC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKNOOFGMIC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKNOOFGMIC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AAKNOOFGMIC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKNOOFGMIC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AAKNOOFGMIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AAKNOOFGMIC*))((::PBYTE)hIl2Cpp + AAKNOOFGMIC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AAKNOOFGMIC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
