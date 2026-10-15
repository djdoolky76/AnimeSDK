#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOCIDFPEBGM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JOCIDFPEBGM_BJKODHDFIFL_OFFSET UNITYSDK_OFFSET(0x1E79DDC0)
#define JOCIDFPEBGM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E79E140)
#define JOCIDFPEBGM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E79E3A0)
#define JOCIDFPEBGM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E79DD50)
#define JOCIDFPEBGM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E79DD10)
#define JOCIDFPEBGM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E79DD00)
#define JOCIDFPEBGM_DOKCLOPEKLK_OFFSET UNITYSDK_OFFSET(0x1E79DDB0)
#define JOCIDFPEBGM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E79DEC0)
#define JOCIDFPEBGM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E79DDE0)
#define JOCIDFPEBGM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E79DFA0)
#define JOCIDFPEBGM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E79DCC0)
#define JOCIDFPEBGM_KAGECHDNOGE_OFFSET UNITYSDK_OFFSET(0x1E79DDD0)
#define JOCIDFPEBGM_LNACAEMACAD_OFFSET UNITYSDK_OFFSET(0x1E79DDA0)
#define JOCIDFPEBGM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E79E220)
#define JOCIDFPEBGM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E79E1E0)
#define JOCIDFPEBGM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E79DCF0)
#define JOCIDFPEBGM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E79DFD0)
#define JOCIDFPEBGM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E79E030)

	class JOCIDFPEBGM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean ANCOGIJHDNC; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 DJIJMBMGAPB; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JOCIDFPEBGM")->GetStaticField(0x6CC00);
		}

		// static const ::System::Object HDEAOOJANDH; // 0x0
		// static const ::System::Object PGOIJMGMDEO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCIDFPEBGM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JOCIDFPEBGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOCIDFPEBGM*))((::PBYTE)hIl2Cpp + JOCIDFPEBGM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOCIDFPEBGM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JOCIDFPEBGM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCIDFPEBGM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JOCIDFPEBGM* Clone()
		{
			return ((::JOCIDFPEBGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCIDFPEBGM_CLONE_OFFSET))(this);
		}

		::System::UInt32 LNACAEMACAD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCIDFPEBGM_LNACAEMACAD_OFFSET))(this);
		}

		::System::Void DOKCLOPEKLK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JOCIDFPEBGM_DOKCLOPEKLK_OFFSET))(this, a1);
		}

		::System::Boolean BJKODHDFIFL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCIDFPEBGM_BJKODHDFIFL_OFFSET))(this);
		}

		::System::Void KAGECHDNOGE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JOCIDFPEBGM_KAGECHDNOGE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JOCIDFPEBGM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JOCIDFPEBGM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JOCIDFPEBGM*))((::PBYTE)hIl2Cpp + JOCIDFPEBGM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCIDFPEBGM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCIDFPEBGM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JOCIDFPEBGM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCIDFPEBGM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JOCIDFPEBGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOCIDFPEBGM*))((::PBYTE)hIl2Cpp + JOCIDFPEBGM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JOCIDFPEBGM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
