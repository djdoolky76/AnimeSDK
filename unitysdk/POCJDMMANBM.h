#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDEIAANGMDB;
class MONJNCPINKN;
class POCJDMMANBM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define POCJDMMANBM_ACBOLCFFJEB_OFFSET UNITYSDK_OFFSET(0x1DFC4F00)
#define POCJDMMANBM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFC5590)
#define POCJDMMANBM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFC5AF0)
#define POCJDMMANBM_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFC4EB0)
#define POCJDMMANBM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFC4D20)
#define POCJDMMANBM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFC4C90)
#define POCJDMMANBM_DMCLJAJNHGF_OFFSET UNITYSDK_OFFSET(0x1DFC4F90)
#define POCJDMMANBM_EKHJOCPKACE_OFFSET UNITYSDK_OFFSET(0x1DFC4F20)
#define POCJDMMANBM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFC5000)
#define POCJDMMANBM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFC4FA0)
#define POCJDMMANBM_FMPHOHDJGLF_OFFSET UNITYSDK_OFFSET(0x1DFC4F50)
#define POCJDMMANBM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFC50F0)
#define POCJDMMANBM_GJJOEBCJJEG_OFFSET UNITYSDK_OFFSET(0x1DFC4F40)
#define POCJDMMANBM_IDEIBNEPFLI_OFFSET UNITYSDK_OFFSET(0x1DFC4F70)
#define POCJDMMANBM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFC4C20)
#define POCJDMMANBM_LJAELLCDJJJ_OFFSET UNITYSDK_OFFSET(0x1DFC4F80)
#define POCJDMMANBM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFC58F0)
#define POCJDMMANBM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFC5790)
#define POCJDMMANBM_MFDCLCGOFAB_OFFSET UNITYSDK_OFFSET(0x1DFC4F60)
#define POCJDMMANBM_MIJAGALAJIO_OFFSET UNITYSDK_OFFSET(0x1DFC4F10)
#define POCJDMMANBM_MOLJCJOHBEL_OFFSET UNITYSDK_OFFSET(0x1DFC4F30)
#define POCJDMMANBM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFC4C80)
#define POCJDMMANBM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFC52B0)
#define POCJDMMANBM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFC5310)

inline static constexpr unsigned int POCJDMMANBM_TypeDefinitionIndex = 29201;

	class POCJDMMANBM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::HDEIAANGMDB*>* FDFBNBLNHLK; // 0x18
		::MONJNCPINKN* FOGHKGEKPCL; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AONACJNHCHL; // 0x28
		::System::UInt32 IJIMMIJAKBM; // 0x30
		::System::Boolean PNEADCGGMMA; // 0x34
		::System::Byte _padding0[0x3];
		::System::UInt32 ADINADPDHDF; // 0x38
		static ::Google::Protobuf::FieldCodec** StaticGet_AIJEOADHBKD()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "POCJDMMANBM")->GetStaticField(0x528F0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "POCJDMMANBM")->GetStaticField(0x528F8);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_FEAFGBNBMEP()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "POCJDMMANBM")->GetStaticField(0x52900);
		}

		// static const ::System::Object LAPBMLJPPAM; // 0x0
		// static const ::System::Object MPKLMMAHLMP; // 0x0
		// static const ::System::Object DOADNLHHMCH; // 0x0
		// static const ::System::Object AGNKPMBOEPN; // 0x0
		// static const ::System::Object HOBJCPLGBOK; // 0x0
		// static const ::System::Object LHADKDGDKAD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POCJDMMANBM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::POCJDMMANBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POCJDMMANBM*))((::PBYTE)hIl2Cpp + POCJDMMANBM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POCJDMMANBM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + POCJDMMANBM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + POCJDMMANBM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::POCJDMMANBM* Clone()
		{
			return ((::POCJDMMANBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + POCJDMMANBM_CLONE_OFFSET))(this);
		}

		::System::UInt32 ACBOLCFFJEB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + POCJDMMANBM_ACBOLCFFJEB_OFFSET))(this);
		}

		::System::Void MIJAGALAJIO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + POCJDMMANBM_MIJAGALAJIO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EKHJOCPKACE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + POCJDMMANBM_EKHJOCPKACE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HDEIAANGMDB*>* MOLJCJOHBEL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HDEIAANGMDB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + POCJDMMANBM_MOLJCJOHBEL_OFFSET))(this);
		}

		::System::Boolean GJJOEBCJJEG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POCJDMMANBM_GJJOEBCJJEG_OFFSET))(this);
		}

		::System::Void FMPHOHDJGLF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + POCJDMMANBM_FMPHOHDJGLF_OFFSET))(this, a1);
		}

		::System::UInt32 MFDCLCGOFAB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + POCJDMMANBM_MFDCLCGOFAB_OFFSET))(this);
		}

		::System::Void IDEIBNEPFLI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + POCJDMMANBM_IDEIBNEPFLI_OFFSET))(this, a1);
		}

		::MONJNCPINKN* LJAELLCDJJJ()
		{
			return ((::MONJNCPINKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + POCJDMMANBM_LJAELLCDJJJ_OFFSET))(this);
		}

		::System::Void DMCLJAJNHGF(::MONJNCPINKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MONJNCPINKN*))((::PBYTE)hIl2Cpp + POCJDMMANBM_DMCLJAJNHGF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + POCJDMMANBM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::POCJDMMANBM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::POCJDMMANBM*))((::PBYTE)hIl2Cpp + POCJDMMANBM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POCJDMMANBM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + POCJDMMANBM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + POCJDMMANBM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POCJDMMANBM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::POCJDMMANBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POCJDMMANBM*))((::PBYTE)hIl2Cpp + POCJDMMANBM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + POCJDMMANBM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
