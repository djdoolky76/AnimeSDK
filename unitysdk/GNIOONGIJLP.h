#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNIOONGIJLP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GNIOONGIJLP_AFGMADEBLEE_OFFSET UNITYSDK_OFFSET(0x1FE02140)
#define GNIOONGIJLP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FE02670)
#define GNIOONGIJLP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE02950)
#define GNIOONGIJLP_CLONE_OFFSET UNITYSDK_OFFSET(0x1FE020D0)
#define GNIOONGIJLP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FE01FD0)
#define GNIOONGIJLP_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE01F40)
#define GNIOONGIJLP_DADDLFFPDGB_OFFSET UNITYSDK_OFFSET(0x1FE02150)
#define GNIOONGIJLP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FE02190)
#define GNIOONGIJLP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FE02160)
#define GNIOONGIJLP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FE022B0)
#define GNIOONGIJLP_IPLBECBNJLK_OFFSET UNITYSDK_OFFSET(0x1FE02100)
#define GNIOONGIJLP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FE01F00)
#define GNIOONGIJLP_LMLKAECMDNH_OFFSET UNITYSDK_OFFSET(0x1FE02110)
#define GNIOONGIJLP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FE02820)
#define GNIOONGIJLP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FE027B0)
#define GNIOONGIJLP_NKODOHBJNEG_OFFSET UNITYSDK_OFFSET(0x1FE02130)
#define GNIOONGIJLP_NPPNJEMFHOJ_OFFSET UNITYSDK_OFFSET(0x1FE02120)
#define GNIOONGIJLP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FE01F30)
#define GNIOONGIJLP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FE02480)
#define GNIOONGIJLP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FE024E0)

inline static constexpr unsigned int GNIOONGIJLP_TypeDefinitionIndex = 31318;

	class GNIOONGIJLP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ENOIJJKHJPL; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OFMGOBEMFEP; // 0x20
		::System::UInt32 BHFEEGICLMK; // 0x28
		::System::Boolean EMCMEEEOPOC; // 0x2C
		static ::Google::Protobuf::MessageParser_1<::GNIOONGIJLP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GNIOONGIJLP*>**)UnitySDK::FromName("", "GNIOONGIJLP")->GetStaticField(0x1A280);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FALKBHPCHID()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GNIOONGIJLP")->GetStaticField(0x1A288);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_EGNBKOELKLD()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GNIOONGIJLP")->GetStaticField(0x1A290);
		}

		// static const ::System::Object OEMNIDFIJEO; // 0x0
		// static const ::System::Object AOCEJHGLMDJ; // 0x0
		// static const ::System::Object KEPGBDBGCAL; // 0x0
		// static const ::System::Object OIHGFPHOBAK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIOONGIJLP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GNIOONGIJLP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNIOONGIJLP*))((::PBYTE)hIl2Cpp + GNIOONGIJLP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNIOONGIJLP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GNIOONGIJLP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GNIOONGIJLP*>*(*)())((::PBYTE)hIl2Cpp + GNIOONGIJLP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIOONGIJLP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GNIOONGIJLP* Clone()
		{
			return ((::GNIOONGIJLP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIOONGIJLP_CLONE_OFFSET))(this);
		}

		::System::UInt32 IPLBECBNJLK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIOONGIJLP_IPLBECBNJLK_OFFSET))(this);
		}

		::System::Void LMLKAECMDNH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GNIOONGIJLP_LMLKAECMDNH_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NPPNJEMFHOJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIOONGIJLP_NPPNJEMFHOJ_OFFSET))(this);
		}

		::System::Boolean NKODOHBJNEG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIOONGIJLP_NKODOHBJNEG_OFFSET))(this);
		}

		::System::Void AFGMADEBLEE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GNIOONGIJLP_AFGMADEBLEE_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DADDLFFPDGB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIOONGIJLP_DADDLFFPDGB_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GNIOONGIJLP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GNIOONGIJLP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GNIOONGIJLP*))((::PBYTE)hIl2Cpp + GNIOONGIJLP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIOONGIJLP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIOONGIJLP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GNIOONGIJLP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIOONGIJLP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GNIOONGIJLP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNIOONGIJLP*))((::PBYTE)hIl2Cpp + GNIOONGIJLP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GNIOONGIJLP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
