#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OGDDOAIIMPG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define OGDDOAIIMPG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE22DA0)
#define OGDDOAIIMPG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE231D0)
#define OGDDOAIIMPG_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE22760)
#define OGDDOAIIMPG_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1DE22790)
#define OGDDOAIIMPG_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1DE227E0)
#define OGDDOAIIMPG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE22690)
#define OGDDOAIIMPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE22640)
#define OGDDOAIIMPG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE228C0)
#define OGDDOAIIMPG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE22820)
#define OGDDOAIIMPG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DE227D0)
#define OGDDOAIIMPG_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1DE227F0)
#define OGDDOAIIMPG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE229F0)
#define OGDDOAIIMPG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE22600)
#define OGDDOAIIMPG_KPAOANINGGP_OFFSET UNITYSDK_OFFSET(0x1DE227B0)
#define OGDDOAIIMPG_LLLKIBABDHE_OFFSET UNITYSDK_OFFSET(0x1DE22810)
#define OGDDOAIIMPG_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1DE227A0)
#define OGDDOAIIMPG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE23070)
#define OGDDOAIIMPG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE22FB0)
#define OGDDOAIIMPG_NFEOGMFBPIB_OFFSET UNITYSDK_OFFSET(0x1DE22800)
#define OGDDOAIIMPG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DE227C0)
#define OGDDOAIIMPG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE22630)
#define OGDDOAIIMPG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE22B50)
#define OGDDOAIIMPG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE22BB0)

inline static constexpr unsigned int OGDDOAIIMPG_TypeDefinitionIndex = 33468;

	class OGDDOAIIMPG : public ::System::Object
	{
	public:
		::Proto::ItemList* JDAFJANAEBG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EOGMBDKJJFG; // 0x20
		::System::UInt32 FPCPDAGACHN; // 0x28
		::System::UInt32 NAEACGPKNNH; // 0x2C
		::System::UInt32 DNKADAFBILN; // 0x30
		static ::Google::Protobuf::MessageParser_1<::OGDDOAIIMPG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OGDDOAIIMPG*>**)UnitySDK::FromName("", "OGDDOAIIMPG")->GetStaticField(0x17870);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_PAKMLKAPDIP()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "OGDDOAIIMPG")->GetStaticField(0x17878);
		}

		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object BMLNCLDFFOJ; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object GMGMGFBKBPD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDDOAIIMPG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OGDDOAIIMPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGDDOAIIMPG*))((::PBYTE)hIl2Cpp + OGDDOAIIMPG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGDDOAIIMPG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OGDDOAIIMPG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OGDDOAIIMPG*>*(*)())((::PBYTE)hIl2Cpp + OGDDOAIIMPG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDDOAIIMPG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OGDDOAIIMPG* Clone()
		{
			return ((::OGDDOAIIMPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDDOAIIMPG_CLONE_OFFSET))(this);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDDOAIIMPG_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OGDDOAIIMPG_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KPAOANINGGP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDDOAIIMPG_KPAOANINGGP_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDDOAIIMPG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OGDDOAIIMPG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDDOAIIMPG_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + OGDDOAIIMPG_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::UInt32 NFEOGMFBPIB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDDOAIIMPG_NFEOGMFBPIB_OFFSET))(this);
		}

		::System::Void LLLKIBABDHE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OGDDOAIIMPG_LLLKIBABDHE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OGDDOAIIMPG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OGDDOAIIMPG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OGDDOAIIMPG*))((::PBYTE)hIl2Cpp + OGDDOAIIMPG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDDOAIIMPG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDDOAIIMPG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OGDDOAIIMPG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDDOAIIMPG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OGDDOAIIMPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGDDOAIIMPG*))((::PBYTE)hIl2Cpp + OGDDOAIIMPG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OGDDOAIIMPG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
