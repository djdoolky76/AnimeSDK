#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NKAFNCBDJAH.h"
#include "unitysdk/System/Object.h"
class ACFLKPFDHIM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ACFLKPFDHIM_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x20094D10)
#define ACFLKPFDHIM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20095150)
#define ACFLKPFDHIM_CAPLHMKKINM_OFFSET UNITYSDK_OFFSET(0x20094CF0)
#define ACFLKPFDHIM_CCTOR_OFFSET UNITYSDK_OFFSET(0x200955E0)
#define ACFLKPFDHIM_CLONE_OFFSET UNITYSDK_OFFSET(0x20094C90)
#define ACFLKPFDHIM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20094BC0)
#define ACFLKPFDHIM_CTOR_OFFSET UNITYSDK_OFFSET(0x20094B50)
#define ACFLKPFDHIM_DPPJKPFHJFE_OFFSET UNITYSDK_OFFSET(0x20094D30)
#define ACFLKPFDHIM_EANCHNABCAD_OFFSET UNITYSDK_OFFSET(0x20094D50)
#define ACFLKPFDHIM_EBOMLPKAHPO_OFFSET UNITYSDK_OFFSET(0x20094CE0)
#define ACFLKPFDHIM_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x20094D20)
#define ACFLKPFDHIM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20094DC0)
#define ACFLKPFDHIM_EQUALS_OFFSET UNITYSDK_OFFSET(0x20094D60)
#define ACFLKPFDHIM_FMOIKOLDCIM_OFFSET UNITYSDK_OFFSET(0x20094D40)
#define ACFLKPFDHIM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20094E60)
#define ACFLKPFDHIM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20094AE0)
#define ACFLKPFDHIM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20095480)
#define ACFLKPFDHIM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20095400)
#define ACFLKPFDHIM_ONGKCOIDDOK_OFFSET UNITYSDK_OFFSET(0x20094D00)
#define ACFLKPFDHIM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20094B40)
#define ACFLKPFDHIM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20094ED0)
#define ACFLKPFDHIM_WRITETO_OFFSET UNITYSDK_OFFSET(0x20094F30)

inline static constexpr unsigned int ACFLKPFDHIM_TypeDefinitionIndex = 26028;

	class ACFLKPFDHIM : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>* DCHECCANBIC; // 0x10
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* DKHECDLNPLE; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::NKAFNCBDJAH KHPFLPMCBHL; // 0x28
		::System::UInt32 NPFBAFODCBI; // 0x2C
		::System::UInt32 ICDPONHFAJP; // 0x30
		static ::Google::Protobuf::MessageParser_1<::ACFLKPFDHIM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ACFLKPFDHIM*>**)UnitySDK::FromName("", "ACFLKPFDHIM")->GetStaticField(0xD1D0);
		}

		static ::System::Object** StaticGet_BPCHGBKBPPE()
		{
			return (::System::Object**)UnitySDK::FromName("", "ACFLKPFDHIM")->GetStaticField(0xD1D8);
		}

		static ::System::Object** StaticGet_KGCBHCJMKMI()
		{
			return (::System::Object**)UnitySDK::FromName("", "ACFLKPFDHIM")->GetStaticField(0xD1E0);
		}

		// static const ::System::Object BEINPDMEFFL; // 0x0
		// static const ::System::Object OOHBAONFDKM; // 0x0
		// static const ::System::Object JJDOFLLPDJE; // 0x0
		// static const ::System::Object MLILGACOADE; // 0x0
		// static const ::System::Object PMAEBPKJCLL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACFLKPFDHIM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ACFLKPFDHIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACFLKPFDHIM*))((::PBYTE)hIl2Cpp + ACFLKPFDHIM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACFLKPFDHIM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ACFLKPFDHIM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ACFLKPFDHIM*>*(*)())((::PBYTE)hIl2Cpp + ACFLKPFDHIM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACFLKPFDHIM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ACFLKPFDHIM* Clone()
		{
			return ((::ACFLKPFDHIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACFLKPFDHIM_CLONE_OFFSET))(this);
		}

		::System::UInt32 EBOMLPKAHPO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACFLKPFDHIM_EBOMLPKAHPO_OFFSET))(this);
		}

		::System::Void CAPLHMKKINM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ACFLKPFDHIM_CAPLHMKKINM_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* ONGKCOIDDOK()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACFLKPFDHIM_ONGKCOIDDOK_OFFSET))(this);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACFLKPFDHIM_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ACFLKPFDHIM_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>* DPPJKPFHJFE()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACFLKPFDHIM_DPPJKPFHJFE_OFFSET))(this);
		}

		::NKAFNCBDJAH FMOIKOLDCIM()
		{
			return ((::NKAFNCBDJAH(*)(::PVOID))((::PBYTE)hIl2Cpp + ACFLKPFDHIM_FMOIKOLDCIM_OFFSET))(this);
		}

		::System::Void EANCHNABCAD(::NKAFNCBDJAH a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKAFNCBDJAH))((::PBYTE)hIl2Cpp + ACFLKPFDHIM_EANCHNABCAD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ACFLKPFDHIM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ACFLKPFDHIM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ACFLKPFDHIM*))((::PBYTE)hIl2Cpp + ACFLKPFDHIM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACFLKPFDHIM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACFLKPFDHIM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ACFLKPFDHIM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACFLKPFDHIM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ACFLKPFDHIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACFLKPFDHIM*))((::PBYTE)hIl2Cpp + ACFLKPFDHIM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ACFLKPFDHIM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
