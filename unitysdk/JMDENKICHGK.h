#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMBFLLAKFFE;
class JMDENKICHGK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JMDENKICHGK_AHFLEDNLMJB_OFFSET UNITYSDK_OFFSET(0x1E78A090)
#define JMDENKICHGK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E78A620)
#define JMDENKICHGK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E78A940)
#define JMDENKICHGK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E78A000)
#define JMDENKICHGK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E789F90)
#define JMDENKICHGK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E789F80)
#define JMDENKICHGK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E78A210)
#define JMDENKICHGK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E78A0A0)
#define JMDENKICHGK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E78A4E0)
#define JMDENKICHGK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E789F40)
#define JMDENKICHGK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E78A750)
#define JMDENKICHGK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E78A680)
#define JMDENKICHGK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E789F70)
#define JMDENKICHGK_PLNKNFAKCOC_OFFSET UNITYSDK_OFFSET(0x1E78A080)
#define JMDENKICHGK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E78A530)
#define JMDENKICHGK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E78A590)

inline static constexpr unsigned int JMDENKICHGK_TypeDefinitionIndex = 26900;

	class JMDENKICHGK : public ::System::Object
	{
	public:
		::BMBFLLAKFFE* BFOMEPJFKFI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JMDENKICHGK")->GetStaticField(0x6BFB0);
		}

		// static const ::System::Object FCBOLGLMGPF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMDENKICHGK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JMDENKICHGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMDENKICHGK*))((::PBYTE)hIl2Cpp + JMDENKICHGK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMDENKICHGK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JMDENKICHGK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMDENKICHGK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JMDENKICHGK* Clone()
		{
			return ((::JMDENKICHGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMDENKICHGK_CLONE_OFFSET))(this);
		}

		::BMBFLLAKFFE* PLNKNFAKCOC()
		{
			return ((::BMBFLLAKFFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMDENKICHGK_PLNKNFAKCOC_OFFSET))(this);
		}

		::System::Void AHFLEDNLMJB(::BMBFLLAKFFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMBFLLAKFFE*))((::PBYTE)hIl2Cpp + JMDENKICHGK_AHFLEDNLMJB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JMDENKICHGK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JMDENKICHGK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JMDENKICHGK*))((::PBYTE)hIl2Cpp + JMDENKICHGK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMDENKICHGK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMDENKICHGK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JMDENKICHGK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMDENKICHGK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JMDENKICHGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMDENKICHGK*))((::PBYTE)hIl2Cpp + JMDENKICHGK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JMDENKICHGK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
