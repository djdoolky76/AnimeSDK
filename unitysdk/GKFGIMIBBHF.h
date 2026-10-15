#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKFGIMIBBHF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GKFGIMIBBHF_ANCBMMFJGKN_OFFSET UNITYSDK_OFFSET(0x1E4B1010)
#define GKFGIMIBBHF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4B1440)
#define GKFGIMIBBHF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4B1760)
#define GKFGIMIBBHF_CHAGGCMNOBF_OFFSET UNITYSDK_OFFSET(0x1E4B1020)
#define GKFGIMIBBHF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4B0FC0)
#define GKFGIMIBBHF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4B0F80)
#define GKFGIMIBBHF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4B0F70)
#define GKFGIMIBBHF_DIMJCMKNKCF_OFFSET UNITYSDK_OFFSET(0x1E4B1040)
#define GKFGIMIBBHF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4B1160)
#define GKFGIMIBBHF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4B1070)
#define GKFGIMIBBHF_FJNIJBIIFGO_OFFSET UNITYSDK_OFFSET(0x1E4B1050)
#define GKFGIMIBBHF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4B1240)
#define GKFGIMIBBHF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4B0F30)
#define GKFGIMIBBHF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4B15B0)
#define GKFGIMIBBHF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4B1560)
#define GKFGIMIBBHF_NGCIBAOKDNB_OFFSET UNITYSDK_OFFSET(0x1E4B1060)
#define GKFGIMIBBHF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4B0F60)
#define GKFGIMIBBHF_PJCHNNBNKJH_OFFSET UNITYSDK_OFFSET(0x1E4B1030)
#define GKFGIMIBBHF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4B1270)
#define GKFGIMIBBHF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4B12D0)

inline static constexpr unsigned int GKFGIMIBBHF_TypeDefinitionIndex = 33228;

	class GKFGIMIBBHF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean IHDNEIDBEND; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 MDGPBFBDKBB; // 0x1C
		::System::UInt32 NDFIDCNNGMJ; // 0x20
		static ::Google::Protobuf::MessageParser_1<::GKFGIMIBBHF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GKFGIMIBBHF*>**)UnitySDK::FromName("", "GKFGIMIBBHF")->GetStaticField(0x1CF90);
		}

		// static const ::System::Object FAFPOPLNCDL; // 0x0
		// static const ::System::Object OEGGGHCBMPO; // 0x0
		// static const ::System::Object KLJANMLJHEF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFGIMIBBHF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GKFGIMIBBHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKFGIMIBBHF*))((::PBYTE)hIl2Cpp + GKFGIMIBBHF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKFGIMIBBHF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GKFGIMIBBHF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GKFGIMIBBHF*>*(*)())((::PBYTE)hIl2Cpp + GKFGIMIBBHF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFGIMIBBHF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GKFGIMIBBHF* Clone()
		{
			return ((::GKFGIMIBBHF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFGIMIBBHF_CLONE_OFFSET))(this);
		}

		::System::Boolean ANCBMMFJGKN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFGIMIBBHF_ANCBMMFJGKN_OFFSET))(this);
		}

		::System::Void CHAGGCMNOBF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GKFGIMIBBHF_CHAGGCMNOBF_OFFSET))(this, a1);
		}

		::System::UInt32 PJCHNNBNKJH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFGIMIBBHF_PJCHNNBNKJH_OFFSET))(this);
		}

		::System::Void DIMJCMKNKCF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GKFGIMIBBHF_DIMJCMKNKCF_OFFSET))(this, a1);
		}

		::System::UInt32 FJNIJBIIFGO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFGIMIBBHF_FJNIJBIIFGO_OFFSET))(this);
		}

		::System::Void NGCIBAOKDNB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GKFGIMIBBHF_NGCIBAOKDNB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GKFGIMIBBHF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GKFGIMIBBHF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GKFGIMIBBHF*))((::PBYTE)hIl2Cpp + GKFGIMIBBHF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFGIMIBBHF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFGIMIBBHF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GKFGIMIBBHF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFGIMIBBHF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GKFGIMIBBHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKFGIMIBBHF*))((::PBYTE)hIl2Cpp + GKFGIMIBBHF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GKFGIMIBBHF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
