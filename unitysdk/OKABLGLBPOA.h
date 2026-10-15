#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APAMFCKFHLL;
class OKABLGLBPOA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OKABLGLBPOA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE8E280)
#define OKABLGLBPOA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE8E690)
#define OKABLGLBPOA_CKNALMGLDJL_OFFSET UNITYSDK_OFFSET(0x1DE8DD70)
#define OKABLGLBPOA_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE8DD20)
#define OKABLGLBPOA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE8DBE0)
#define OKABLGLBPOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE8DB40)
#define OKABLGLBPOA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE8DDD0)
#define OKABLGLBPOA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE8DDA0)
#define OKABLGLBPOA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE8DF50)
#define OKABLGLBPOA_GFJDMEPNGFB_OFFSET UNITYSDK_OFFSET(0x1DE8DD80)
#define OKABLGLBPOA_HCLHAFDEFLG_OFFSET UNITYSDK_OFFSET(0x1DE8DD90)
#define OKABLGLBPOA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE8DB00)
#define OKABLGLBPOA_MBDMNCDJPDB_OFFSET UNITYSDK_OFFSET(0x1DE8DD50)
#define OKABLGLBPOA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE8E510)
#define OKABLGLBPOA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE8E3F0)
#define OKABLGLBPOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE8DB30)
#define OKABLGLBPOA_PCJOGIAJHMF_OFFSET UNITYSDK_OFFSET(0x1DE8DD60)
#define OKABLGLBPOA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE8E0B0)
#define OKABLGLBPOA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE8E110)

inline static constexpr unsigned int OKABLGLBPOA_TypeDefinitionIndex = 30041;

	class OKABLGLBPOA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* AKIPNODIFLD; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DKDILPNFNHE; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* BPLDOOODONJ; // 0x28
		::System::UInt32 MPFELJLKAFH; // 0x30
		static ::Google::Protobuf::FieldCodec** StaticGet_LANJFHKLDDA()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "OKABLGLBPOA")->GetStaticField(0x20620);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_NHPMOKGLHEJ()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "OKABLGLBPOA")->GetStaticField(0x20628);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OKABLGLBPOA")->GetStaticField(0x20630);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_LEKLGKDDFMM()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "OKABLGLBPOA")->GetStaticField(0x20638);
		}

		// static const ::System::Object CODFBJPPBGL; // 0x0
		// static const ::System::Object NHMKLNBHELJ; // 0x0
		// static const ::System::Object CEKIBAHNILO; // 0x0
		// static const ::System::Object OHCPOGIAMMG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKABLGLBPOA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OKABLGLBPOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKABLGLBPOA*))((::PBYTE)hIl2Cpp + OKABLGLBPOA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKABLGLBPOA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OKABLGLBPOA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKABLGLBPOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OKABLGLBPOA* Clone()
		{
			return ((::OKABLGLBPOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKABLGLBPOA_CLONE_OFFSET))(this);
		}

		::System::UInt32 MBDMNCDJPDB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKABLGLBPOA_MBDMNCDJPDB_OFFSET))(this);
		}

		::System::Void PCJOGIAJHMF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OKABLGLBPOA_PCJOGIAJHMF_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CKNALMGLDJL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKABLGLBPOA_CKNALMGLDJL_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* GFJDMEPNGFB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKABLGLBPOA_GFJDMEPNGFB_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* HCLHAFDEFLG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKABLGLBPOA_HCLHAFDEFLG_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OKABLGLBPOA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OKABLGLBPOA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OKABLGLBPOA*))((::PBYTE)hIl2Cpp + OKABLGLBPOA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKABLGLBPOA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKABLGLBPOA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OKABLGLBPOA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKABLGLBPOA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OKABLGLBPOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKABLGLBPOA*))((::PBYTE)hIl2Cpp + OKABLGLBPOA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OKABLGLBPOA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
