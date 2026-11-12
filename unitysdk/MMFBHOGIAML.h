#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMFPHALPHMF;
class MMFBHOGIAML;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MMFBHOGIAML_AFJGHICACON_OFFSET UNITYSDK_OFFSET(0x1FDC2940)
#define MMFBHOGIAML_BNFHBKBDHJL_OFFSET UNITYSDK_OFFSET(0x1FDC2950)
#define MMFBHOGIAML_BODJOHPCDJO_OFFSET UNITYSDK_OFFSET(0x1FDC2930)
#define MMFBHOGIAML_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FDC2DE0)
#define MMFBHOGIAML_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDC31A0)
#define MMFBHOGIAML_CLONE_OFFSET UNITYSDK_OFFSET(0x1FDC28E0)
#define MMFBHOGIAML_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FDC2820)
#define MMFBHOGIAML_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDC27D0)
#define MMFBHOGIAML_EMNEFBFCKDJ_OFFSET UNITYSDK_OFFSET(0x1FDC2980)
#define MMFBHOGIAML_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FDC2A00)
#define MMFBHOGIAML_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FDC29A0)
#define MMFBHOGIAML_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FDC2B40)
#define MMFBHOGIAML_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FDC2760)
#define MMFBHOGIAML_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FDC30A0)
#define MMFBHOGIAML_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FDC2FE0)
#define MMFBHOGIAML_MNBHLAJGKOH_OFFSET UNITYSDK_OFFSET(0x1FDC2970)
#define MMFBHOGIAML_MOLJCJOHBEL_OFFSET UNITYSDK_OFFSET(0x1FDC2990)
#define MMFBHOGIAML_ODEDBIABFIB_OFFSET UNITYSDK_OFFSET(0x1FDC2960)
#define MMFBHOGIAML_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FDC27C0)
#define MMFBHOGIAML_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FDC2BC0)
#define MMFBHOGIAML_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FDC2C20)

inline static constexpr unsigned int MMFBHOGIAML_TypeDefinitionIndex = 30250;

	class MMFBHOGIAML : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::AMFPHALPHMF*>* FDFBNBLNHLK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 MJIMFDKFGDE; // 0x20
		::System::UInt32 ODCKBAEKGJG; // 0x24
		::System::UInt32 AAKAHKOGOOJ; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::AMFPHALPHMF*>** StaticGet_FEAFGBNBMEP()
		{
			return (::Google::Protobuf::FieldCodec_1<::AMFPHALPHMF*>**)UnitySDK::FromName("", "MMFBHOGIAML")->GetStaticField(0x5E430);
		}

		static ::Google::Protobuf::MessageParser_1<::MMFBHOGIAML*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MMFBHOGIAML*>**)UnitySDK::FromName("", "MMFBHOGIAML")->GetStaticField(0x5E438);
		}

		// static const ::System::Object BDHJLOLMAKK; // 0x0
		// static const ::System::Object ALNJDDJLKNJ; // 0x0
		// static const ::System::Object MJJGNBCFCOH; // 0x0
		// static const ::System::Object DOADNLHHMCH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFBHOGIAML_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MMFBHOGIAML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMFBHOGIAML*))((::PBYTE)hIl2Cpp + MMFBHOGIAML_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMFBHOGIAML_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MMFBHOGIAML*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MMFBHOGIAML*>*(*)())((::PBYTE)hIl2Cpp + MMFBHOGIAML_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFBHOGIAML_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MMFBHOGIAML* Clone()
		{
			return ((::MMFBHOGIAML*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFBHOGIAML_CLONE_OFFSET))(this);
		}

		::System::UInt32 BODJOHPCDJO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFBHOGIAML_BODJOHPCDJO_OFFSET))(this);
		}

		::System::Void AFJGHICACON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MMFBHOGIAML_AFJGHICACON_OFFSET))(this, a1);
		}

		::System::UInt32 BNFHBKBDHJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFBHOGIAML_BNFHBKBDHJL_OFFSET))(this);
		}

		::System::Void ODEDBIABFIB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MMFBHOGIAML_ODEDBIABFIB_OFFSET))(this, a1);
		}

		::System::UInt32 MNBHLAJGKOH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFBHOGIAML_MNBHLAJGKOH_OFFSET))(this);
		}

		::System::Void EMNEFBFCKDJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MMFBHOGIAML_EMNEFBFCKDJ_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::AMFPHALPHMF*>* MOLJCJOHBEL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::AMFPHALPHMF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFBHOGIAML_MOLJCJOHBEL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMFBHOGIAML_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MMFBHOGIAML* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MMFBHOGIAML*))((::PBYTE)hIl2Cpp + MMFBHOGIAML_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFBHOGIAML_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFBHOGIAML_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MMFBHOGIAML_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFBHOGIAML_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MMFBHOGIAML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMFBHOGIAML*))((::PBYTE)hIl2Cpp + MMFBHOGIAML_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MMFBHOGIAML_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
