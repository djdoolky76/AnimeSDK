#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IJDLENJJBHJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IJDLENJJBHJ_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1E6917C0)
#define IJDLENJJBHJ_AKKPOBDALNL_OFFSET UNITYSDK_OFFSET(0x1E6917E0)
#define IJDLENJJBHJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E691C70)
#define IJDLENJJBHJ_CAPLHMKKINM_OFFSET UNITYSDK_OFFSET(0x1E6917A0)
#define IJDLENJJBHJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E692000)
#define IJDLENJJBHJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E691740)
#define IJDLENJJBHJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6916C0)
#define IJDLENJJBHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E691690)
#define IJDLENJJBHJ_EBOMLPKAHPO_OFFSET UNITYSDK_OFFSET(0x1E691790)
#define IJDLENJJBHJ_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1E6917D0)
#define IJDLENJJBHJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6918E0)
#define IJDLENJJBHJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E691820)
#define IJDLENJJBHJ_FHGAPGHAPFH_OFFSET UNITYSDK_OFFSET(0x1E691810)
#define IJDLENJJBHJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E691970)
#define IJDLENJJBHJ_IOIFPHAMFDF_OFFSET UNITYSDK_OFFSET(0x1E691800)
#define IJDLENJJBHJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E691620)
#define IJDLENJJBHJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E691EF0)
#define IJDLENJJBHJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E691E80)
#define IJDLENJJBHJ_ONGKCOIDDOK_OFFSET UNITYSDK_OFFSET(0x1E6917B0)
#define IJDLENJJBHJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E691680)
#define IJDLENJJBHJ_PPOLNKHMFDE_OFFSET UNITYSDK_OFFSET(0x1E6917F0)
#define IJDLENJJBHJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6919C0)
#define IJDLENJJBHJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E691A20)

inline static constexpr unsigned int IJDLENJJBHJ_TypeDefinitionIndex = 29174;

	class IJDLENJJBHJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* DKHECDLNPLE; // 0x18
		::System::UInt32 HDAIPLJBGAB; // 0x20
		::System::Boolean NNDDCNKFGDJ; // 0x24
		::System::Byte _padding0[0x3];
		::System::UInt32 ICDPONHFAJP; // 0x28
		::System::UInt32 NPFBAFODCBI; // 0x2C
		static ::System::Object** StaticGet_KGCBHCJMKMI()
		{
			return (::System::Object**)UnitySDK::FromName("", "IJDLENJJBHJ")->GetStaticField(0x15470);
		}

		static ::Google::Protobuf::MessageParser_1<::IJDLENJJBHJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IJDLENJJBHJ*>**)UnitySDK::FromName("", "IJDLENJJBHJ")->GetStaticField(0x15478);
		}

		// static const ::System::Object BEINPDMEFFL; // 0x0
		// static const ::System::Object OOHBAONFDKM; // 0x0
		// static const ::System::Object JJDOFLLPDJE; // 0x0
		// static const ::System::Object KOJPIHLFOEH; // 0x0
		// static const ::System::Object CGMFPGNNGEK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDLENJJBHJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IJDLENJJBHJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJDLENJJBHJ*))((::PBYTE)hIl2Cpp + IJDLENJJBHJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJDLENJJBHJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IJDLENJJBHJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IJDLENJJBHJ*>*(*)())((::PBYTE)hIl2Cpp + IJDLENJJBHJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDLENJJBHJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IJDLENJJBHJ* Clone()
		{
			return ((::IJDLENJJBHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDLENJJBHJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 EBOMLPKAHPO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDLENJJBHJ_EBOMLPKAHPO_OFFSET))(this);
		}

		::System::Void CAPLHMKKINM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IJDLENJJBHJ_CAPLHMKKINM_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* ONGKCOIDDOK()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDLENJJBHJ_ONGKCOIDDOK_OFFSET))(this);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDLENJJBHJ_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IJDLENJJBHJ_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::Boolean AKKPOBDALNL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDLENJJBHJ_AKKPOBDALNL_OFFSET))(this);
		}

		::System::Void PPOLNKHMFDE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IJDLENJJBHJ_PPOLNKHMFDE_OFFSET))(this, a1);
		}

		::System::UInt32 IOIFPHAMFDF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDLENJJBHJ_IOIFPHAMFDF_OFFSET))(this);
		}

		::System::Void FHGAPGHAPFH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IJDLENJJBHJ_FHGAPGHAPFH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IJDLENJJBHJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IJDLENJJBHJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IJDLENJJBHJ*))((::PBYTE)hIl2Cpp + IJDLENJJBHJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDLENJJBHJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDLENJJBHJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IJDLENJJBHJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDLENJJBHJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IJDLENJJBHJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJDLENJJBHJ*))((::PBYTE)hIl2Cpp + IJDLENJJBHJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IJDLENJJBHJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
