#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIOMBHPBEDG;
class EKNABKLPEEL;
class LEBJPFBMOJM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LEBJPFBMOJM_BFDONIPHPEP_OFFSET UNITYSDK_OFFSET(0x1E8F6510)
#define LEBJPFBMOJM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8F6B10)
#define LEBJPFBMOJM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8F6FB0)
#define LEBJPFBMOJM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8F6460)
#define LEBJPFBMOJM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8F62D0)
#define LEBJPFBMOJM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8F6280)
#define LEBJPFBMOJM_ENFJEJJKNOH_OFFSET UNITYSDK_OFFSET(0x1E8F64F0)
#define LEBJPFBMOJM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8F6580)
#define LEBJPFBMOJM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8F6520)
#define LEBJPFBMOJM_FCDIOONEFII_OFFSET UNITYSDK_OFFSET(0x1E8F6500)
#define LEBJPFBMOJM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8F6800)
#define LEBJPFBMOJM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8D5D70)
#define LEBJPFBMOJM_MBBJBIIMHFD_OFFSET UNITYSDK_OFFSET(0x1E8F64E0)
#define LEBJPFBMOJM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8F6E60)
#define LEBJPFBMOJM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8F6CE0)
#define LEBJPFBMOJM_NMDHPAJPKOB_OFFSET UNITYSDK_OFFSET(0x1E8F64D0)
#define LEBJPFBMOJM_OGMDNAKBMAB_OFFSET UNITYSDK_OFFSET(0x1E8F64C0)
#define LEBJPFBMOJM_PBIFNOLFEOC_OFFSET UNITYSDK_OFFSET(0x1E8F64B0)
#define LEBJPFBMOJM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8F6270)
#define LEBJPFBMOJM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8F68E0)
#define LEBJPFBMOJM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8F6940)

inline static constexpr unsigned int LEBJPFBMOJM_TypeDefinitionIndex = 25260;

	class LEBJPFBMOJM : public ::System::Object
	{
	public:
		::EKNABKLPEEL* MJIJGFBHMME; // 0x10
		::EKNABKLPEEL* AHFMNFDLOPM; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::CIOMBHPBEDG*>* HLGOGOCKLNI; // 0x20
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x28
		::System::UInt64 LBOIMLHFKNC; // 0x30
		static ::Google::Protobuf::FieldCodec_1<::CIOMBHPBEDG*>** StaticGet_KGEBDCIACDJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::CIOMBHPBEDG*>**)UnitySDK::FromName("", "LEBJPFBMOJM")->GetStaticField(0x2FB90);
		}

		static ::Google::Protobuf::MessageParser_1<::LEBJPFBMOJM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LEBJPFBMOJM*>**)UnitySDK::FromName("", "LEBJPFBMOJM")->GetStaticField(0x2FB98);
		}

		// static const ::System::Object FMHEGHMLCOF; // 0x0
		// static const ::System::Object JBDHCEMPLGC; // 0x0
		// static const ::System::Object INMHNCIOECL; // 0x0
		// static const ::System::Object IGNKBKKKJBO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEBJPFBMOJM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LEBJPFBMOJM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LEBJPFBMOJM*))((::PBYTE)hIl2Cpp + LEBJPFBMOJM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEBJPFBMOJM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LEBJPFBMOJM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LEBJPFBMOJM*>*(*)())((::PBYTE)hIl2Cpp + LEBJPFBMOJM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEBJPFBMOJM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LEBJPFBMOJM* Clone()
		{
			return ((::LEBJPFBMOJM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEBJPFBMOJM_CLONE_OFFSET))(this);
		}

		::System::UInt64 PBIFNOLFEOC()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + LEBJPFBMOJM_PBIFNOLFEOC_OFFSET))(this);
		}

		::System::Void OGMDNAKBMAB(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + LEBJPFBMOJM_OGMDNAKBMAB_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CIOMBHPBEDG*>* NMDHPAJPKOB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CIOMBHPBEDG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEBJPFBMOJM_NMDHPAJPKOB_OFFSET))(this);
		}

		::EKNABKLPEEL* MBBJBIIMHFD()
		{
			return ((::EKNABKLPEEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEBJPFBMOJM_MBBJBIIMHFD_OFFSET))(this);
		}

		::System::Void ENFJEJJKNOH(::EKNABKLPEEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKNABKLPEEL*))((::PBYTE)hIl2Cpp + LEBJPFBMOJM_ENFJEJJKNOH_OFFSET))(this, a1);
		}

		::EKNABKLPEEL* FCDIOONEFII()
		{
			return ((::EKNABKLPEEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEBJPFBMOJM_FCDIOONEFII_OFFSET))(this);
		}

		::System::Void BFDONIPHPEP(::EKNABKLPEEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKNABKLPEEL*))((::PBYTE)hIl2Cpp + LEBJPFBMOJM_BFDONIPHPEP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LEBJPFBMOJM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LEBJPFBMOJM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LEBJPFBMOJM*))((::PBYTE)hIl2Cpp + LEBJPFBMOJM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEBJPFBMOJM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEBJPFBMOJM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LEBJPFBMOJM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEBJPFBMOJM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LEBJPFBMOJM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LEBJPFBMOJM*))((::PBYTE)hIl2Cpp + LEBJPFBMOJM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LEBJPFBMOJM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
