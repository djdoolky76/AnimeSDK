#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCMCLHJINBD;
class MHMEJAECMMA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MHMEJAECMMA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA35DB0)
#define MHMEJAECMMA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA36120)
#define MHMEJAECMMA_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA358F0)
#define MHMEJAECMMA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA35860)
#define MHMEJAECMMA_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA35820)
#define MHMEJAECMMA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA35AA0)
#define MHMEJAECMMA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA35950)
#define MHMEJAECMMA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA35930)
#define MHMEJAECMMA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA35BD0)
#define MHMEJAECMMA_HGDHMODFKMH_OFFSET UNITYSDK_OFFSET(0x1EA35940)
#define MHMEJAECMMA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA357E0)
#define MHMEJAECMMA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA35F60)
#define MHMEJAECMMA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA35EC0)
#define MHMEJAECMMA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA35920)
#define MHMEJAECMMA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA35810)
#define MHMEJAECMMA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA35C40)
#define MHMEJAECMMA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA35CA0)

inline static constexpr unsigned int MHMEJAECMMA_TypeDefinitionIndex = 35004;

	class MHMEJAECMMA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::DCMCLHJINBD*>* KECDCFCCGIJ; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MHMEJAECMMA")->GetStaticField(0x52190);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_DJBMKPOEIIA()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "MHMEJAECMMA")->GetStaticField(0x52198);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object DAFEBIPACCA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMEJAECMMA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MHMEJAECMMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MHMEJAECMMA*))((::PBYTE)hIl2Cpp + MHMEJAECMMA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHMEJAECMMA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MHMEJAECMMA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMEJAECMMA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MHMEJAECMMA* Clone()
		{
			return ((::MHMEJAECMMA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMEJAECMMA_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMEJAECMMA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MHMEJAECMMA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::DCMCLHJINBD*>* HGDHMODFKMH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::DCMCLHJINBD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMEJAECMMA_HGDHMODFKMH_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MHMEJAECMMA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MHMEJAECMMA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MHMEJAECMMA*))((::PBYTE)hIl2Cpp + MHMEJAECMMA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMEJAECMMA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMEJAECMMA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MHMEJAECMMA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMEJAECMMA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MHMEJAECMMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MHMEJAECMMA*))((::PBYTE)hIl2Cpp + MHMEJAECMMA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MHMEJAECMMA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
