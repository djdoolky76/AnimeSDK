#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAILAPHKBNO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EAILAPHKBNO_BJKODHDFIFL_OFFSET UNITYSDK_OFFSET(0x1E22AD20)
#define EAILAPHKBNO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E22B0F0)
#define EAILAPHKBNO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E22B2B0)
#define EAILAPHKBNO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E22ACD0)
#define EAILAPHKBNO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E22ACA0)
#define EAILAPHKBNO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E22AC90)
#define EAILAPHKBNO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E22AE20)
#define EAILAPHKBNO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E22AD40)
#define EAILAPHKBNO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E22AFA0)
#define EAILAPHKBNO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E22AC50)
#define EAILAPHKBNO_KAGECHDNOGE_OFFSET UNITYSDK_OFFSET(0x1E22AD30)
#define EAILAPHKBNO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E22B150)
#define EAILAPHKBNO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E22B120)
#define EAILAPHKBNO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E22AC80)
#define EAILAPHKBNO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E22AFD0)
#define EAILAPHKBNO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E22B030)

inline static constexpr unsigned int EAILAPHKBNO_TypeDefinitionIndex = 30006;

	class EAILAPHKBNO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean ANCOGIJHDNC; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EAILAPHKBNO")->GetStaticField(0x49530);
		}

		// static const ::System::Object PGOIJMGMDEO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAILAPHKBNO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EAILAPHKBNO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EAILAPHKBNO*))((::PBYTE)hIl2Cpp + EAILAPHKBNO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAILAPHKBNO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EAILAPHKBNO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAILAPHKBNO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EAILAPHKBNO* Clone()
		{
			return ((::EAILAPHKBNO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAILAPHKBNO_CLONE_OFFSET))(this);
		}

		::System::Boolean BJKODHDFIFL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EAILAPHKBNO_BJKODHDFIFL_OFFSET))(this);
		}

		::System::Void KAGECHDNOGE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EAILAPHKBNO_KAGECHDNOGE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EAILAPHKBNO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EAILAPHKBNO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EAILAPHKBNO*))((::PBYTE)hIl2Cpp + EAILAPHKBNO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAILAPHKBNO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAILAPHKBNO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EAILAPHKBNO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAILAPHKBNO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EAILAPHKBNO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EAILAPHKBNO*))((::PBYTE)hIl2Cpp + EAILAPHKBNO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EAILAPHKBNO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
