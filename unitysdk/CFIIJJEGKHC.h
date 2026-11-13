#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFIIJJEGKHC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CFIIJJEGKHC_AFMCDJJPIIN_OFFSET UNITYSDK_OFFSET(0x1FD18B00)
#define CFIIJJEGKHC_BEHBCJMBAFG_OFFSET UNITYSDK_OFFSET(0x1FD18AD0)
#define CFIIJJEGKHC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FD19200)
#define CFIIJJEGKHC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD19530)
#define CFIIJJEGKHC_CLONE_OFFSET UNITYSDK_OFFSET(0x1FD18A70)
#define CFIIJJEGKHC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FD189D0)
#define CFIIJJEGKHC_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD18980)
#define CFIIJJEGKHC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FD18B90)
#define CFIIJJEGKHC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FD18B30)
#define CFIIJJEGKHC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FD18DB0)
#define CFIIJJEGKHC_GGLFKBBAMIA_OFFSET UNITYSDK_OFFSET(0x1FD18AC0)
#define CFIIJJEGKHC_HCOIFBALCNA_OFFSET UNITYSDK_OFFSET(0x1FD18AF0)
#define CFIIJJEGKHC_JHCCDFDKOJA_OFFSET UNITYSDK_OFFSET(0x1FD18B10)
#define CFIIJJEGKHC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FD18910)
#define CFIIJJEGKHC_KJEKGLKCMEL_OFFSET UNITYSDK_OFFSET(0x1FD18AE0)
#define CFIIJJEGKHC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FD19420)
#define CFIIJJEGKHC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FD193B0)
#define CFIIJJEGKHC_MHJFHECEKJI_OFFSET UNITYSDK_OFFSET(0x1FD18B20)
#define CFIIJJEGKHC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FD18970)
#define CFIIJJEGKHC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FD18FB0)
#define CFIIJJEGKHC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FD19010)

inline static constexpr unsigned int CFIIJJEGKHC_TypeDefinitionIndex = 26512;

	class CFIIJJEGKHC : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NBEEPFHEMHP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 LAHGDPADCIP; // 0x20
		::System::UInt32 IBEBBFIHLLP; // 0x24
		::System::Double MNLJODHDOON; // 0x28
		static ::Google::Protobuf::MessageParser_1<::CFIIJJEGKHC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CFIIJJEGKHC*>**)UnitySDK::FromName("", "CFIIJJEGKHC")->GetStaticField(0x9E60);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_BJLKLPHNJMI()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "CFIIJJEGKHC")->GetStaticField(0x9E68);
		}

		// static const ::System::Object AJBHMEBADMA; // 0x0
		// static const ::System::Object JJCKJMIJMHE; // 0x0
		// static const ::System::Object AODKNNMBGAD; // 0x0
		// static const ::System::Object JPPBLNHFMHO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIIJJEGKHC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CFIIJJEGKHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFIIJJEGKHC*))((::PBYTE)hIl2Cpp + CFIIJJEGKHC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFIIJJEGKHC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CFIIJJEGKHC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CFIIJJEGKHC*>*(*)())((::PBYTE)hIl2Cpp + CFIIJJEGKHC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIIJJEGKHC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CFIIJJEGKHC* Clone()
		{
			return ((::CFIIJJEGKHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIIJJEGKHC_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GGLFKBBAMIA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIIJJEGKHC_GGLFKBBAMIA_OFFSET))(this);
		}

		::System::Double BEHBCJMBAFG()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIIJJEGKHC_BEHBCJMBAFG_OFFSET))(this);
		}

		::System::Void KJEKGLKCMEL(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CFIIJJEGKHC_KJEKGLKCMEL_OFFSET))(this, a1);
		}

		::System::UInt32 HCOIFBALCNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIIJJEGKHC_HCOIFBALCNA_OFFSET))(this);
		}

		::System::Void AFMCDJJPIIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CFIIJJEGKHC_AFMCDJJPIIN_OFFSET))(this, a1);
		}

		::System::UInt32 JHCCDFDKOJA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIIJJEGKHC_JHCCDFDKOJA_OFFSET))(this);
		}

		::System::Void MHJFHECEKJI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CFIIJJEGKHC_MHJFHECEKJI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CFIIJJEGKHC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CFIIJJEGKHC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CFIIJJEGKHC*))((::PBYTE)hIl2Cpp + CFIIJJEGKHC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIIJJEGKHC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIIJJEGKHC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CFIIJJEGKHC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIIJJEGKHC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CFIIJJEGKHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFIIJJEGKHC*))((::PBYTE)hIl2Cpp + CFIIJJEGKHC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CFIIJJEGKHC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
