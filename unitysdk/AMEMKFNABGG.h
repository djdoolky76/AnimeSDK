#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMEMKFNABGG;
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

#define AMEMKFNABGG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4F2420)
#define AMEMKFNABGG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4F27B0)
#define AMEMKFNABGG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4F1F10)
#define AMEMKFNABGG_CPDLPEOPFJG_OFFSET UNITYSDK_OFFSET(0x1E4F1FA0)
#define AMEMKFNABGG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4F1E10)
#define AMEMKFNABGG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4F1D80)
#define AMEMKFNABGG_DNPNCPACHNE_OFFSET UNITYSDK_OFFSET(0x1E4F1F40)
#define AMEMKFNABGG_EDMMLNFINMA_OFFSET UNITYSDK_OFFSET(0x1E4F1F90)
#define AMEMKFNABGG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4F1FF0)
#define AMEMKFNABGG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4F1FC0)
#define AMEMKFNABGG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4F2090)
#define AMEMKFNABGG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4F1D40)
#define AMEMKFNABGG_KBLCEIFNBEF_OFFSET UNITYSDK_OFFSET(0x1E4F1FB0)
#define AMEMKFNABGG_KJIFLNAPOLG_OFFSET UNITYSDK_OFFSET(0x1E4F1F80)
#define AMEMKFNABGG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4F2650)
#define AMEMKFNABGG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4F25D0)
#define AMEMKFNABGG_NJOINAEIHPH_OFFSET UNITYSDK_OFFSET(0x1E4F1F70)
#define AMEMKFNABGG_NPELNJCECLP_OFFSET UNITYSDK_OFFSET(0x1E4F1F60)
#define AMEMKFNABGG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4F1D70)
#define AMEMKFNABGG_PKLKMKFOCHO_OFFSET UNITYSDK_OFFSET(0x1E4F1F50)
#define AMEMKFNABGG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4F21B0)
#define AMEMKFNABGG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4F2210)

inline static constexpr unsigned int AMEMKFNABGG_TypeDefinitionIndex = 25396;

	class AMEMKFNABGG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EADMJHKJMJH; // 0x10
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt64>* ENBNJBCIKIL; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::Boolean DOJJIJKDKFM; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 CMJAFMEHNGG; // 0x2C
		::System::UInt32 JPDDPPMKMNO; // 0x30
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_GEEOEHFHHEL()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "AMEMKFNABGG")->GetStaticField(0x44F70);
		}

		static ::Google::Protobuf::MessageParser_1<::AMEMKFNABGG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AMEMKFNABGG*>**)UnitySDK::FromName("", "AMEMKFNABGG")->GetStaticField(0x44F78);
		}

		static ::System::Object** StaticGet_EIAHNLMPFFL()
		{
			return (::System::Object**)UnitySDK::FromName("", "AMEMKFNABGG")->GetStaticField(0x44F80);
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

		static ::Google::Protobuf::MessageParser_1<::AMEMKFNABGG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AMEMKFNABGG*>*(*)())((::PBYTE)hIl2Cpp + AMEMKFNABGG_JJGHOBBFNJD_OFFSET))();
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
