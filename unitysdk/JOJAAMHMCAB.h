#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOJAAMHMCAB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JOJAAMHMCAB_AABOOKNIJKN_OFFSET UNITYSDK_OFFSET(0x1E7A4350)
#define JOJAAMHMCAB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7A4710)
#define JOJAAMHMCAB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7A4A90)
#define JOJAAMHMCAB_CLAGJKAIHNA_OFFSET UNITYSDK_OFFSET(0x1E7A4390)
#define JOJAAMHMCAB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7A42F0)
#define JOJAAMHMCAB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7A42B0)
#define JOJAAMHMCAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7A42A0)
#define JOJAAMHMCAB_ENJNOMANLCN_OFFSET UNITYSDK_OFFSET(0x1E7A4370)
#define JOJAAMHMCAB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7A4480)
#define JOJAAMHMCAB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7A43A0)
#define JOJAAMHMCAB_FEGIMNBKFHN_OFFSET UNITYSDK_OFFSET(0x1E7A4340)
#define JOJAAMHMCAB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7A4550)
#define JOJAAMHMCAB_GHCGBBHOAKB_OFFSET UNITYSDK_OFFSET(0x1E7A4360)
#define JOJAAMHMCAB_IMEFPLPNKBK_OFFSET UNITYSDK_OFFSET(0x1E7A4380)
#define JOJAAMHMCAB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7A4260)
#define JOJAAMHMCAB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7A48F0)
#define JOJAAMHMCAB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7A48A0)
#define JOJAAMHMCAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7A4290)
#define JOJAAMHMCAB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7A4580)
#define JOJAAMHMCAB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7A45E0)

inline static constexpr unsigned int JOJAAMHMCAB_TypeDefinitionIndex = 34836;

	class JOJAAMHMCAB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AEKECGJLGEF; // 0x18
		::System::UInt32 AOOAEAADNGO; // 0x1C
		::System::UInt32 MLCHFINKHHM; // 0x20
		static ::Google::Protobuf::MessageParser_1<::JOJAAMHMCAB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JOJAAMHMCAB*>**)UnitySDK::FromName("", "JOJAAMHMCAB")->GetStaticField(0x6D0C0);
		}

		// static const ::System::Object HBIJBPKKMNN; // 0x0
		// static const ::System::Object AINHNOCEBJG; // 0x0
		// static const ::System::Object EBDOFPJAANE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOJAAMHMCAB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JOJAAMHMCAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOJAAMHMCAB*))((::PBYTE)hIl2Cpp + JOJAAMHMCAB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOJAAMHMCAB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JOJAAMHMCAB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JOJAAMHMCAB*>*(*)())((::PBYTE)hIl2Cpp + JOJAAMHMCAB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOJAAMHMCAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JOJAAMHMCAB* Clone()
		{
			return ((::JOJAAMHMCAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOJAAMHMCAB_CLONE_OFFSET))(this);
		}

		::System::UInt32 FEGIMNBKFHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOJAAMHMCAB_FEGIMNBKFHN_OFFSET))(this);
		}

		::System::Void AABOOKNIJKN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JOJAAMHMCAB_AABOOKNIJKN_OFFSET))(this, a1);
		}

		::System::UInt32 GHCGBBHOAKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOJAAMHMCAB_GHCGBBHOAKB_OFFSET))(this);
		}

		::System::Void ENJNOMANLCN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JOJAAMHMCAB_ENJNOMANLCN_OFFSET))(this, a1);
		}

		::System::UInt32 IMEFPLPNKBK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOJAAMHMCAB_IMEFPLPNKBK_OFFSET))(this);
		}

		::System::Void CLAGJKAIHNA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JOJAAMHMCAB_CLAGJKAIHNA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JOJAAMHMCAB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JOJAAMHMCAB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JOJAAMHMCAB*))((::PBYTE)hIl2Cpp + JOJAAMHMCAB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOJAAMHMCAB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOJAAMHMCAB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JOJAAMHMCAB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOJAAMHMCAB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JOJAAMHMCAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOJAAMHMCAB*))((::PBYTE)hIl2Cpp + JOJAAMHMCAB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JOJAAMHMCAB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
