#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJCCCIGMHOM;
class GCECAGOELDP;
class HIJCLODMBPO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EJCCCIGMHOM_BBBPLMHLIJF_OFFSET UNITYSDK_OFFSET(0x1FF9A020)
#define EJCCCIGMHOM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FF9A710)
#define EJCCCIGMHOM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF9AD20)
#define EJCCCIGMHOM_CLONE_OFFSET UNITYSDK_OFFSET(0x1FF99F80)
#define EJCCCIGMHOM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FF99DD0)
#define EJCCCIGMHOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF99D40)
#define EJCCCIGMHOM_EDHGOHPFOFB_OFFSET UNITYSDK_OFFSET(0x1FF99FF0)
#define EJCCCIGMHOM_EHLMNBDELIG_OFFSET UNITYSDK_OFFSET(0x1FF99FD0)
#define EJCCCIGMHOM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FF9A090)
#define EJCCCIGMHOM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FF9A030)
#define EJCCCIGMHOM_GENDGAJJLJC_OFFSET UNITYSDK_OFFSET(0x1FF9A010)
#define EJCCCIGMHOM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FF9A300)
#define EJCCCIGMHOM_JBLIKALFOEI_OFFSET UNITYSDK_OFFSET(0x1FF99FE0)
#define EJCCCIGMHOM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FF99CD0)
#define EJCCCIGMHOM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FF9AA80)
#define EJCCCIGMHOM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FF9A840)
#define EJCCCIGMHOM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FF99D30)
#define EJCCCIGMHOM_PDMEGKFCOEE_OFFSET UNITYSDK_OFFSET(0x1FF9A000)
#define EJCCCIGMHOM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FF9A4F0)
#define EJCCCIGMHOM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FF9A550)

inline static constexpr unsigned int EJCCCIGMHOM_TypeDefinitionIndex = 28958;

	class EJCCCIGMHOM : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PPANILBLLAE; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MGFBJEFKEMF; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::GCECAGOELDP* FHPFINDFGNE; // 0x28
		::HIJCLODMBPO* NBDGOJNBINH; // 0x30
		static ::Google::Protobuf::MessageParser_1<::EJCCCIGMHOM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EJCCCIGMHOM*>**)UnitySDK::FromName("", "EJCCCIGMHOM")->GetStaticField(0x3F3C0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_GGKAKIEELHO()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "EJCCCIGMHOM")->GetStaticField(0x3F3C8);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_DGOMHGDMHGI()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "EJCCCIGMHOM")->GetStaticField(0x3F3D0);
		}

		// static const ::System::Object GMNPEINEAKL; // 0x0
		// static const ::System::Object IDIAOOLKKBC; // 0x0
		// static const ::System::Object BCKHGINKKIM; // 0x0
		// static const ::System::Object PCBKAFEHHCM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJCCCIGMHOM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EJCCCIGMHOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJCCCIGMHOM*))((::PBYTE)hIl2Cpp + EJCCCIGMHOM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJCCCIGMHOM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EJCCCIGMHOM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EJCCCIGMHOM*>*(*)())((::PBYTE)hIl2Cpp + EJCCCIGMHOM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJCCCIGMHOM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EJCCCIGMHOM* Clone()
		{
			return ((::EJCCCIGMHOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJCCCIGMHOM_CLONE_OFFSET))(this);
		}

		::GCECAGOELDP* EHLMNBDELIG()
		{
			return ((::GCECAGOELDP*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJCCCIGMHOM_EHLMNBDELIG_OFFSET))(this);
		}

		::System::Void JBLIKALFOEI(::GCECAGOELDP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCECAGOELDP*))((::PBYTE)hIl2Cpp + EJCCCIGMHOM_JBLIKALFOEI_OFFSET))(this, a1);
		}

		::HIJCLODMBPO* EDHGOHPFOFB()
		{
			return ((::HIJCLODMBPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJCCCIGMHOM_EDHGOHPFOFB_OFFSET))(this);
		}

		::System::Void PDMEGKFCOEE(::HIJCLODMBPO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIJCLODMBPO*))((::PBYTE)hIl2Cpp + EJCCCIGMHOM_PDMEGKFCOEE_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GENDGAJJLJC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJCCCIGMHOM_GENDGAJJLJC_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BBBPLMHLIJF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJCCCIGMHOM_BBBPLMHLIJF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EJCCCIGMHOM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EJCCCIGMHOM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EJCCCIGMHOM*))((::PBYTE)hIl2Cpp + EJCCCIGMHOM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJCCCIGMHOM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJCCCIGMHOM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EJCCCIGMHOM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJCCCIGMHOM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EJCCCIGMHOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJCCCIGMHOM*))((::PBYTE)hIl2Cpp + EJCCCIGMHOM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EJCCCIGMHOM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
