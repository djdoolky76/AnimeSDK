#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEBNHMHDMNP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AEBNHMHDMNP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDB9660)
#define AEBNHMHDMNP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDB9990)
#define AEBNHMHDMNP_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDB9140)
#define AEBNHMHDMNP_CNMKKIPBBBA_OFFSET UNITYSDK_OFFSET(0x1DDB91C0)
#define AEBNHMHDMNP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDB90A0)
#define AEBNHMHDMNP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDB9050)
#define AEBNHMHDMNP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDB9260)
#define AEBNHMHDMNP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDB91E0)
#define AEBNHMHDMNP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDB9370)
#define AEBNHMHDMNP_GFCIBBGDMAM_OFFSET UNITYSDK_OFFSET(0x1DDB9190)
#define AEBNHMHDMNP_HJFBILLEMML_OFFSET UNITYSDK_OFFSET(0x1DDB9180)
#define AEBNHMHDMNP_HNJLHBODAEI_OFFSET UNITYSDK_OFFSET(0x1DDB91D0)
#define AEBNHMHDMNP_IGCPEICBDEI_OFFSET UNITYSDK_OFFSET(0x1DDB91A0)
#define AEBNHMHDMNP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDB9010)
#define AEBNHMHDMNP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDB98A0)
#define AEBNHMHDMNP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDB9840)
#define AEBNHMHDMNP_OFKGGGOFKKL_OFFSET UNITYSDK_OFFSET(0x1DDB9170)
#define AEBNHMHDMNP_OLNACCBBKMH_OFFSET UNITYSDK_OFFSET(0x1DDB91B0)
#define AEBNHMHDMNP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDB9040)
#define AEBNHMHDMNP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDB9470)
#define AEBNHMHDMNP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDB94D0)

inline static constexpr unsigned int AEBNHMHDMNP_TypeDefinitionIndex = 33600;

	class AEBNHMHDMNP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FBPLIPPADLP; // 0x18
		::System::UInt32 BALABHJCDED; // 0x20
		::System::UInt32 HEMHBNKDGME; // 0x24
		::System::UInt32 LCKIDIBJOBD; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_MKDOPDMMFCK()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "AEBNHMHDMNP")->GetStaticField(0x33370);
		}

		static ::Google::Protobuf::MessageParser_1<::AEBNHMHDMNP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AEBNHMHDMNP*>**)UnitySDK::FromName("", "AEBNHMHDMNP")->GetStaticField(0x33378);
		}

		// static const ::System::Object DAMFHOOMJDK; // 0x0
		// static const ::System::Object DJCDEFOCMCH; // 0x0
		// static const ::System::Object JFNJBOMPNML; // 0x0
		// static const ::System::Object DECJPNGFFLC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBNHMHDMNP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AEBNHMHDMNP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AEBNHMHDMNP*))((::PBYTE)hIl2Cpp + AEBNHMHDMNP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEBNHMHDMNP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AEBNHMHDMNP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AEBNHMHDMNP*>*(*)())((::PBYTE)hIl2Cpp + AEBNHMHDMNP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBNHMHDMNP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AEBNHMHDMNP* Clone()
		{
			return ((::AEBNHMHDMNP*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBNHMHDMNP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OFKGGGOFKKL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBNHMHDMNP_OFKGGGOFKKL_OFFSET))(this);
		}

		::System::UInt32 HJFBILLEMML()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBNHMHDMNP_HJFBILLEMML_OFFSET))(this);
		}

		::System::Void GFCIBBGDMAM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AEBNHMHDMNP_GFCIBBGDMAM_OFFSET))(this, a1);
		}

		::System::UInt32 IGCPEICBDEI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBNHMHDMNP_IGCPEICBDEI_OFFSET))(this);
		}

		::System::Void OLNACCBBKMH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AEBNHMHDMNP_OLNACCBBKMH_OFFSET))(this, a1);
		}

		::System::UInt32 CNMKKIPBBBA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBNHMHDMNP_CNMKKIPBBBA_OFFSET))(this);
		}

		::System::Void HNJLHBODAEI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AEBNHMHDMNP_HNJLHBODAEI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AEBNHMHDMNP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AEBNHMHDMNP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AEBNHMHDMNP*))((::PBYTE)hIl2Cpp + AEBNHMHDMNP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBNHMHDMNP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBNHMHDMNP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AEBNHMHDMNP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBNHMHDMNP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AEBNHMHDMNP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AEBNHMHDMNP*))((::PBYTE)hIl2Cpp + AEBNHMHDMNP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AEBNHMHDMNP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
