#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMIIFDNHLFN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GMIIFDNHLFN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4A6D00)
#define GMIIFDNHLFN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4A71A0)
#define GMIIFDNHLFN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4A6760)
#define GMIIFDNHLFN_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E4A67B0)
#define GMIIFDNHLFN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4A6660)
#define GMIIFDNHLFN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4A65E0)
#define GMIIFDNHLFN_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1E4A6790)
#define GMIIFDNHLFN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4A6860)
#define GMIIFDNHLFN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4A6830)
#define GMIIFDNHLFN_FHLABDCBJNI_OFFSET UNITYSDK_OFFSET(0x1E4A6820)
#define GMIIFDNHLFN_FMPAHAKPHOK_OFFSET UNITYSDK_OFFSET(0x1E4A67E0)
#define GMIIFDNHLFN_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1E4A67A0)
#define GMIIFDNHLFN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4A6930)
#define GMIIFDNHLFN_GHODEANBLFC_OFFSET UNITYSDK_OFFSET(0x1E4A67D0)
#define GMIIFDNHLFN_HEOEOAGIGCO_OFFSET UNITYSDK_OFFSET(0x1E4A67F0)
#define GMIIFDNHLFN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4A65A0)
#define GMIIFDNHLFN_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E4A67C0)
#define GMIIFDNHLFN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4A7020)
#define GMIIFDNHLFN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4A6F90)
#define GMIIFDNHLFN_NENDEMEEJHI_OFFSET UNITYSDK_OFFSET(0x1E4A6810)
#define GMIIFDNHLFN_NJCPONCBMFG_OFFSET UNITYSDK_OFFSET(0x1E4A6800)
#define GMIIFDNHLFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4A65D0)
#define GMIIFDNHLFN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4A6A90)
#define GMIIFDNHLFN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4A6AF0)

inline static constexpr unsigned int GMIIFDNHLFN_TypeDefinitionIndex = 25411;

	class GMIIFDNHLFN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JCFGEMHMNKO; // 0x18
		::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Single>* CCKBKOANOKF; // 0x20
		::System::UInt32 DNKADAFBILN; // 0x28
		::System::UInt32 AKOEJEDDDFG; // 0x2C
		::System::UInt32 GEMFJILOPLL; // 0x30
		::System::UInt32 NIEBBONGCEO; // 0x34
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_HLHDMBALJGC()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GMIIFDNHLFN")->GetStaticField(0xCDD0);
		}

		static ::System::Object** StaticGet_AGBKGNPMDEM()
		{
			return (::System::Object**)UnitySDK::FromName("", "GMIIFDNHLFN")->GetStaticField(0xCDD8);
		}

		static ::Google::Protobuf::MessageParser_1<::GMIIFDNHLFN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GMIIFDNHLFN*>**)UnitySDK::FromName("", "GMIIFDNHLFN")->GetStaticField(0xCDE0);
		}

		// static const ::System::Object AKFFJEHMCCB; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object LFLOPPAPHNF; // 0x0
		// static const ::System::Object MKBPABEODHN; // 0x0
		// static const ::System::Object IECLPCDMAEC; // 0x0
		// static const ::System::Object HCCCFLHJFOM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIIFDNHLFN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GMIIFDNHLFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMIIFDNHLFN*))((::PBYTE)hIl2Cpp + GMIIFDNHLFN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMIIFDNHLFN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GMIIFDNHLFN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GMIIFDNHLFN*>*(*)())((::PBYTE)hIl2Cpp + GMIIFDNHLFN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIIFDNHLFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GMIIFDNHLFN* Clone()
		{
			return ((::GMIIFDNHLFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIIFDNHLFN_CLONE_OFFSET))(this);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIIFDNHLFN_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GMIIFDNHLFN_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIIFDNHLFN_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GMIIFDNHLFN_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::UInt32 GHODEANBLFC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIIFDNHLFN_GHODEANBLFC_OFFSET))(this);
		}

		::System::Void FMPAHAKPHOK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GMIIFDNHLFN_FMPAHAKPHOK_OFFSET))(this, a1);
		}

		::System::UInt32 HEOEOAGIGCO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIIFDNHLFN_HEOEOAGIGCO_OFFSET))(this);
		}

		::System::Void NJCPONCBMFG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GMIIFDNHLFN_NJCPONCBMFG_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NENDEMEEJHI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIIFDNHLFN_NENDEMEEJHI_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Single>* FHLABDCBJNI()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIIFDNHLFN_FHLABDCBJNI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GMIIFDNHLFN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GMIIFDNHLFN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GMIIFDNHLFN*))((::PBYTE)hIl2Cpp + GMIIFDNHLFN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIIFDNHLFN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIIFDNHLFN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GMIIFDNHLFN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIIFDNHLFN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GMIIFDNHLFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMIIFDNHLFN*))((::PBYTE)hIl2Cpp + GMIIFDNHLFN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GMIIFDNHLFN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
