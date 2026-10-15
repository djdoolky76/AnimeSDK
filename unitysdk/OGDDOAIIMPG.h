#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OGDDOAIIMPG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define OGDDOAIIMPG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE504D0)
#define OGDDOAIIMPG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE50900)
#define OGDDOAIIMPG_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE4FE90)
#define OGDDOAIIMPG_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1DE4FEC0)
#define OGDDOAIIMPG_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1DE4FF10)
#define OGDDOAIIMPG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE4FDC0)
#define OGDDOAIIMPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE4FD70)
#define OGDDOAIIMPG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE4FFF0)
#define OGDDOAIIMPG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE4FF50)
#define OGDDOAIIMPG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DE4FF00)
#define OGDDOAIIMPG_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1DE4FF20)
#define OGDDOAIIMPG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE50120)
#define OGDDOAIIMPG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE4FD30)
#define OGDDOAIIMPG_KPAOANINGGP_OFFSET UNITYSDK_OFFSET(0x1DE4FEE0)
#define OGDDOAIIMPG_LLLKIBABDHE_OFFSET UNITYSDK_OFFSET(0x1DE4FF40)
#define OGDDOAIIMPG_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1DE4FED0)
#define OGDDOAIIMPG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE507A0)
#define OGDDOAIIMPG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE506E0)
#define OGDDOAIIMPG_NFEOGMFBPIB_OFFSET UNITYSDK_OFFSET(0x1DE4FF30)
#define OGDDOAIIMPG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DE4FEF0)
#define OGDDOAIIMPG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE4FD60)
#define OGDDOAIIMPG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE50280)
#define OGDDOAIIMPG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE502E0)

	class OGDDOAIIMPG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EOGMBDKJJFG; // 0x18
		::Proto::ItemList* JDAFJANAEBG; // 0x20
		::System::UInt32 FPCPDAGACHN; // 0x28
		::System::UInt32 DNKADAFBILN; // 0x2C
		::System::UInt32 NAEACGPKNNH; // 0x30
		static ::Google::Protobuf::FieldCodec** StaticGet_PAKMLKAPDIP()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "OGDDOAIIMPG")->GetStaticField(0x17D50);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OGDDOAIIMPG")->GetStaticField(0x17D58);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OGDDOAIIMPG_JJGHOBBFNJD_OFFSET))();
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
