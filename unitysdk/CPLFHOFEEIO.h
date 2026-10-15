#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPLFHOFEEIO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CPLFHOFEEIO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E143500)
#define CPLFHOFEEIO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1437D0)
#define CPLFHOFEEIO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E142F90)
#define CPLFHOFEEIO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E142EF0)
#define CPLFHOFEEIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E142EA0)
#define CPLFHOFEEIO_ECKHFFNPDKF_OFFSET UNITYSDK_OFFSET(0x1E143000)
#define CPLFHOFEEIO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1430C0)
#define CPLFHOFEEIO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E143030)
#define CPLFHOFEEIO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E142FD0)
#define CPLFHOFEEIO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1431E0)
#define CPLFHOFEEIO_GPEBPBGPHIA_OFFSET UNITYSDK_OFFSET(0x1E142FE0)
#define CPLFHOFEEIO_HADLEOMNCJC_OFFSET UNITYSDK_OFFSET(0x1E143010)
#define CPLFHOFEEIO_IDAMGMKBLJM_OFFSET UNITYSDK_OFFSET(0x1E142FF0)
#define CPLFHOFEEIO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E142E60)
#define CPLFHOFEEIO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1436D0)
#define CPLFHOFEEIO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E143670)
#define CPLFHOFEEIO_MKBAHHJODPG_OFFSET UNITYSDK_OFFSET(0x1E143020)
#define CPLFHOFEEIO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E142FC0)
#define CPLFHOFEEIO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E142E90)
#define CPLFHOFEEIO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1432E0)
#define CPLFHOFEEIO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E143340)

	class CPLFHOFEEIO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KHEIEPDBPCE; // 0x18
		::System::Boolean PKOJJDDADLO; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 AJHOJKFPMLL; // 0x24
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CPLFHOFEEIO")->GetStaticField(0x22D10);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_BCPGJJPAFGO()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "CPLFHOFEEIO")->GetStaticField(0x22D18);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HICACHOOPBN; // 0x0
		// static const ::System::Object DGKOBHIACHK; // 0x0
		// static const ::System::Object EMAAFDGEFOA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLFHOFEEIO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CPLFHOFEEIO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPLFHOFEEIO*))((::PBYTE)hIl2Cpp + CPLFHOFEEIO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPLFHOFEEIO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CPLFHOFEEIO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLFHOFEEIO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CPLFHOFEEIO* Clone()
		{
			return ((::CPLFHOFEEIO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLFHOFEEIO_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLFHOFEEIO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPLFHOFEEIO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GPEBPBGPHIA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLFHOFEEIO_GPEBPBGPHIA_OFFSET))(this);
		}

		::System::Boolean IDAMGMKBLJM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLFHOFEEIO_IDAMGMKBLJM_OFFSET))(this);
		}

		::System::Void ECKHFFNPDKF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CPLFHOFEEIO_ECKHFFNPDKF_OFFSET))(this, a1);
		}

		::System::UInt32 HADLEOMNCJC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLFHOFEEIO_HADLEOMNCJC_OFFSET))(this);
		}

		::System::Void MKBAHHJODPG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPLFHOFEEIO_MKBAHHJODPG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CPLFHOFEEIO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CPLFHOFEEIO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CPLFHOFEEIO*))((::PBYTE)hIl2Cpp + CPLFHOFEEIO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLFHOFEEIO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLFHOFEEIO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CPLFHOFEEIO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLFHOFEEIO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CPLFHOFEEIO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPLFHOFEEIO*))((::PBYTE)hIl2Cpp + CPLFHOFEEIO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CPLFHOFEEIO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
