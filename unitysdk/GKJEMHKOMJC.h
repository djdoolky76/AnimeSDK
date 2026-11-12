#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNGLNMKNGJD.h"
#include "unitysdk/System/Object.h"
class GKJEMHKOMJC;
class JOGCCINEHFJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GKJEMHKOMJC_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1F7A8FC0)
#define GKJEMHKOMJC_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1F7A8FD0)
#define GKJEMHKOMJC_APBGOKEOHNF_OFFSET UNITYSDK_OFFSET(0x1F7A8F50)
#define GKJEMHKOMJC_BKPMKACPAKB_OFFSET UNITYSDK_OFFSET(0x1F7A8F80)
#define GKJEMHKOMJC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F7A94B0)
#define GKJEMHKOMJC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7A9A50)
#define GKJEMHKOMJC_CLONE_OFFSET UNITYSDK_OFFSET(0x1F7A8F00)
#define GKJEMHKOMJC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F7A8E20)
#define GKJEMHKOMJC_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7A8DD0)
#define GKJEMHKOMJC_DIIGPGHOIOL_OFFSET UNITYSDK_OFFSET(0x1F7A8FB0)
#define GKJEMHKOMJC_EJIBKKLIKCO_OFFSET UNITYSDK_OFFSET(0x1F7A8F60)
#define GKJEMHKOMJC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F7A9060)
#define GKJEMHKOMJC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F7A9000)
#define GKJEMHKOMJC_GAIKIHDIOBM_OFFSET UNITYSDK_OFFSET(0x1F7A8FA0)
#define GKJEMHKOMJC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F7A9100)
#define GKJEMHKOMJC_JBENBABCOGB_OFFSET UNITYSDK_OFFSET(0x1F7A8F90)
#define GKJEMHKOMJC_JHHECJIODKO_OFFSET UNITYSDK_OFFSET(0x1F7A8F70)
#define GKJEMHKOMJC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F7A8D60)
#define GKJEMHKOMJC_KAKICHLIJNJ_OFFSET UNITYSDK_OFFSET(0x1F7A8FE0)
#define GKJEMHKOMJC_LFFOMLOABMM_OFFSET UNITYSDK_OFFSET(0x1F7A8FF0)
#define GKJEMHKOMJC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F7A9910)
#define GKJEMHKOMJC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F7A9840)
#define GKJEMHKOMJC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F7A8DC0)
#define GKJEMHKOMJC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F7A9180)
#define GKJEMHKOMJC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F7A91E0)

inline static constexpr unsigned int GKJEMHKOMJC_TypeDefinitionIndex = 28855;

	class GKJEMHKOMJC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::JOGCCINEHFJ*>* DCEOODHFCGK; // 0x18
		::KNGLNMKNGJD AFHHMCKLLAJ; // 0x20
		::System::UInt32 LJDBCGPFFDH; // 0x24
		::System::UInt32 CLBJDBPOOEK; // 0x28
		::System::Int32 MLFLEEGBFJP; // 0x2C
		::System::Int32 EACCACKFFOC; // 0x30
		static ::Google::Protobuf::MessageParser_1<::GKJEMHKOMJC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GKJEMHKOMJC*>**)UnitySDK::FromName("", "GKJEMHKOMJC")->GetStaticField(0x153D0);
		}

		static ::Google::Protobuf::FieldCodec_1<::JOGCCINEHFJ*>** StaticGet_MKMNNOJJPPL()
		{
			return (::Google::Protobuf::FieldCodec_1<::JOGCCINEHFJ*>**)UnitySDK::FromName("", "GKJEMHKOMJC")->GetStaticField(0x153D8);
		}

		// static const ::System::Object KHPGPNGPCPG; // 0x0
		// static const ::System::Object CJIHHBEOLPP; // 0x0
		// static const ::System::Object LFMHICIGAPC; // 0x0
		// static const ::System::Object LKFOLLBOHON; // 0x0
		// static const ::System::Object KOEOEHIMOEI; // 0x0
		// static const ::System::Object JHPHPDPGLLF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJEMHKOMJC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GKJEMHKOMJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKJEMHKOMJC*))((::PBYTE)hIl2Cpp + GKJEMHKOMJC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKJEMHKOMJC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GKJEMHKOMJC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GKJEMHKOMJC*>*(*)())((::PBYTE)hIl2Cpp + GKJEMHKOMJC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJEMHKOMJC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GKJEMHKOMJC* Clone()
		{
			return ((::GKJEMHKOMJC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJEMHKOMJC_CLONE_OFFSET))(this);
		}

		::System::Int32 APBGOKEOHNF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJEMHKOMJC_APBGOKEOHNF_OFFSET))(this);
		}

		::System::Void EJIBKKLIKCO(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GKJEMHKOMJC_EJIBKKLIKCO_OFFSET))(this, a1);
		}

		::System::UInt32 JHHECJIODKO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJEMHKOMJC_JHHECJIODKO_OFFSET))(this);
		}

		::System::Void BKPMKACPAKB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GKJEMHKOMJC_BKPMKACPAKB_OFFSET))(this, a1);
		}

		::KNGLNMKNGJD JBENBABCOGB()
		{
			return ((::KNGLNMKNGJD(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJEMHKOMJC_JBENBABCOGB_OFFSET))(this);
		}

		::System::Void GAIKIHDIOBM(::KNGLNMKNGJD a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNGLNMKNGJD))((::PBYTE)hIl2Cpp + GKJEMHKOMJC_GAIKIHDIOBM_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JOGCCINEHFJ*>* DIIGPGHOIOL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JOGCCINEHFJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJEMHKOMJC_DIIGPGHOIOL_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJEMHKOMJC_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GKJEMHKOMJC_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Int32 KAKICHLIJNJ()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJEMHKOMJC_KAKICHLIJNJ_OFFSET))(this);
		}

		::System::Void LFFOMLOABMM(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GKJEMHKOMJC_LFFOMLOABMM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GKJEMHKOMJC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GKJEMHKOMJC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GKJEMHKOMJC*))((::PBYTE)hIl2Cpp + GKJEMHKOMJC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJEMHKOMJC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJEMHKOMJC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GKJEMHKOMJC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJEMHKOMJC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GKJEMHKOMJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKJEMHKOMJC*))((::PBYTE)hIl2Cpp + GKJEMHKOMJC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GKJEMHKOMJC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
