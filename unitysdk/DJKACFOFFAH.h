#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDGGEHGLFAC;
class DJKACFOFFAH;
class DKIGCLFPGFO;
class ELBILFGFDHA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DJKACFOFFAH_APEEKHPPLHC_OFFSET UNITYSDK_OFFSET(0x1E1CCDB0)
#define DJKACFOFFAH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1CD290)
#define DJKACFOFFAH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1CD700)
#define DJKACFOFFAH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1CCD60)
#define DJKACFOFFAH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1CCC90)
#define DJKACFOFFAH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1CCBF0)
#define DJKACFOFFAH_EFFLEHHAPAJ_OFFSET UNITYSDK_OFFSET(0x1E1CCDC0)
#define DJKACFOFFAH_EJJAKECGOBA_OFFSET UNITYSDK_OFFSET(0x1E1CCDF0)
#define DJKACFOFFAH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1CCE60)
#define DJKACFOFFAH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1CCE00)
#define DJKACFOFFAH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1CCFE0)
#define DJKACFOFFAH_JGKKONOOGCB_OFFSET UNITYSDK_OFFSET(0x1E1CCDE0)
#define DJKACFOFFAH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1CCB80)
#define DJKACFOFFAH_KLIMPGKNIBJ_OFFSET UNITYSDK_OFFSET(0x1E1CCDD0)
#define DJKACFOFFAH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1CD580)
#define DJKACFOFFAH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1CD420)
#define DJKACFOFFAH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1CCBE0)
#define DJKACFOFFAH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1CD090)
#define DJKACFOFFAH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1CD0F0)

inline static constexpr unsigned int DJKACFOFFAH_TypeDefinitionIndex = 34822;

	class DJKACFOFFAH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::ELBILFGFDHA*>* MEJBIBBMLKP; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::DKIGCLFPGFO*>* EOJCFMPPDBI; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::BDGGEHGLFAC*>* CEIGEDNPCFO; // 0x28
		::System::UInt32 NMIEBJDMIBG; // 0x30
		static ::Google::Protobuf::MessageParser_1<::DJKACFOFFAH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DJKACFOFFAH*>**)UnitySDK::FromName("", "DJKACFOFFAH")->GetStaticField(0x38870);
		}

		static ::Google::Protobuf::FieldCodec_1<::DKIGCLFPGFO*>** StaticGet_BPIGFKIMDDI()
		{
			return (::Google::Protobuf::FieldCodec_1<::DKIGCLFPGFO*>**)UnitySDK::FromName("", "DJKACFOFFAH")->GetStaticField(0x38878);
		}

		static ::Google::Protobuf::FieldCodec_1<::BDGGEHGLFAC*>** StaticGet_OFDPDGMDPBK()
		{
			return (::Google::Protobuf::FieldCodec_1<::BDGGEHGLFAC*>**)UnitySDK::FromName("", "DJKACFOFFAH")->GetStaticField(0x38880);
		}

		static ::Google::Protobuf::FieldCodec_1<::ELBILFGFDHA*>** StaticGet_LMOPLDDMCBE()
		{
			return (::Google::Protobuf::FieldCodec_1<::ELBILFGFDHA*>**)UnitySDK::FromName("", "DJKACFOFFAH")->GetStaticField(0x38888);
		}

		// static const ::System::Object HGFBGGGCJNA; // 0x0
		// static const ::System::Object GAKHNOAJANF; // 0x0
		// static const ::System::Object GNBFMDJIDKI; // 0x0
		// static const ::System::Object CCCCMGEJKGG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKACFOFFAH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DJKACFOFFAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DJKACFOFFAH*))((::PBYTE)hIl2Cpp + DJKACFOFFAH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJKACFOFFAH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DJKACFOFFAH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DJKACFOFFAH*>*(*)())((::PBYTE)hIl2Cpp + DJKACFOFFAH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKACFOFFAH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DJKACFOFFAH* Clone()
		{
			return ((::DJKACFOFFAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKACFOFFAH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::ELBILFGFDHA*>* APEEKHPPLHC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::ELBILFGFDHA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKACFOFFAH_APEEKHPPLHC_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BDGGEHGLFAC*>* EFFLEHHAPAJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BDGGEHGLFAC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKACFOFFAH_EFFLEHHAPAJ_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::DKIGCLFPGFO*>* KLIMPGKNIBJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::DKIGCLFPGFO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKACFOFFAH_KLIMPGKNIBJ_OFFSET))(this);
		}

		::System::UInt32 JGKKONOOGCB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKACFOFFAH_JGKKONOOGCB_OFFSET))(this);
		}

		::System::Void EJJAKECGOBA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DJKACFOFFAH_EJJAKECGOBA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DJKACFOFFAH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DJKACFOFFAH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DJKACFOFFAH*))((::PBYTE)hIl2Cpp + DJKACFOFFAH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKACFOFFAH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKACFOFFAH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DJKACFOFFAH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKACFOFFAH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DJKACFOFFAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DJKACFOFFAH*))((::PBYTE)hIl2Cpp + DJKACFOFFAH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DJKACFOFFAH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
