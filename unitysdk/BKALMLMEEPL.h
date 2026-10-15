#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JFNJKAPPNOF.h"
#include "unitysdk/System/Object.h"
class BKALMLMEEPL;
class FPDCINMDJCE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BKALMLMEEPL_AFADJMFGCGN_OFFSET UNITYSDK_OFFSET(0x1DF4D950)
#define BKALMLMEEPL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF4DDD0)
#define BKALMLMEEPL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF4E210)
#define BKALMLMEEPL_CLHOECGMLFH_OFFSET UNITYSDK_OFFSET(0x1DF4D960)
#define BKALMLMEEPL_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF4D8F0)
#define BKALMLMEEPL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF4D820)
#define BKALMLMEEPL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF4D7D0)
#define BKALMLMEEPL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF4D9E0)
#define BKALMLMEEPL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF4D9B0)
#define BKALMLMEEPL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DF4D930)
#define BKALMLMEEPL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF4DA90)
#define BKALMLMEEPL_IGMALHMOLNF_OFFSET UNITYSDK_OFFSET(0x1DF4D9A0)
#define BKALMLMEEPL_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1DF4D990)
#define BKALMLMEEPL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF4D790)
#define BKALMLMEEPL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF4E0F0)
#define BKALMLMEEPL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF4E020)
#define BKALMLMEEPL_MLOGNGEGAMA_OFFSET UNITYSDK_OFFSET(0x1DF4D940)
#define BKALMLMEEPL_NOEMCDPOCJL_OFFSET UNITYSDK_OFFSET(0x1DF4D980)
#define BKALMLMEEPL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DF4D920)
#define BKALMLMEEPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF4D7C0)
#define BKALMLMEEPL_PHDAMDMELGA_OFFSET UNITYSDK_OFFSET(0x1DF4D970)
#define BKALMLMEEPL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF4DB10)
#define BKALMLMEEPL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF4DB70)

inline static constexpr unsigned int BKALMLMEEPL_TypeDefinitionIndex = 29062;

	class BKALMLMEEPL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::FPDCINMDJCE*>* FHCOJNLANEF; // 0x18
		::System::UInt32 PDKNJCIEBHA; // 0x20
		::JFNJKAPPNOF GMPNCOBOFDM; // 0x24
		::System::Boolean FOFNNJGHNIB; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 NAEACGPKNNH; // 0x2C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BKALMLMEEPL")->GetStaticField(0x4A520);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_NIINIEBBNBL()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "BKALMLMEEPL")->GetStaticField(0x4A528);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object MKEKONFCFJH; // 0x0
		// static const ::System::Object AFBDHEMJEPP; // 0x0
		// static const ::System::Object ENMDNBCNMBM; // 0x0
		// static const ::System::Object GDFHGOOLLFD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKALMLMEEPL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BKALMLMEEPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKALMLMEEPL*))((::PBYTE)hIl2Cpp + BKALMLMEEPL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKALMLMEEPL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BKALMLMEEPL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKALMLMEEPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BKALMLMEEPL* Clone()
		{
			return ((::BKALMLMEEPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKALMLMEEPL_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKALMLMEEPL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BKALMLMEEPL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::FPDCINMDJCE*>* MLOGNGEGAMA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::FPDCINMDJCE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKALMLMEEPL_MLOGNGEGAMA_OFFSET))(this);
		}

		::System::UInt32 AFADJMFGCGN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKALMLMEEPL_AFADJMFGCGN_OFFSET))(this);
		}

		::System::Void CLHOECGMLFH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BKALMLMEEPL_CLHOECGMLFH_OFFSET))(this, a1);
		}

		::System::Boolean PHDAMDMELGA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BKALMLMEEPL_PHDAMDMELGA_OFFSET))(this);
		}

		::System::Void NOEMCDPOCJL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BKALMLMEEPL_NOEMCDPOCJL_OFFSET))(this, a1);
		}

		::JFNJKAPPNOF JBIOGKPHKKC()
		{
			return ((::JFNJKAPPNOF(*)(::PVOID))((::PBYTE)hIl2Cpp + BKALMLMEEPL_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Void IGMALHMOLNF(::JFNJKAPPNOF a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFNJKAPPNOF))((::PBYTE)hIl2Cpp + BKALMLMEEPL_IGMALHMOLNF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BKALMLMEEPL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BKALMLMEEPL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BKALMLMEEPL*))((::PBYTE)hIl2Cpp + BKALMLMEEPL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKALMLMEEPL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKALMLMEEPL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BKALMLMEEPL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKALMLMEEPL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BKALMLMEEPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKALMLMEEPL*))((::PBYTE)hIl2Cpp + BKALMLMEEPL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BKALMLMEEPL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
