#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HMHKNDDNIOH;
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

#define HMHKNDDNIOH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5A2210)
#define HMHKNDDNIOH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5A2640)
#define HMHKNDDNIOH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5A1C60)
#define HMHKNDDNIOH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5A1B50)
#define HMHKNDDNIOH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5A1AD0)
#define HMHKNDDNIOH_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1E5A1CF0)
#define HMHKNDDNIOH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5A1D40)
#define HMHKNDDNIOH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5A1D10)
#define HMHKNDDNIOH_FHFDLADDICC_OFFSET UNITYSDK_OFFSET(0x1E5A1CE0)
#define HMHKNDDNIOH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5A1E20)
#define HMHKNDDNIOH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5A1A90)
#define HMHKNDDNIOH_JKAFEPNDBEK_OFFSET UNITYSDK_OFFSET(0x1E5A1C90)
#define HMHKNDDNIOH_KKGOFMBMMAC_OFFSET UNITYSDK_OFFSET(0x1E5A1CB0)
#define HMHKNDDNIOH_LJDFIJCBHIP_OFFSET UNITYSDK_OFFSET(0x1E5A1CD0)
#define HMHKNDDNIOH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5A24E0)
#define HMHKNDDNIOH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5A2430)
#define HMHKNDDNIOH_MNAAAAEKGGP_OFFSET UNITYSDK_OFFSET(0x1E5A1CC0)
#define HMHKNDDNIOH_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1E5A1D00)
#define HMHKNDDNIOH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5A1AC0)
#define HMHKNDDNIOH_PMCDGEAEHLC_OFFSET UNITYSDK_OFFSET(0x1E5A1CA0)
#define HMHKNDDNIOH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5A1F80)
#define HMHKNDDNIOH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5A1FE0)

inline static constexpr unsigned int HMHKNDDNIOH_TypeDefinitionIndex = 34076;

	class HMHKNDDNIOH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LLMPIGIKIOD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>* DFFEGIMOJGB; // 0x20
		::System::Boolean PHKEIKGJKOJ; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 FLBKCMIIFFP; // 0x2C
		::System::Int64 GFKNDJJHLIB; // 0x30
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_CEHKMCNBIBK()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "HMHKNDDNIOH")->GetStaticField(0x2F030);
		}

		static ::Google::Protobuf::MessageParser_1<::HMHKNDDNIOH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HMHKNDDNIOH*>**)UnitySDK::FromName("", "HMHKNDDNIOH")->GetStaticField(0x2F038);
		}

		static ::System::Object** StaticGet_LHGPCNNBOCL()
		{
			return (::System::Object**)UnitySDK::FromName("", "HMHKNDDNIOH")->GetStaticField(0x2F040);
		}

		// static const ::System::Object EDMAHPIGIME; // 0x0
		// static const ::System::Object JEALEDAFMPN; // 0x0
		// static const ::System::Object AGPFCCANNFF; // 0x0
		// static const ::System::Object HPFJDAGCAAM; // 0x0
		// static const ::System::Object IEAPGPOMBIN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMHKNDDNIOH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HMHKNDDNIOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMHKNDDNIOH*))((::PBYTE)hIl2Cpp + HMHKNDDNIOH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMHKNDDNIOH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HMHKNDDNIOH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HMHKNDDNIOH*>*(*)())((::PBYTE)hIl2Cpp + HMHKNDDNIOH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMHKNDDNIOH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HMHKNDDNIOH* Clone()
		{
			return ((::HMHKNDDNIOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMHKNDDNIOH_CLONE_OFFSET))(this);
		}

		::System::Int64 JKAFEPNDBEK()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + HMHKNDDNIOH_JKAFEPNDBEK_OFFSET))(this);
		}

		::System::Void PMCDGEAEHLC(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + HMHKNDDNIOH_PMCDGEAEHLC_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>* KKGOFMBMMAC()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMHKNDDNIOH_KKGOFMBMMAC_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MNAAAAEKGGP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMHKNDDNIOH_MNAAAAEKGGP_OFFSET))(this);
		}

		::System::Boolean LJDFIJCBHIP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HMHKNDDNIOH_LJDFIJCBHIP_OFFSET))(this);
		}

		::System::Void FHFDLADDICC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HMHKNDDNIOH_FHFDLADDICC_OFFSET))(this, a1);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMHKNDDNIOH_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HMHKNDDNIOH_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HMHKNDDNIOH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HMHKNDDNIOH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HMHKNDDNIOH*))((::PBYTE)hIl2Cpp + HMHKNDDNIOH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMHKNDDNIOH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMHKNDDNIOH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HMHKNDDNIOH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMHKNDDNIOH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HMHKNDDNIOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMHKNDDNIOH*))((::PBYTE)hIl2Cpp + HMHKNDDNIOH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HMHKNDDNIOH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
