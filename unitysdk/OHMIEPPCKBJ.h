#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFLKOBJHFKH.h"
#include "unitysdk/System/Object.h"
class OHMIEPPCKBJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OHMIEPPCKBJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE668E0)
#define OHMIEPPCKBJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE66BF0)
#define OHMIEPPCKBJ_CIPHMEMJPOC_OFFSET UNITYSDK_OFFSET(0x1DE665A0)
#define OHMIEPPCKBJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE66520)
#define OHMIEPPCKBJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE664F0)
#define OHMIEPPCKBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE664E0)
#define OHMIEPPCKBJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE66690)
#define OHMIEPPCKBJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE665B0)
#define OHMIEPPCKBJ_FAMGHDLEDLP_OFFSET UNITYSDK_OFFSET(0x1DE66580)
#define OHMIEPPCKBJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE66760)
#define OHMIEPPCKBJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE664A0)
#define OHMIEPPCKBJ_KLEFAKFNBJA_OFFSET UNITYSDK_OFFSET(0x1DE66590)
#define OHMIEPPCKBJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE66A70)
#define OHMIEPPCKBJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE66A30)
#define OHMIEPPCKBJ_MHFBDNGECAE_OFFSET UNITYSDK_OFFSET(0x1DE66570)
#define OHMIEPPCKBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE664D0)
#define OHMIEPPCKBJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE66790)
#define OHMIEPPCKBJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE667F0)

inline static constexpr unsigned int OHMIEPPCKBJ_TypeDefinitionIndex = 34964;

	class OHMIEPPCKBJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::OFLKOBJHFKH ABHDNFKAFED; // 0x18
		::System::UInt32 LAAGBFNNOKM; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OHMIEPPCKBJ")->GetStaticField(0x1B6B0);
		}

		// static const ::System::Object BAOPMJAPINI; // 0x0
		// static const ::System::Object PPGFLPPIDAJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHMIEPPCKBJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OHMIEPPCKBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHMIEPPCKBJ*))((::PBYTE)hIl2Cpp + OHMIEPPCKBJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHMIEPPCKBJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OHMIEPPCKBJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHMIEPPCKBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OHMIEPPCKBJ* Clone()
		{
			return ((::OHMIEPPCKBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHMIEPPCKBJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 MHFBDNGECAE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHMIEPPCKBJ_MHFBDNGECAE_OFFSET))(this);
		}

		::System::Void FAMGHDLEDLP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OHMIEPPCKBJ_FAMGHDLEDLP_OFFSET))(this, a1);
		}

		::OFLKOBJHFKH KLEFAKFNBJA()
		{
			return ((::OFLKOBJHFKH(*)(::PVOID))((::PBYTE)hIl2Cpp + OHMIEPPCKBJ_KLEFAKFNBJA_OFFSET))(this);
		}

		::System::Void CIPHMEMJPOC(::OFLKOBJHFKH a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFLKOBJHFKH))((::PBYTE)hIl2Cpp + OHMIEPPCKBJ_CIPHMEMJPOC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OHMIEPPCKBJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OHMIEPPCKBJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OHMIEPPCKBJ*))((::PBYTE)hIl2Cpp + OHMIEPPCKBJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHMIEPPCKBJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHMIEPPCKBJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OHMIEPPCKBJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHMIEPPCKBJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OHMIEPPCKBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHMIEPPCKBJ*))((::PBYTE)hIl2Cpp + OHMIEPPCKBJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OHMIEPPCKBJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
