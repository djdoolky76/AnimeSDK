#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HMMHDEKAHEA_KFANIKMNBPF.h"
#include "unitysdk/System/Object.h"
class HMMHDEKAHEA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HMMHDEKAHEA_APMAIJGCNNL_OFFSET UNITYSDK_OFFSET(0x1E5D2520)
#define HMMHDEKAHEA_BMGJPOAHJMJ_OFFSET UNITYSDK_OFFSET(0x1E5D24B0)
#define HMMHDEKAHEA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5D29C0)
#define HMMHDEKAHEA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5D2C30)
#define HMMHDEKAHEA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5D24E0)
#define HMMHDEKAHEA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5D2360)
#define HMMHDEKAHEA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5D2350)
#define HMMHDEKAHEA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5D2560)
#define HMMHDEKAHEA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5D2530)
#define HMMHDEKAHEA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5D2780)
#define HMMHDEKAHEA_GOJKLGMHHKL_OFFSET UNITYSDK_OFFSET(0x1E5D2510)
#define HMMHDEKAHEA_HCIPALIAPFC_OFFSET UNITYSDK_OFFSET(0x1E5D2420)
#define HMMHDEKAHEA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5D2310)
#define HMMHDEKAHEA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5D2AB0)
#define HMMHDEKAHEA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5D29F0)
#define HMMHDEKAHEA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5D2340)
#define HMMHDEKAHEA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5D2820)
#define HMMHDEKAHEA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5D2880)

inline static constexpr unsigned int HMMHDEKAHEA_TypeDefinitionIndex = 27684;

	class HMMHDEKAHEA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Object* NMABHKCOLCM; // 0x18
		::HMMHDEKAHEA_KFANIKMNBPF KMIDFEPFPFP; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HMMHDEKAHEA")->GetStaticField(0x4A9F0);
		}

		// static const ::System::Object ONCAIIOOKFN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMMHDEKAHEA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HMMHDEKAHEA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMMHDEKAHEA*))((::PBYTE)hIl2Cpp + HMMHDEKAHEA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMMHDEKAHEA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HMMHDEKAHEA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMMHDEKAHEA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HMMHDEKAHEA* Clone()
		{
			return ((::HMMHDEKAHEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMMHDEKAHEA_CLONE_OFFSET))(this);
		}

		::System::Boolean HCIPALIAPFC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HMMHDEKAHEA_HCIPALIAPFC_OFFSET))(this);
		}

		::System::Void BMGJPOAHJMJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HMMHDEKAHEA_BMGJPOAHJMJ_OFFSET))(this, a1);
		}

		::HMMHDEKAHEA_KFANIKMNBPF GOJKLGMHHKL()
		{
			return ((::HMMHDEKAHEA_KFANIKMNBPF(*)(::PVOID))((::PBYTE)hIl2Cpp + HMMHDEKAHEA_GOJKLGMHHKL_OFFSET))(this);
		}

		::System::Void APMAIJGCNNL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMMHDEKAHEA_APMAIJGCNNL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HMMHDEKAHEA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HMMHDEKAHEA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HMMHDEKAHEA*))((::PBYTE)hIl2Cpp + HMMHDEKAHEA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMMHDEKAHEA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMMHDEKAHEA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HMMHDEKAHEA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMMHDEKAHEA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HMMHDEKAHEA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMMHDEKAHEA*))((::PBYTE)hIl2Cpp + HMMHDEKAHEA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HMMHDEKAHEA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
