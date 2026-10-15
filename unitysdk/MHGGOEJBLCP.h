#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IKAHKMNCFDN;
class MHGGOEJBLCP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MHGGOEJBLCP_BADJCDPGNOK_OFFSET UNITYSDK_OFFSET(0x1EA03540)
#define MHGGOEJBLCP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA03A30)
#define MHGGOEJBLCP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA03EA0)
#define MHGGOEJBLCP_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA034D0)
#define MHGGOEJBLCP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA03430)
#define MHGGOEJBLCP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA033F0)
#define MHGGOEJBLCP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA036B0)
#define MHGGOEJBLCP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA03550)
#define MHGGOEJBLCP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA03510)
#define MHGGOEJBLCP_FIIDMGILJGM_OFFSET UNITYSDK_OFFSET(0x1EA03520)
#define MHGGOEJBLCP_FMLHOELMHOP_OFFSET UNITYSDK_OFFSET(0x1EA03530)
#define MHGGOEJBLCP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA037E0)
#define MHGGOEJBLCP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA033B0)
#define MHGGOEJBLCP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA03CC0)
#define MHGGOEJBLCP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA03C10)
#define MHGGOEJBLCP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA03500)
#define MHGGOEJBLCP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA033E0)
#define MHGGOEJBLCP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA03870)
#define MHGGOEJBLCP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA038D0)

inline static constexpr unsigned int MHGGOEJBLCP_TypeDefinitionIndex = 34668;

	class MHGGOEJBLCP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::IKAHKMNCFDN*>* OKBOKJBFIIO; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::Byte _padding0[0x4];
		::System::Int64 HGLLGMBMHMC; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::IKAHKMNCFDN*>** StaticGet_LOABCMNPFIK()
		{
			return (::Google::Protobuf::FieldCodec_1<::IKAHKMNCFDN*>**)UnitySDK::FromName("", "MHGGOEJBLCP")->GetStaticField(0x51B90);
		}

		static ::Google::Protobuf::MessageParser_1<::MHGGOEJBLCP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MHGGOEJBLCP*>**)UnitySDK::FromName("", "MHGGOEJBLCP")->GetStaticField(0x51B98);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object AGFNCJKAJOJ; // 0x0
		// static const ::System::Object KOJAMKEFFNF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGGOEJBLCP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MHGGOEJBLCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MHGGOEJBLCP*))((::PBYTE)hIl2Cpp + MHGGOEJBLCP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHGGOEJBLCP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MHGGOEJBLCP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MHGGOEJBLCP*>*(*)())((::PBYTE)hIl2Cpp + MHGGOEJBLCP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGGOEJBLCP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MHGGOEJBLCP* Clone()
		{
			return ((::MHGGOEJBLCP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGGOEJBLCP_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGGOEJBLCP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MHGGOEJBLCP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::IKAHKMNCFDN*>* FIIDMGILJGM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::IKAHKMNCFDN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGGOEJBLCP_FIIDMGILJGM_OFFSET))(this);
		}

		::System::Int64 FMLHOELMHOP()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGGOEJBLCP_FMLHOELMHOP_OFFSET))(this);
		}

		::System::Void BADJCDPGNOK(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MHGGOEJBLCP_BADJCDPGNOK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MHGGOEJBLCP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MHGGOEJBLCP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MHGGOEJBLCP*))((::PBYTE)hIl2Cpp + MHGGOEJBLCP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGGOEJBLCP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGGOEJBLCP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MHGGOEJBLCP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGGOEJBLCP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MHGGOEJBLCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MHGGOEJBLCP*))((::PBYTE)hIl2Cpp + MHGGOEJBLCP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MHGGOEJBLCP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
