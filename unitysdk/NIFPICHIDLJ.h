#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MOHNIMLCODA.h"
#include "unitysdk/System/Object.h"
class NIFPICHIDLJ;
class OEBBNFANHLK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NIFPICHIDLJ_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1EB01070)
#define NIFPICHIDLJ_BLILPNPEACH_OFFSET UNITYSDK_OFFSET(0x1EB01050)
#define NIFPICHIDLJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB014D0)
#define NIFPICHIDLJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB01980)
#define NIFPICHIDLJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB00FE0)
#define NIFPICHIDLJ_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1EB01090)
#define NIFPICHIDLJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB00F20)
#define NIFPICHIDLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB00ED0)
#define NIFPICHIDLJ_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1EB01080)
#define NIFPICHIDLJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB01120)
#define NIFPICHIDLJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB010C0)
#define NIFPICHIDLJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB011C0)
#define NIFPICHIDLJ_HONGLJECAAC_OFFSET UNITYSDK_OFFSET(0x1EB010B0)
#define NIFPICHIDLJ_IGMALHMOLNF_OFFSET UNITYSDK_OFFSET(0x1EB01040)
#define NIFPICHIDLJ_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1EB01030)
#define NIFPICHIDLJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB00E60)
#define NIFPICHIDLJ_KIJDPPMHBME_OFFSET UNITYSDK_OFFSET(0x1EB01060)
#define NIFPICHIDLJ_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1EB010A0)
#define NIFPICHIDLJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB01860)
#define NIFPICHIDLJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB01790)
#define NIFPICHIDLJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB00EC0)
#define NIFPICHIDLJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB01250)
#define NIFPICHIDLJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB012B0)

inline static constexpr unsigned int NIFPICHIDLJ_TypeDefinitionIndex = 25582;

	class NIFPICHIDLJ : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::OEBBNFANHLK*>* AFNHANNCAMC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::MOHNIMLCODA GMPNCOBOFDM; // 0x20
		::System::UInt32 DNKADAFBILN; // 0x24
		::System::UInt32 NPFBAFODCBI; // 0x28
		::System::UInt32 FOBLPJCIGJE; // 0x2C
		static ::Google::Protobuf::FieldCodec_1<::OEBBNFANHLK*>** StaticGet_FCNMONMFJEF()
		{
			return (::Google::Protobuf::FieldCodec_1<::OEBBNFANHLK*>**)UnitySDK::FromName("", "NIFPICHIDLJ")->GetStaticField(0x3E610);
		}

		static ::Google::Protobuf::MessageParser_1<::NIFPICHIDLJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NIFPICHIDLJ*>**)UnitySDK::FromName("", "NIFPICHIDLJ")->GetStaticField(0x3E618);
		}

		// static const ::System::Object GDFHGOOLLFD; // 0x0
		// static const ::System::Object NOBLDDEFEKI; // 0x0
		// static const ::System::Object JJDOFLLPDJE; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object GEJEJNNMGGP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFPICHIDLJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NIFPICHIDLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NIFPICHIDLJ*))((::PBYTE)hIl2Cpp + NIFPICHIDLJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIFPICHIDLJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NIFPICHIDLJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NIFPICHIDLJ*>*(*)())((::PBYTE)hIl2Cpp + NIFPICHIDLJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFPICHIDLJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NIFPICHIDLJ* Clone()
		{
			return ((::NIFPICHIDLJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFPICHIDLJ_CLONE_OFFSET))(this);
		}

		::MOHNIMLCODA JBIOGKPHKKC()
		{
			return ((::MOHNIMLCODA(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFPICHIDLJ_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Void IGMALHMOLNF(::MOHNIMLCODA a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOHNIMLCODA))((::PBYTE)hIl2Cpp + NIFPICHIDLJ_IGMALHMOLNF_OFFSET))(this, a1);
		}

		::System::UInt32 BLILPNPEACH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFPICHIDLJ_BLILPNPEACH_OFFSET))(this);
		}

		::System::Void KIJDPPMHBME(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NIFPICHIDLJ_KIJDPPMHBME_OFFSET))(this, a1);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFPICHIDLJ_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NIFPICHIDLJ_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFPICHIDLJ_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NIFPICHIDLJ_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::OEBBNFANHLK*>* HONGLJECAAC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::OEBBNFANHLK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFPICHIDLJ_HONGLJECAAC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NIFPICHIDLJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NIFPICHIDLJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NIFPICHIDLJ*))((::PBYTE)hIl2Cpp + NIFPICHIDLJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFPICHIDLJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFPICHIDLJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NIFPICHIDLJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFPICHIDLJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NIFPICHIDLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NIFPICHIDLJ*))((::PBYTE)hIl2Cpp + NIFPICHIDLJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NIFPICHIDLJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
