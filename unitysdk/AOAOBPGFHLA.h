#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOAOBPGFHLA;
class JAONELJJAFK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AOAOBPGFHLA_AFFILCNDHBE_OFFSET UNITYSDK_OFFSET(0x1E639C90)
#define AOAOBPGFHLA_AMGPCCBIJHG_OFFSET UNITYSDK_OFFSET(0x1E639C50)
#define AOAOBPGFHLA_BGLNKBIJNCF_OFFSET UNITYSDK_OFFSET(0x1E639C40)
#define AOAOBPGFHLA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E63A1A0)
#define AOAOBPGFHLA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E63A5A0)
#define AOAOBPGFHLA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E639BF0)
#define AOAOBPGFHLA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E639AB0)
#define AOAOBPGFHLA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E639A60)
#define AOAOBPGFHLA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E639D10)
#define AOAOBPGFHLA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E639CB0)
#define AOAOBPGFHLA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E639F00)
#define AOAOBPGFHLA_GMHHHNEBJEP_OFFSET UNITYSDK_OFFSET(0x1E639C70)
#define AOAOBPGFHLA_HCFLOGBLOMO_OFFSET UNITYSDK_OFFSET(0x1E639C80)
#define AOAOBPGFHLA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6399F0)
#define AOAOBPGFHLA_KDDOOLNAFNH_OFFSET UNITYSDK_OFFSET(0x1E639CA0)
#define AOAOBPGFHLA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E63A480)
#define AOAOBPGFHLA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E63A350)
#define AOAOBPGFHLA_MOKGANHMKII_OFFSET UNITYSDK_OFFSET(0x1E639C60)
#define AOAOBPGFHLA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E639A50)
#define AOAOBPGFHLA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E639F80)
#define AOAOBPGFHLA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E639FE0)

inline static constexpr unsigned int AOAOBPGFHLA_TypeDefinitionIndex = 25245;

	class AOAOBPGFHLA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::JAONELJJAFK*>* MANEMOFCLAP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::JAONELJJAFK* CLJBDKEMKMA; // 0x20
		::System::UInt32 KEALMALFHLF; // 0x28
		::System::UInt32 FMHHDMCPCJE; // 0x2C
		static ::Google::Protobuf::FieldCodec_1<::JAONELJJAFK*>** StaticGet_JNHIPDOCMMO()
		{
			return (::Google::Protobuf::FieldCodec_1<::JAONELJJAFK*>**)UnitySDK::FromName("", "AOAOBPGFHLA")->GetStaticField(0x384C0);
		}

		static ::Google::Protobuf::MessageParser_1<::AOAOBPGFHLA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AOAOBPGFHLA*>**)UnitySDK::FromName("", "AOAOBPGFHLA")->GetStaticField(0x384C8);
		}

		// static const ::System::Object KCBJIPMJBNC; // 0x0
		// static const ::System::Object LOOCLPMDPDO; // 0x0
		// static const ::System::Object BNOLNLGLPDF; // 0x0
		// static const ::System::Object KKFDBFJLGNK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOAOBPGFHLA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AOAOBPGFHLA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOAOBPGFHLA*))((::PBYTE)hIl2Cpp + AOAOBPGFHLA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOAOBPGFHLA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AOAOBPGFHLA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AOAOBPGFHLA*>*(*)())((::PBYTE)hIl2Cpp + AOAOBPGFHLA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOAOBPGFHLA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AOAOBPGFHLA* Clone()
		{
			return ((::AOAOBPGFHLA*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOAOBPGFHLA_CLONE_OFFSET))(this);
		}

		::System::UInt32 BGLNKBIJNCF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOAOBPGFHLA_BGLNKBIJNCF_OFFSET))(this);
		}

		::System::Void AMGPCCBIJHG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AOAOBPGFHLA_AMGPCCBIJHG_OFFSET))(this, a1);
		}

		::System::UInt32 MOKGANHMKII()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOAOBPGFHLA_MOKGANHMKII_OFFSET))(this);
		}

		::System::Void GMHHHNEBJEP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AOAOBPGFHLA_GMHHHNEBJEP_OFFSET))(this, a1);
		}

		::JAONELJJAFK* HCFLOGBLOMO()
		{
			return ((::JAONELJJAFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOAOBPGFHLA_HCFLOGBLOMO_OFFSET))(this);
		}

		::System::Void AFFILCNDHBE(::JAONELJJAFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAONELJJAFK*))((::PBYTE)hIl2Cpp + AOAOBPGFHLA_AFFILCNDHBE_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JAONELJJAFK*>* KDDOOLNAFNH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JAONELJJAFK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOAOBPGFHLA_KDDOOLNAFNH_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AOAOBPGFHLA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AOAOBPGFHLA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AOAOBPGFHLA*))((::PBYTE)hIl2Cpp + AOAOBPGFHLA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOAOBPGFHLA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOAOBPGFHLA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AOAOBPGFHLA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOAOBPGFHLA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AOAOBPGFHLA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOAOBPGFHLA*))((::PBYTE)hIl2Cpp + AOAOBPGFHLA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AOAOBPGFHLA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
