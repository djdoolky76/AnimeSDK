#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PJHKIIDEOOG.h"
#include "unitysdk/System/Object.h"
class ACGCJMLFHCO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ACGCJMLFHCO_BJKODHDFIFL_OFFSET UNITYSDK_OFFSET(0x1DDDBEB0)
#define ACGCJMLFHCO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDDC420)
#define ACGCJMLFHCO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDDC780)
#define ACGCJMLFHCO_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDDBE80)
#define ACGCJMLFHCO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDDBDE0)
#define ACGCJMLFHCO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDDBD90)
#define ACGCJMLFHCO_EIHPNJJOEDI_OFFSET UNITYSDK_OFFSET(0x1DDDBEE0)
#define ACGCJMLFHCO_EPFDENEPLOL_OFFSET UNITYSDK_OFFSET(0x1DDDBEF0)
#define ACGCJMLFHCO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDDBFB0)
#define ACGCJMLFHCO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDDBF20)
#define ACGCJMLFHCO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDDC0C0)
#define ACGCJMLFHCO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDDBD50)
#define ACGCJMLFHCO_KAGECHDNOGE_OFFSET UNITYSDK_OFFSET(0x1DDDBEC0)
#define ACGCJMLFHCO_KOHLODGNPIA_OFFSET UNITYSDK_OFFSET(0x1DDDBF00)
#define ACGCJMLFHCO_LFLOKFBJPOG_OFFSET UNITYSDK_OFFSET(0x1DDDBF10)
#define ACGCJMLFHCO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDDC690)
#define ACGCJMLFHCO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDDC620)
#define ACGCJMLFHCO_ODBBHDEMCLA_OFFSET UNITYSDK_OFFSET(0x1DDDBED0)
#define ACGCJMLFHCO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDDBD80)
#define ACGCJMLFHCO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDDC1E0)
#define ACGCJMLFHCO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDDC240)

inline static constexpr unsigned int ACGCJMLFHCO_TypeDefinitionIndex = 30152;

	class ACGCJMLFHCO : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EJGFMICPCLP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::PJHKIIDEOOG JEBPDFBGCCJ; // 0x20
		::System::Boolean ANCOGIJHDNC; // 0x24
		::System::Byte _padding0[0x3];
		::System::UInt64 LLPDKOAONED; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ACGCJMLFHCO")->GetStaticField(0x2B2D0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_IBOBFDAMEHC()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "ACGCJMLFHCO")->GetStaticField(0x2B2D8);
		}

		// static const ::System::Object PGOIJMGMDEO; // 0x0
		// static const ::System::Object PJLKHJGPLBH; // 0x0
		// static const ::System::Object AJPEEDNHODK; // 0x0
		// static const ::System::Object APFDKAHEPLG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGCJMLFHCO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ACGCJMLFHCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACGCJMLFHCO*))((::PBYTE)hIl2Cpp + ACGCJMLFHCO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACGCJMLFHCO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ACGCJMLFHCO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGCJMLFHCO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ACGCJMLFHCO* Clone()
		{
			return ((::ACGCJMLFHCO*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGCJMLFHCO_CLONE_OFFSET))(this);
		}

		::System::Boolean BJKODHDFIFL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGCJMLFHCO_BJKODHDFIFL_OFFSET))(this);
		}

		::System::Void KAGECHDNOGE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ACGCJMLFHCO_KAGECHDNOGE_OFFSET))(this, a1);
		}

		::System::UInt64 ODBBHDEMCLA()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGCJMLFHCO_ODBBHDEMCLA_OFFSET))(this);
		}

		::System::Void EIHPNJJOEDI(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ACGCJMLFHCO_EIHPNJJOEDI_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EPFDENEPLOL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGCJMLFHCO_EPFDENEPLOL_OFFSET))(this);
		}

		::PJHKIIDEOOG KOHLODGNPIA()
		{
			return ((::PJHKIIDEOOG(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGCJMLFHCO_KOHLODGNPIA_OFFSET))(this);
		}

		::System::Void LFLOKFBJPOG(::PJHKIIDEOOG a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJHKIIDEOOG))((::PBYTE)hIl2Cpp + ACGCJMLFHCO_LFLOKFBJPOG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ACGCJMLFHCO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ACGCJMLFHCO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ACGCJMLFHCO*))((::PBYTE)hIl2Cpp + ACGCJMLFHCO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGCJMLFHCO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGCJMLFHCO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ACGCJMLFHCO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGCJMLFHCO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ACGCJMLFHCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACGCJMLFHCO*))((::PBYTE)hIl2Cpp + ACGCJMLFHCO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ACGCJMLFHCO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
