#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AKHEOAIPAPA;
class GACKCPEPDAF;
class LDNFIICMCHA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LDNFIICMCHA_ADAHCAJBNOB_OFFSET UNITYSDK_OFFSET(0x1E8FE9B0)
#define LDNFIICMCHA_BBHLIGJLJIK_OFFSET UNITYSDK_OFFSET(0x1E8FE960)
#define LDNFIICMCHA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8FEF60)
#define LDNFIICMCHA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8FF5D0)
#define LDNFIICMCHA_CHJMMMKHAOK_OFFSET UNITYSDK_OFFSET(0x1E8FE9A0)
#define LDNFIICMCHA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8FE8C0)
#define LDNFIICMCHA_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E8FE930)
#define LDNFIICMCHA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8FE790)
#define LDNFIICMCHA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8FE720)
#define LDNFIICMCHA_DIJGBBMKBHJ_OFFSET UNITYSDK_OFFSET(0x1E8FE920)
#define LDNFIICMCHA_EEBEBPENMBP_OFFSET UNITYSDK_OFFSET(0x1E8FE970)
#define LDNFIICMCHA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8FEA30)
#define LDNFIICMCHA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8FE9D0)
#define LDNFIICMCHA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8FEB20)
#define LDNFIICMCHA_GFMLPIKMLBF_OFFSET UNITYSDK_OFFSET(0x1E8FE980)
#define LDNFIICMCHA_GMFHFEENJHK_OFFSET UNITYSDK_OFFSET(0x1E8FE950)
#define LDNFIICMCHA_HJONODKCGIL_OFFSET UNITYSDK_OFFSET(0x1E8FE990)
#define LDNFIICMCHA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8FE6B0)
#define LDNFIICMCHA_KENPOJKHGJB_OFFSET UNITYSDK_OFFSET(0x1E8FE910)
#define LDNFIICMCHA_MDBICAHKDGN_OFFSET UNITYSDK_OFFSET(0x1E8FE9C0)
#define LDNFIICMCHA_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E8FE940)
#define LDNFIICMCHA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8FF420)
#define LDNFIICMCHA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8FF2F0)
#define LDNFIICMCHA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8FE710)
#define LDNFIICMCHA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8FEC00)
#define LDNFIICMCHA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8FEC60)

inline static constexpr unsigned int LDNFIICMCHA_TypeDefinitionIndex = 27046;

	class LDNFIICMCHA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::GACKCPEPDAF*>* JELHEHIIJDM; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::AKHEOAIPAPA*>* GLGAFLLHLMF; // 0x20
		::System::UInt64 FCHCMNGHNEP; // 0x28
		::System::Boolean JGDNLAMGHFG; // 0x30
		::System::Byte _padding0[0x7];
		::System::UInt64 FGEKJMADECN; // 0x38
		::System::UInt32 DNKADAFBILN; // 0x40
		::System::UInt32 DIHAPDNPDHC; // 0x44
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LDNFIICMCHA")->GetStaticField(0x35350);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_PEFCBLJFKND()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "LDNFIICMCHA")->GetStaticField(0x35358);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_FPDPHALNFCM()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "LDNFIICMCHA")->GetStaticField(0x35360);
		}

		// static const ::System::Object DNDOBKCBHMK; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object BKDFOCECEIM; // 0x0
		// static const ::System::Object EPMPEIKNBNH; // 0x0
		// static const ::System::Object EDMMNMDMFHI; // 0x0
		// static const ::System::Object DNLPMAHGDCD; // 0x0
		// static const ::System::Object IDOEGHDABLM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNFIICMCHA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LDNFIICMCHA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDNFIICMCHA*))((::PBYTE)hIl2Cpp + LDNFIICMCHA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDNFIICMCHA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LDNFIICMCHA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNFIICMCHA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LDNFIICMCHA* Clone()
		{
			return ((::LDNFIICMCHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNFIICMCHA_CLONE_OFFSET))(this);
		}

		::System::UInt64 KENPOJKHGJB()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNFIICMCHA_KENPOJKHGJB_OFFSET))(this);
		}

		::System::Void DIJGBBMKBHJ(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + LDNFIICMCHA_DIJGBBMKBHJ_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNFIICMCHA_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDNFIICMCHA_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::AKHEOAIPAPA*>* GMFHFEENJHK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::AKHEOAIPAPA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNFIICMCHA_GMFHFEENJHK_OFFSET))(this);
		}

		::System::Boolean BBHLIGJLJIK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNFIICMCHA_BBHLIGJLJIK_OFFSET))(this);
		}

		::System::Void EEBEBPENMBP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LDNFIICMCHA_EEBEBPENMBP_OFFSET))(this, a1);
		}

		::System::UInt64 GFMLPIKMLBF()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNFIICMCHA_GFMLPIKMLBF_OFFSET))(this);
		}

		::System::Void HJONODKCGIL(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + LDNFIICMCHA_HJONODKCGIL_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::GACKCPEPDAF*>* CHJMMMKHAOK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::GACKCPEPDAF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNFIICMCHA_CHJMMMKHAOK_OFFSET))(this);
		}

		::System::UInt32 ADAHCAJBNOB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNFIICMCHA_ADAHCAJBNOB_OFFSET))(this);
		}

		::System::Void MDBICAHKDGN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDNFIICMCHA_MDBICAHKDGN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LDNFIICMCHA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LDNFIICMCHA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LDNFIICMCHA*))((::PBYTE)hIl2Cpp + LDNFIICMCHA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNFIICMCHA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNFIICMCHA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LDNFIICMCHA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNFIICMCHA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LDNFIICMCHA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDNFIICMCHA*))((::PBYTE)hIl2Cpp + LDNFIICMCHA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LDNFIICMCHA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
