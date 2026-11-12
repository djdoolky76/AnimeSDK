#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBNNMKNBLDI;
class CHAGFKJEIMI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CBNNMKNBLDI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F333540)
#define CBNNMKNBLDI_CAPLHMKKINM_OFFSET UNITYSDK_OFFSET(0x1F3330B0)
#define CBNNMKNBLDI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F333950)
#define CBNNMKNBLDI_CLONE_OFFSET UNITYSDK_OFFSET(0x1F333020)
#define CBNNMKNBLDI_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1F3330C0)
#define CBNNMKNBLDI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F332F50)
#define CBNNMKNBLDI_CTOR_OFFSET UNITYSDK_OFFSET(0x1F332F00)
#define CBNNMKNBLDI_EBOMLPKAHPO_OFFSET UNITYSDK_OFFSET(0x1F3330A0)
#define CBNNMKNBLDI_ECMDCHEDIEF_OFFSET UNITYSDK_OFFSET(0x1F3330F0)
#define CBNNMKNBLDI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F333160)
#define CBNNMKNBLDI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F333100)
#define CBNNMKNBLDI_FHDGAFPJAFB_OFFSET UNITYSDK_OFFSET(0x1F333070)
#define CBNNMKNBLDI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F333210)
#define CBNNMKNBLDI_GJGIDBMONGI_OFFSET UNITYSDK_OFFSET(0x1F333080)
#define CBNNMKNBLDI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F332E90)
#define CBNNMKNBLDI_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1F3330D0)
#define CBNNMKNBLDI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F333830)
#define CBNNMKNBLDI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F333760)
#define CBNNMKNBLDI_NFINIHKKLPK_OFFSET UNITYSDK_OFFSET(0x1F3330E0)
#define CBNNMKNBLDI_NKLFAOMMIKB_OFFSET UNITYSDK_OFFSET(0x1F333090)
#define CBNNMKNBLDI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F332EF0)
#define CBNNMKNBLDI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F333290)
#define CBNNMKNBLDI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F3332F0)

inline static constexpr unsigned int CBNNMKNBLDI_TypeDefinitionIndex = 30822;

	class CBNNMKNBLDI : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::CHAGFKJEIMI*>* BAOELGLJGJC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Boolean IKKJGDPIDGM; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 NLJGJKPAFPG; // 0x24
		::System::UInt32 ICDPONHFAJP; // 0x28
		::System::UInt32 DNKADAFBILN; // 0x2C
		static ::Google::Protobuf::FieldCodec_1<::CHAGFKJEIMI*>** StaticGet_OBBKKNGABOE()
		{
			return (::Google::Protobuf::FieldCodec_1<::CHAGFKJEIMI*>**)UnitySDK::FromName("", "CBNNMKNBLDI")->GetStaticField(0x2E880);
		}

		static ::Google::Protobuf::MessageParser_1<::CBNNMKNBLDI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CBNNMKNBLDI*>**)UnitySDK::FromName("", "CBNNMKNBLDI")->GetStaticField(0x2E888);
		}

		// static const ::System::Object OAJAHLJMBLB; // 0x0
		// static const ::System::Object BCAJFEGKLNH; // 0x0
		// static const ::System::Object BEINPDMEFFL; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object DFLNOALLHCO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBNNMKNBLDI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CBNNMKNBLDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBNNMKNBLDI*))((::PBYTE)hIl2Cpp + CBNNMKNBLDI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBNNMKNBLDI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CBNNMKNBLDI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CBNNMKNBLDI*>*(*)())((::PBYTE)hIl2Cpp + CBNNMKNBLDI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBNNMKNBLDI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CBNNMKNBLDI* Clone()
		{
			return ((::CBNNMKNBLDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBNNMKNBLDI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CHAGFKJEIMI*>* FHDGAFPJAFB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CHAGFKJEIMI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBNNMKNBLDI_FHDGAFPJAFB_OFFSET))(this);
		}

		::System::Boolean GJGIDBMONGI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CBNNMKNBLDI_GJGIDBMONGI_OFFSET))(this);
		}

		::System::Void NKLFAOMMIKB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CBNNMKNBLDI_NKLFAOMMIKB_OFFSET))(this, a1);
		}

		::System::UInt32 EBOMLPKAHPO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBNNMKNBLDI_EBOMLPKAHPO_OFFSET))(this);
		}

		::System::Void CAPLHMKKINM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CBNNMKNBLDI_CAPLHMKKINM_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBNNMKNBLDI_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CBNNMKNBLDI_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::UInt32 NFINIHKKLPK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBNNMKNBLDI_NFINIHKKLPK_OFFSET))(this);
		}

		::System::Void ECMDCHEDIEF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CBNNMKNBLDI_ECMDCHEDIEF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CBNNMKNBLDI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CBNNMKNBLDI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CBNNMKNBLDI*))((::PBYTE)hIl2Cpp + CBNNMKNBLDI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBNNMKNBLDI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBNNMKNBLDI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CBNNMKNBLDI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBNNMKNBLDI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CBNNMKNBLDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBNNMKNBLDI*))((::PBYTE)hIl2Cpp + CBNNMKNBLDI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CBNNMKNBLDI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
