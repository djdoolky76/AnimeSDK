#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDJLHJDPEEK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BDJLHJDPEEK_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1E8EA880)
#define BDJLHJDPEEK_ACOPGEADOMN_OFFSET UNITYSDK_OFFSET(0x1E8EA8E0)
#define BDJLHJDPEEK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8EAD70)
#define BDJLHJDPEEK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8EB0A0)
#define BDJLHJDPEEK_CHMCFLAIMPM_OFFSET UNITYSDK_OFFSET(0x1E8EA8D0)
#define BDJLHJDPEEK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8EA850)
#define BDJLHJDPEEK_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E8EA8A0)
#define BDJLHJDPEEK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8EA7B0)
#define BDJLHJDPEEK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8EA760)
#define BDJLHJDPEEK_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1E8EA890)
#define BDJLHJDPEEK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8EA970)
#define BDJLHJDPEEK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8EA8F0)
#define BDJLHJDPEEK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8EAA80)
#define BDJLHJDPEEK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8EA720)
#define BDJLHJDPEEK_KCCKLEBFHDG_OFFSET UNITYSDK_OFFSET(0x1E8EA8C0)
#define BDJLHJDPEEK_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E8EA8B0)
#define BDJLHJDPEEK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8EAFB0)
#define BDJLHJDPEEK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8EAF50)
#define BDJLHJDPEEK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8EA750)
#define BDJLHJDPEEK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8EAB80)
#define BDJLHJDPEEK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8EABE0)

inline static constexpr unsigned int BDJLHJDPEEK_TypeDefinitionIndex = 33036;

	class BDJLHJDPEEK : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PPIMAJIDODP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 KMLIKNNALPB; // 0x20
		::System::UInt32 NPFBAFODCBI; // 0x24
		::System::UInt32 DNKADAFBILN; // 0x28
		static ::Google::Protobuf::MessageParser_1<::BDJLHJDPEEK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BDJLHJDPEEK*>**)UnitySDK::FromName("", "BDJLHJDPEEK")->GetStaticField(0x46D30);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_EFFODMMMKLH()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "BDJLHJDPEEK")->GetStaticField(0x46D38);
		}

		// static const ::System::Object JJDOFLLPDJE; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object EPBHAEEJDGG; // 0x0
		// static const ::System::Object GLHOIPCCHAH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDJLHJDPEEK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BDJLHJDPEEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BDJLHJDPEEK*))((::PBYTE)hIl2Cpp + BDJLHJDPEEK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDJLHJDPEEK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BDJLHJDPEEK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BDJLHJDPEEK*>*(*)())((::PBYTE)hIl2Cpp + BDJLHJDPEEK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDJLHJDPEEK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BDJLHJDPEEK* Clone()
		{
			return ((::BDJLHJDPEEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDJLHJDPEEK_CLONE_OFFSET))(this);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDJLHJDPEEK_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDJLHJDPEEK_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDJLHJDPEEK_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDJLHJDPEEK_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KCCKLEBFHDG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDJLHJDPEEK_KCCKLEBFHDG_OFFSET))(this);
		}

		::System::UInt32 CHMCFLAIMPM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDJLHJDPEEK_CHMCFLAIMPM_OFFSET))(this);
		}

		::System::Void ACOPGEADOMN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDJLHJDPEEK_ACOPGEADOMN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BDJLHJDPEEK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BDJLHJDPEEK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BDJLHJDPEEK*))((::PBYTE)hIl2Cpp + BDJLHJDPEEK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDJLHJDPEEK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDJLHJDPEEK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BDJLHJDPEEK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDJLHJDPEEK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BDJLHJDPEEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BDJLHJDPEEK*))((::PBYTE)hIl2Cpp + BDJLHJDPEEK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BDJLHJDPEEK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
