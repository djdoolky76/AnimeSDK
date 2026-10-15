#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMEMKFNABGG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AMEMKFNABGG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E51FA30)
#define AMEMKFNABGG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E51FDC0)
#define AMEMKFNABGG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E51F520)
#define AMEMKFNABGG_CPDLPEOPFJG_OFFSET UNITYSDK_OFFSET(0x1E51F5B0)
#define AMEMKFNABGG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E51F420)
#define AMEMKFNABGG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E51F390)
#define AMEMKFNABGG_DNPNCPACHNE_OFFSET UNITYSDK_OFFSET(0x1E51F550)
#define AMEMKFNABGG_EDMMLNFINMA_OFFSET UNITYSDK_OFFSET(0x1E51F5A0)
#define AMEMKFNABGG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E51F600)
#define AMEMKFNABGG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E51F5D0)
#define AMEMKFNABGG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E51F6A0)
#define AMEMKFNABGG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E51F350)
#define AMEMKFNABGG_KBLCEIFNBEF_OFFSET UNITYSDK_OFFSET(0x1E51F5C0)
#define AMEMKFNABGG_KJIFLNAPOLG_OFFSET UNITYSDK_OFFSET(0x1E51F590)
#define AMEMKFNABGG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E51FC60)
#define AMEMKFNABGG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E51FBE0)
#define AMEMKFNABGG_NJOINAEIHPH_OFFSET UNITYSDK_OFFSET(0x1E51F580)
#define AMEMKFNABGG_NPELNJCECLP_OFFSET UNITYSDK_OFFSET(0x1E51F570)
#define AMEMKFNABGG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E51F380)
#define AMEMKFNABGG_PKLKMKFOCHO_OFFSET UNITYSDK_OFFSET(0x1E51F560)
#define AMEMKFNABGG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E51F7C0)
#define AMEMKFNABGG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E51F820)

inline static constexpr unsigned int AMEMKFNABGG_TypeDefinitionIndex = 25396;

	class AMEMKFNABGG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EADMJHKJMJH; // 0x10
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt64>* ENBNJBCIKIL; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 CMJAFMEHNGG; // 0x28
		::System::Boolean DOJJIJKDKFM; // 0x2C
		::System::Byte _padding0[0x3];
		::System::UInt32 JPDDPPMKMNO; // 0x30
		static ::System::Object** StaticGet_EIAHNLMPFFL()
		{
			return (::System::Object**)UnitySDK::FromName("", "AMEMKFNABGG")->GetStaticField(0x3C200);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_GEEOEHFHHEL()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "AMEMKFNABGG")->GetStaticField(0x3C208);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AMEMKFNABGG")->GetStaticField(0x3C210);
		}

		// static const ::System::Object NOGDCIOJCKN; // 0x0
		// static const ::System::Object HCKMMPICGLH; // 0x0
		// static const ::System::Object LHMMBOANPKJ; // 0x0
		// static const ::System::Object OFIDNOKAICD; // 0x0
		// static const ::System::Object HHPEKPPNBDN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEMKFNABGG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AMEMKFNABGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMEMKFNABGG*))((::PBYTE)hIl2Cpp + AMEMKFNABGG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMEMKFNABGG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AMEMKFNABGG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEMKFNABGG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AMEMKFNABGG* Clone()
		{
			return ((::AMEMKFNABGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEMKFNABGG_CLONE_OFFSET))(this);
		}

		::System::Boolean DNPNCPACHNE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEMKFNABGG_DNPNCPACHNE_OFFSET))(this);
		}

		::System::Void PKLKMKFOCHO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMEMKFNABGG_PKLKMKFOCHO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NPELNJCECLP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEMKFNABGG_NPELNJCECLP_OFFSET))(this);
		}

		::System::UInt32 NJOINAEIHPH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEMKFNABGG_NJOINAEIHPH_OFFSET))(this);
		}

		::System::Void KJIFLNAPOLG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AMEMKFNABGG_KJIFLNAPOLG_OFFSET))(this, a1);
		}

		::System::UInt32 EDMMLNFINMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEMKFNABGG_EDMMLNFINMA_OFFSET))(this);
		}

		::System::Void CPDLPEOPFJG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AMEMKFNABGG_CPDLPEOPFJG_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt64>* KBLCEIFNBEF()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEMKFNABGG_KBLCEIFNBEF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AMEMKFNABGG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AMEMKFNABGG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AMEMKFNABGG*))((::PBYTE)hIl2Cpp + AMEMKFNABGG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEMKFNABGG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEMKFNABGG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AMEMKFNABGG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEMKFNABGG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AMEMKFNABGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMEMKFNABGG*))((::PBYTE)hIl2Cpp + AMEMKFNABGG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AMEMKFNABGG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
