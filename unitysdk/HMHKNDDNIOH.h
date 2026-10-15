#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HMHKNDDNIOH;
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

#define HMHKNDDNIOH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5CF7E0)
#define HMHKNDDNIOH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5CFC10)
#define HMHKNDDNIOH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5CF230)
#define HMHKNDDNIOH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5CF120)
#define HMHKNDDNIOH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5CF0A0)
#define HMHKNDDNIOH_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1E5CF2C0)
#define HMHKNDDNIOH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5CF310)
#define HMHKNDDNIOH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5CF2E0)
#define HMHKNDDNIOH_FHFDLADDICC_OFFSET UNITYSDK_OFFSET(0x1E5CF2B0)
#define HMHKNDDNIOH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5CF3F0)
#define HMHKNDDNIOH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5CF060)
#define HMHKNDDNIOH_JKAFEPNDBEK_OFFSET UNITYSDK_OFFSET(0x1E5CF260)
#define HMHKNDDNIOH_KKGOFMBMMAC_OFFSET UNITYSDK_OFFSET(0x1E5CF280)
#define HMHKNDDNIOH_LJDFIJCBHIP_OFFSET UNITYSDK_OFFSET(0x1E5CF2A0)
#define HMHKNDDNIOH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5CFAB0)
#define HMHKNDDNIOH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5CFA00)
#define HMHKNDDNIOH_MNAAAAEKGGP_OFFSET UNITYSDK_OFFSET(0x1E5CF290)
#define HMHKNDDNIOH_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1E5CF2D0)
#define HMHKNDDNIOH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5CF090)
#define HMHKNDDNIOH_PMCDGEAEHLC_OFFSET UNITYSDK_OFFSET(0x1E5CF270)
#define HMHKNDDNIOH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5CF550)
#define HMHKNDDNIOH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5CF5B0)

inline static constexpr unsigned int HMHKNDDNIOH_TypeDefinitionIndex = 34076;

	class HMHKNDDNIOH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LLMPIGIKIOD; // 0x18
		::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>* DFFEGIMOJGB; // 0x20
		::System::Int64 GFKNDJJHLIB; // 0x28
		::System::UInt32 FLBKCMIIFFP; // 0x30
		::System::Boolean PHKEIKGJKOJ; // 0x34
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HMHKNDDNIOH")->GetStaticField(0x34C50);
		}

		static ::System::Object** StaticGet_LHGPCNNBOCL()
		{
			return (::System::Object**)UnitySDK::FromName("", "HMHKNDDNIOH")->GetStaticField(0x34C58);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_CEHKMCNBIBK()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "HMHKNDDNIOH")->GetStaticField(0x34C60);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HMHKNDDNIOH_JJGHOBBFNJD_OFFSET))();
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
