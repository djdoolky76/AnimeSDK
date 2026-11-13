#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OOBKAONOBAK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OOBKAONOBAK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x2035BAC0)
#define OOBKAONOBAK_CCTOR_OFFSET UNITYSDK_OFFSET(0x2035BE50)
#define OOBKAONOBAK_CKNMJPOOLCN_OFFSET UNITYSDK_OFFSET(0x2035B780)
#define OOBKAONOBAK_CLONE_OFFSET UNITYSDK_OFFSET(0x2035B6D0)
#define OOBKAONOBAK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2035B690)
#define OOBKAONOBAK_CTOR_OFFSET UNITYSDK_OFFSET(0x2035B680)
#define OOBKAONOBAK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2035B830)
#define OOBKAONOBAK_EQUALS_OFFSET UNITYSDK_OFFSET(0x2035B7B0)
#define OOBKAONOBAK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2035B900)
#define OOBKAONOBAK_GMCOKCKEDLC_OFFSET UNITYSDK_OFFSET(0x2035B7A0)
#define OOBKAONOBAK_INDOEFMDAOK_OFFSET UNITYSDK_OFFSET(0x2035B790)
#define OOBKAONOBAK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x2035B610)
#define OOBKAONOBAK_JLODNLHKNJL_OFFSET UNITYSDK_OFFSET(0x2035B770)
#define OOBKAONOBAK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2035BCA0)
#define OOBKAONOBAK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x2035BC50)
#define OOBKAONOBAK_PBBBCFCOJFN_OFFSET UNITYSDK_OFFSET(0x2035B760)
#define OOBKAONOBAK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2035B670)
#define OOBKAONOBAK_PNCKKMFFIAN_OFFSET UNITYSDK_OFFSET(0x2035B750)
#define OOBKAONOBAK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2035B930)
#define OOBKAONOBAK_WRITETO_OFFSET UNITYSDK_OFFSET(0x2035B990)

inline static constexpr unsigned int OOBKAONOBAK_TypeDefinitionIndex = 25604;

	class OOBKAONOBAK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PHGOGHEFEKB; // 0x18
		::System::UInt32 FMCFBIJJCBM; // 0x1C
		::System::UInt32 KKMBEBBLHEL; // 0x20
		static ::Google::Protobuf::MessageParser_1<::OOBKAONOBAK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OOBKAONOBAK*>**)UnitySDK::FromName("", "OOBKAONOBAK")->GetStaticField(0x13FA0);
		}

		// static const ::System::Object AHHJCDPEOPD; // 0x0
		// static const ::System::Object MLJAJPICBMI; // 0x0
		// static const ::System::Object BMLOHFPHLOL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBKAONOBAK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OOBKAONOBAK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOBKAONOBAK*))((::PBYTE)hIl2Cpp + OOBKAONOBAK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOBKAONOBAK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OOBKAONOBAK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OOBKAONOBAK*>*(*)())((::PBYTE)hIl2Cpp + OOBKAONOBAK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBKAONOBAK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OOBKAONOBAK* Clone()
		{
			return ((::OOBKAONOBAK*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBKAONOBAK_CLONE_OFFSET))(this);
		}

		::System::UInt32 PNCKKMFFIAN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBKAONOBAK_PNCKKMFFIAN_OFFSET))(this);
		}

		::System::Void PBBBCFCOJFN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OOBKAONOBAK_PBBBCFCOJFN_OFFSET))(this, a1);
		}

		::System::UInt32 JLODNLHKNJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBKAONOBAK_JLODNLHKNJL_OFFSET))(this);
		}

		::System::Void CKNMJPOOLCN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OOBKAONOBAK_CKNMJPOOLCN_OFFSET))(this, a1);
		}

		::System::UInt32 INDOEFMDAOK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBKAONOBAK_INDOEFMDAOK_OFFSET))(this);
		}

		::System::Void GMCOKCKEDLC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OOBKAONOBAK_GMCOKCKEDLC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OOBKAONOBAK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OOBKAONOBAK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OOBKAONOBAK*))((::PBYTE)hIl2Cpp + OOBKAONOBAK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBKAONOBAK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBKAONOBAK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OOBKAONOBAK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBKAONOBAK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OOBKAONOBAK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOBKAONOBAK*))((::PBYTE)hIl2Cpp + OOBKAONOBAK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OOBKAONOBAK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
