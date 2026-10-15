#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AANLJBLOOFO;
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

#define AANLJBLOOFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDC1AA0)
#define AANLJBLOOFO_CBOFFPEFEPP_OFFSET UNITYSDK_OFFSET(0x1DDC15A0)
#define AANLJBLOOFO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDC1FD0)
#define AANLJBLOOFO_CDIFOLHKCID_OFFSET UNITYSDK_OFFSET(0x1DDC15C0)
#define AANLJBLOOFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDC1540)
#define AANLJBLOOFO_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1DDC15E0)
#define AANLJBLOOFO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDC1480)
#define AANLJBLOOFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDC1430)
#define AANLJBLOOFO_DJBPCBPLJBK_OFFSET UNITYSDK_OFFSET(0x1DDC1600)
#define AANLJBLOOFO_DLBMEBEGNGL_OFFSET UNITYSDK_OFFSET(0x1DDC15B0)
#define AANLJBLOOFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDC16A0)
#define AANLJBLOOFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDC1640)
#define AANLJBLOOFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDC1740)
#define AANLJBLOOFO_GJINBGPBEKO_OFFSET UNITYSDK_OFFSET(0x1DDC1630)
#define AANLJBLOOFO_INGHOCFKLMM_OFFSET UNITYSDK_OFFSET(0x1DDC1620)
#define AANLJBLOOFO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDC13C0)
#define AANLJBLOOFO_LCKKGPFEKHM_OFFSET UNITYSDK_OFFSET(0x1DDC1590)
#define AANLJBLOOFO_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1DDC15F0)
#define AANLJBLOOFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDC1E90)
#define AANLJBLOOFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDC1DB0)
#define AANLJBLOOFO_NIEBPCAOAHG_OFFSET UNITYSDK_OFFSET(0x1DDC1610)
#define AANLJBLOOFO_OANLBBLIKLE_OFFSET UNITYSDK_OFFSET(0x1DDC15D0)
#define AANLJBLOOFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDC1420)
#define AANLJBLOOFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDC17D0)
#define AANLJBLOOFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDC1830)

inline static constexpr unsigned int AANLJBLOOFO_TypeDefinitionIndex = 26843;

	class AANLJBLOOFO : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::JOCIBBFJPMP*>* MDELKGNPIOF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 JKEOJBIKIKE; // 0x20
		::System::UInt32 DNKADAFBILN; // 0x24
		::System::UInt32 NBFPOGFBMFE; // 0x28
		::System::UInt32 HFIMENELLNP; // 0x2C
		::System::UInt32 IDDJKMCKIHO; // 0x30
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AANLJBLOOFO")->GetStaticField(0x377F0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_GAINFCCDPFB()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "AANLJBLOOFO")->GetStaticField(0x377F8);
		}

		// static const ::System::Object EFEMONKDOCM; // 0x0
		// static const ::System::Object GKBPDIPOFGE; // 0x0
		// static const ::System::Object PKMGCNOEIKD; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object MKMJJEKAGGC; // 0x0
		// static const ::System::Object DCIKMJIGMCD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AANLJBLOOFO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AANLJBLOOFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AANLJBLOOFO*))((::PBYTE)hIl2Cpp + AANLJBLOOFO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AANLJBLOOFO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AANLJBLOOFO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AANLJBLOOFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AANLJBLOOFO* Clone()
		{
			return ((::AANLJBLOOFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + AANLJBLOOFO_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JOCIBBFJPMP*>* LCKKGPFEKHM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JOCIBBFJPMP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AANLJBLOOFO_LCKKGPFEKHM_OFFSET))(this);
		}

		::System::UInt32 CBOFFPEFEPP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AANLJBLOOFO_CBOFFPEFEPP_OFFSET))(this);
		}

		::System::Void DLBMEBEGNGL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AANLJBLOOFO_DLBMEBEGNGL_OFFSET))(this, a1);
		}

		::System::UInt32 CDIFOLHKCID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AANLJBLOOFO_CDIFOLHKCID_OFFSET))(this);
		}

		::System::Void OANLBBLIKLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AANLJBLOOFO_OANLBBLIKLE_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AANLJBLOOFO_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AANLJBLOOFO_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::UInt32 DJBPCBPLJBK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AANLJBLOOFO_DJBPCBPLJBK_OFFSET))(this);
		}

		::System::Void NIEBPCAOAHG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AANLJBLOOFO_NIEBPCAOAHG_OFFSET))(this, a1);
		}

		::System::UInt32 INGHOCFKLMM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AANLJBLOOFO_INGHOCFKLMM_OFFSET))(this);
		}

		::System::Void GJINBGPBEKO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AANLJBLOOFO_GJINBGPBEKO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AANLJBLOOFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AANLJBLOOFO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AANLJBLOOFO*))((::PBYTE)hIl2Cpp + AANLJBLOOFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AANLJBLOOFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AANLJBLOOFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AANLJBLOOFO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AANLJBLOOFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AANLJBLOOFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AANLJBLOOFO*))((::PBYTE)hIl2Cpp + AANLJBLOOFO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AANLJBLOOFO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
