#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EIKPHEMHIOH;
class JOCIBBFJPMP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EIKPHEMHIOH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2AA650)
#define EIKPHEMHIOH_CBOFFPEFEPP_OFFSET UNITYSDK_OFFSET(0x1E2AA140)
#define EIKPHEMHIOH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2AAB60)
#define EIKPHEMHIOH_CDIFOLHKCID_OFFSET UNITYSDK_OFFSET(0x1E2AA1D0)
#define EIKPHEMHIOH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2AA0F0)
#define EIKPHEMHIOH_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E2AA1A0)
#define EIKPHEMHIOH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2AA010)
#define EIKPHEMHIOH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A9FC0)
#define EIKPHEMHIOH_DJBPCBPLJBK_OFFSET UNITYSDK_OFFSET(0x1E2AA180)
#define EIKPHEMHIOH_DLBMEBEGNGL_OFFSET UNITYSDK_OFFSET(0x1E2AA150)
#define EIKPHEMHIOH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2AA250)
#define EIKPHEMHIOH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2AA1F0)
#define EIKPHEMHIOH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2AA2F0)
#define EIKPHEMHIOH_GJINBGPBEKO_OFFSET UNITYSDK_OFFSET(0x1E2AA170)
#define EIKPHEMHIOH_INGHOCFKLMM_OFFSET UNITYSDK_OFFSET(0x1E2AA160)
#define EIKPHEMHIOH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2A9F50)
#define EIKPHEMHIOH_LCKKGPFEKHM_OFFSET UNITYSDK_OFFSET(0x1E2AA1C0)
#define EIKPHEMHIOH_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E2AA1B0)
#define EIKPHEMHIOH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2AAA20)
#define EIKPHEMHIOH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2AA950)
#define EIKPHEMHIOH_NIEBPCAOAHG_OFFSET UNITYSDK_OFFSET(0x1E2AA190)
#define EIKPHEMHIOH_OANLBBLIKLE_OFFSET UNITYSDK_OFFSET(0x1E2AA1E0)
#define EIKPHEMHIOH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2A9FB0)
#define EIKPHEMHIOH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2AA370)
#define EIKPHEMHIOH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2AA3D0)

inline static constexpr unsigned int EIKPHEMHIOH_TypeDefinitionIndex = 26841;

	class EIKPHEMHIOH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::JOCIBBFJPMP*>* MDELKGNPIOF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 DNKADAFBILN; // 0x20
		::System::UInt32 JKEOJBIKIKE; // 0x24
		::System::UInt32 IDDJKMCKIHO; // 0x28
		::System::UInt32 HFIMENELLNP; // 0x2C
		::System::UInt32 NBFPOGFBMFE; // 0x30
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EIKPHEMHIOH")->GetStaticField(0x499D0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_GAINFCCDPFB()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "EIKPHEMHIOH")->GetStaticField(0x499D8);
		}

		// static const ::System::Object GKBPDIPOFGE; // 0x0
		// static const ::System::Object DCIKMJIGMCD; // 0x0
		// static const ::System::Object MKMJJEKAGGC; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object EFEMONKDOCM; // 0x0
		// static const ::System::Object PKMGCNOEIKD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIKPHEMHIOH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EIKPHEMHIOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EIKPHEMHIOH*))((::PBYTE)hIl2Cpp + EIKPHEMHIOH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIKPHEMHIOH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EIKPHEMHIOH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIKPHEMHIOH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EIKPHEMHIOH* Clone()
		{
			return ((::EIKPHEMHIOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIKPHEMHIOH_CLONE_OFFSET))(this);
		}

		::System::UInt32 CBOFFPEFEPP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIKPHEMHIOH_CBOFFPEFEPP_OFFSET))(this);
		}

		::System::Void DLBMEBEGNGL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EIKPHEMHIOH_DLBMEBEGNGL_OFFSET))(this, a1);
		}

		::System::UInt32 INGHOCFKLMM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIKPHEMHIOH_INGHOCFKLMM_OFFSET))(this);
		}

		::System::Void GJINBGPBEKO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EIKPHEMHIOH_GJINBGPBEKO_OFFSET))(this, a1);
		}

		::System::UInt32 DJBPCBPLJBK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIKPHEMHIOH_DJBPCBPLJBK_OFFSET))(this);
		}

		::System::Void NIEBPCAOAHG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EIKPHEMHIOH_NIEBPCAOAHG_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIKPHEMHIOH_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EIKPHEMHIOH_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JOCIBBFJPMP*>* LCKKGPFEKHM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JOCIBBFJPMP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIKPHEMHIOH_LCKKGPFEKHM_OFFSET))(this);
		}

		::System::UInt32 CDIFOLHKCID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIKPHEMHIOH_CDIFOLHKCID_OFFSET))(this);
		}

		::System::Void OANLBBLIKLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EIKPHEMHIOH_OANLBBLIKLE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EIKPHEMHIOH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EIKPHEMHIOH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EIKPHEMHIOH*))((::PBYTE)hIl2Cpp + EIKPHEMHIOH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIKPHEMHIOH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIKPHEMHIOH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EIKPHEMHIOH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIKPHEMHIOH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EIKPHEMHIOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EIKPHEMHIOH*))((::PBYTE)hIl2Cpp + EIKPHEMHIOH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EIKPHEMHIOH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
