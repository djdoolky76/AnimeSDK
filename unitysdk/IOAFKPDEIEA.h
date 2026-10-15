#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOAFKPDEIEA;
class NAJFNKIEEDM;
class NMACHAFCGNI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IOAFKPDEIEA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E69B710)
#define IOAFKPDEIEA_CBOFFPEFEPP_OFFSET UNITYSDK_OFFSET(0x1E69AF40)
#define IOAFKPDEIEA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E69BC80)
#define IOAFKPDEIEA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E69AEC0)
#define IOAFKPDEIEA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E69ACE0)
#define IOAFKPDEIEA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E69AC50)
#define IOAFKPDEIEA_DLBMEBEGNGL_OFFSET UNITYSDK_OFFSET(0x1E69AF50)
#define IOAFKPDEIEA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E69AFC0)
#define IOAFKPDEIEA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E69AF90)
#define IOAFKPDEIEA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E69AF10)
#define IOAFKPDEIEA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E69B1B0)
#define IOAFKPDEIEA_GHEIAEAOKAC_OFFSET UNITYSDK_OFFSET(0x1E69AF70)
#define IOAFKPDEIEA_GHGBFCGPIIA_OFFSET UNITYSDK_OFFSET(0x1E69AF30)
#define IOAFKPDEIEA_IGJOIMKFBNG_OFFSET UNITYSDK_OFFSET(0x1E69AF60)
#define IOAFKPDEIEA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E69AC10)
#define IOAFKPDEIEA_JJKBAPICIHK_OFFSET UNITYSDK_OFFSET(0x1E69AF20)
#define IOAFKPDEIEA_JMDGFKBCCNP_OFFSET UNITYSDK_OFFSET(0x1E69AEF0)
#define IOAFKPDEIEA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E69BA80)
#define IOAFKPDEIEA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E69B920)
#define IOAFKPDEIEA_MGBKEKMGPIE_OFFSET UNITYSDK_OFFSET(0x1E69AF80)
#define IOAFKPDEIEA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E69AF00)
#define IOAFKPDEIEA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E69AC40)
#define IOAFKPDEIEA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E69B480)
#define IOAFKPDEIEA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E69B4E0)

inline static constexpr unsigned int IOAFKPDEIEA_TypeDefinitionIndex = 31607;

	class IOAFKPDEIEA : public ::System::Object
	{
	public:
		::NMACHAFCGNI* KHKEIGJIKOC; // 0x10
		::NAJFNKIEEDM* GMLPGJJJKDP; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LBGMBOCMBCD; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JLLHJLAOHML; // 0x28
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x30
		::System::UInt32 NBFPOGFBMFE; // 0x38
		::System::UInt32 NAEACGPKNNH; // 0x3C
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KDLPBIPGNPC()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "IOAFKPDEIEA")->GetStaticField(0x54130);
		}

		static ::Google::Protobuf::MessageParser_1<::IOAFKPDEIEA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IOAFKPDEIEA*>**)UnitySDK::FromName("", "IOAFKPDEIEA")->GetStaticField(0x54138);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_BDKNFKNONNC()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "IOAFKPDEIEA")->GetStaticField(0x54140);
		}

		// static const ::System::Object ELEIHDOJMGL; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object JHICNDABKMP; // 0x0
		// static const ::System::Object GKBPDIPOFGE; // 0x0
		// static const ::System::Object KIAJFAMLJEG; // 0x0
		// static const ::System::Object GGLJIDJOPHG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOAFKPDEIEA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IOAFKPDEIEA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOAFKPDEIEA*))((::PBYTE)hIl2Cpp + IOAFKPDEIEA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IOAFKPDEIEA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IOAFKPDEIEA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IOAFKPDEIEA*>*(*)())((::PBYTE)hIl2Cpp + IOAFKPDEIEA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOAFKPDEIEA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IOAFKPDEIEA* Clone()
		{
			return ((::IOAFKPDEIEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOAFKPDEIEA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JMDGFKBCCNP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOAFKPDEIEA_JMDGFKBCCNP_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOAFKPDEIEA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IOAFKPDEIEA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::NMACHAFCGNI* JJKBAPICIHK()
		{
			return ((::NMACHAFCGNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOAFKPDEIEA_JJKBAPICIHK_OFFSET))(this);
		}

		::System::Void GHGBFCGPIIA(::NMACHAFCGNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMACHAFCGNI*))((::PBYTE)hIl2Cpp + IOAFKPDEIEA_GHGBFCGPIIA_OFFSET))(this, a1);
		}

		::System::UInt32 CBOFFPEFEPP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOAFKPDEIEA_CBOFFPEFEPP_OFFSET))(this);
		}

		::System::Void DLBMEBEGNGL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IOAFKPDEIEA_DLBMEBEGNGL_OFFSET))(this, a1);
		}

		::NAJFNKIEEDM* IGJOIMKFBNG()
		{
			return ((::NAJFNKIEEDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOAFKPDEIEA_IGJOIMKFBNG_OFFSET))(this);
		}

		::System::Void GHEIAEAOKAC(::NAJFNKIEEDM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAJFNKIEEDM*))((::PBYTE)hIl2Cpp + IOAFKPDEIEA_GHEIAEAOKAC_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MGBKEKMGPIE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOAFKPDEIEA_MGBKEKMGPIE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IOAFKPDEIEA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IOAFKPDEIEA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IOAFKPDEIEA*))((::PBYTE)hIl2Cpp + IOAFKPDEIEA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOAFKPDEIEA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOAFKPDEIEA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IOAFKPDEIEA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOAFKPDEIEA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IOAFKPDEIEA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOAFKPDEIEA*))((::PBYTE)hIl2Cpp + IOAFKPDEIEA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IOAFKPDEIEA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
