#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class POLMJOOOBNK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define POLMJOOOBNK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFA0280)
#define POLMJOOOBNK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFA0600)
#define POLMJOOOBNK_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF9FE60)
#define POLMJOOOBNK_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1DF9FEF0)
#define POLMJOOOBNK_COKGJAJDFBN_OFFSET UNITYSDK_OFFSET(0x1DF9FED0)
#define POLMJOOOBNK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF9FE20)
#define POLMJOOOBNK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF9FE10)
#define POLMJOOOBNK_DCIDHPGBHJF_OFFSET UNITYSDK_OFFSET(0x1DF9FEE0)
#define POLMJOOOBNK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF9FFF0)
#define POLMJOOOBNK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF9FF10)
#define POLMJOOOBNK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DF9FEC0)
#define POLMJOOOBNK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFA00C0)
#define POLMJOOOBNK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF9FDD0)
#define POLMJOOOBNK_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1DF9FF00)
#define POLMJOOOBNK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFA0460)
#define POLMJOOOBNK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFA0410)
#define POLMJOOOBNK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DF9FEB0)
#define POLMJOOOBNK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF9FE00)
#define POLMJOOOBNK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFA00F0)
#define POLMJOOOBNK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFA0150)

inline static constexpr unsigned int POLMJOOOBNK_TypeDefinitionIndex = 26322;

	class POLMJOOOBNK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PDNLLKHCOBO; // 0x18
		::System::UInt32 DNKADAFBILN; // 0x1C
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::POLMJOOOBNK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::POLMJOOOBNK*>**)UnitySDK::FromName("", "POLMJOOOBNK")->GetStaticField(0x45470);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object MEDEPMKJNBB; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POLMJOOOBNK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::POLMJOOOBNK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POLMJOOOBNK*))((::PBYTE)hIl2Cpp + POLMJOOOBNK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POLMJOOOBNK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::POLMJOOOBNK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::POLMJOOOBNK*>*(*)())((::PBYTE)hIl2Cpp + POLMJOOOBNK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + POLMJOOOBNK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::POLMJOOOBNK* Clone()
		{
			return ((::POLMJOOOBNK*(*)(::PVOID))((::PBYTE)hIl2Cpp + POLMJOOOBNK_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + POLMJOOOBNK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + POLMJOOOBNK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 COKGJAJDFBN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + POLMJOOOBNK_COKGJAJDFBN_OFFSET))(this);
		}

		::System::Void DCIDHPGBHJF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + POLMJOOOBNK_DCIDHPGBHJF_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + POLMJOOOBNK_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + POLMJOOOBNK_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + POLMJOOOBNK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::POLMJOOOBNK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::POLMJOOOBNK*))((::PBYTE)hIl2Cpp + POLMJOOOBNK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POLMJOOOBNK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + POLMJOOOBNK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + POLMJOOOBNK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POLMJOOOBNK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::POLMJOOOBNK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POLMJOOOBNK*))((::PBYTE)hIl2Cpp + POLMJOOOBNK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + POLMJOOOBNK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
