#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MFCCCIMGMFL;
class PAMNDCBKJEI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PAMNDCBKJEI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEF0A40)
#define PAMNDCBKJEI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEF0E80)
#define PAMNDCBKJEI_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEF0500)
#define PAMNDCBKJEI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEF0460)
#define PAMNDCBKJEI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEF0420)
#define PAMNDCBKJEI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEF06E0)
#define PAMNDCBKJEI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEF0580)
#define PAMNDCBKJEI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DEF0570)
#define PAMNDCBKJEI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEF0810)
#define PAMNDCBKJEI_IMDOOCEJIHE_OFFSET UNITYSDK_OFFSET(0x1DEF0540)
#define PAMNDCBKJEI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEF03E0)
#define PAMNDCBKJEI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEF0C90)
#define PAMNDCBKJEI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEF0BE0)
#define PAMNDCBKJEI_NNEAPAMPIMJ_OFFSET UNITYSDK_OFFSET(0x1DEF0530)
#define PAMNDCBKJEI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DEF0560)
#define PAMNDCBKJEI_ONMCNKBOLDA_OFFSET UNITYSDK_OFFSET(0x1DEF0550)
#define PAMNDCBKJEI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEF0410)
#define PAMNDCBKJEI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEF0880)
#define PAMNDCBKJEI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEF08E0)

inline static constexpr unsigned int PAMNDCBKJEI_TypeDefinitionIndex = 26606;

	class PAMNDCBKJEI : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::MFCCCIMGMFL*>* HPAIJEBDKNN; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 DKHHABIAPGM; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::MessageParser_1<::PAMNDCBKJEI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PAMNDCBKJEI*>**)UnitySDK::FromName("", "PAMNDCBKJEI")->GetStaticField(0x32770);
		}

		static ::Google::Protobuf::FieldCodec_1<::MFCCCIMGMFL*>** StaticGet_AEAPKPHPOIJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::MFCCCIMGMFL*>**)UnitySDK::FromName("", "PAMNDCBKJEI")->GetStaticField(0x32778);
		}

		// static const ::System::Object GAOPGHPLIGM; // 0x0
		// static const ::System::Object BBCBDHLHGNP; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMNDCBKJEI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PAMNDCBKJEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PAMNDCBKJEI*))((::PBYTE)hIl2Cpp + PAMNDCBKJEI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAMNDCBKJEI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PAMNDCBKJEI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PAMNDCBKJEI*>*(*)())((::PBYTE)hIl2Cpp + PAMNDCBKJEI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMNDCBKJEI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PAMNDCBKJEI* Clone()
		{
			return ((::PAMNDCBKJEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMNDCBKJEI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::MFCCCIMGMFL*>* NNEAPAMPIMJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::MFCCCIMGMFL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMNDCBKJEI_NNEAPAMPIMJ_OFFSET))(this);
		}

		::System::UInt32 IMDOOCEJIHE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMNDCBKJEI_IMDOOCEJIHE_OFFSET))(this);
		}

		::System::Void ONMCNKBOLDA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PAMNDCBKJEI_ONMCNKBOLDA_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMNDCBKJEI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PAMNDCBKJEI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PAMNDCBKJEI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PAMNDCBKJEI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PAMNDCBKJEI*))((::PBYTE)hIl2Cpp + PAMNDCBKJEI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMNDCBKJEI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMNDCBKJEI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PAMNDCBKJEI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMNDCBKJEI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PAMNDCBKJEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PAMNDCBKJEI*))((::PBYTE)hIl2Cpp + PAMNDCBKJEI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PAMNDCBKJEI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
