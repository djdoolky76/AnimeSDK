#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOAOBPGFHLA;
class JAONELJJAFK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AOAOBPGFHLA_AFFILCNDHBE_OFFSET UNITYSDK_OFFSET(0x1E667300)
#define AOAOBPGFHLA_AMGPCCBIJHG_OFFSET UNITYSDK_OFFSET(0x1E6672C0)
#define AOAOBPGFHLA_BGLNKBIJNCF_OFFSET UNITYSDK_OFFSET(0x1E6672B0)
#define AOAOBPGFHLA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E667810)
#define AOAOBPGFHLA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E667C10)
#define AOAOBPGFHLA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E667260)
#define AOAOBPGFHLA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E667120)
#define AOAOBPGFHLA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6670D0)
#define AOAOBPGFHLA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E667380)
#define AOAOBPGFHLA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E667320)
#define AOAOBPGFHLA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E667570)
#define AOAOBPGFHLA_GMHHHNEBJEP_OFFSET UNITYSDK_OFFSET(0x1E6672E0)
#define AOAOBPGFHLA_HCFLOGBLOMO_OFFSET UNITYSDK_OFFSET(0x1E6672F0)
#define AOAOBPGFHLA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E667060)
#define AOAOBPGFHLA_KDDOOLNAFNH_OFFSET UNITYSDK_OFFSET(0x1E667310)
#define AOAOBPGFHLA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E667AF0)
#define AOAOBPGFHLA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6679C0)
#define AOAOBPGFHLA_MOKGANHMKII_OFFSET UNITYSDK_OFFSET(0x1E6672D0)
#define AOAOBPGFHLA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6670C0)
#define AOAOBPGFHLA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6675F0)
#define AOAOBPGFHLA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E667650)

inline static constexpr unsigned int AOAOBPGFHLA_TypeDefinitionIndex = 25245;

	class AOAOBPGFHLA : public ::System::Object
	{
	public:
		::JAONELJJAFK* CLJBDKEMKMA; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::JAONELJJAFK*>* MANEMOFCLAP; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 FMHHDMCPCJE; // 0x28
		::System::UInt32 KEALMALFHLF; // 0x2C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AOAOBPGFHLA")->GetStaticField(0x401E0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_JNHIPDOCMMO()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "AOAOBPGFHLA")->GetStaticField(0x401E8);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AOAOBPGFHLA_JJGHOBBFNJD_OFFSET))();
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
