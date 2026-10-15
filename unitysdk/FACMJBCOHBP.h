#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DICEONDKEFF.h"
#include "unitysdk/System/Object.h"
class ACMKPNMKOKH;
class FACMJBCOHBP;
class MAOKMPOELCO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FACMJBCOHBP_BPMILDIFLDA_OFFSET UNITYSDK_OFFSET(0x1E2EF320)
#define FACMJBCOHBP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2EF7C0)
#define FACMJBCOHBP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2EFC00)
#define FACMJBCOHBP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2EF2F0)
#define FACMJBCOHBP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2EF210)
#define FACMJBCOHBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2EF1B0)
#define FACMJBCOHBP_DLACEPMINJE_OFFSET UNITYSDK_OFFSET(0x1E2EF330)
#define FACMJBCOHBP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2EF3B0)
#define FACMJBCOHBP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2EF380)
#define FACMJBCOHBP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2EF510)
#define FACMJBCOHBP_HOMAOOLGBFD_OFFSET UNITYSDK_OFFSET(0x1E2EF350)
#define FACMJBCOHBP_IPIPMPFIAJN_OFFSET UNITYSDK_OFFSET(0x1E2EF360)
#define FACMJBCOHBP_JJBOMOAIIDJ_OFFSET UNITYSDK_OFFSET(0x1E2EF340)
#define FACMJBCOHBP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2EF170)
#define FACMJBCOHBP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2EFAE0)
#define FACMJBCOHBP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2EF9D0)
#define FACMJBCOHBP_MMLCKIGKLDB_OFFSET UNITYSDK_OFFSET(0x1E2EF370)
#define FACMJBCOHBP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2EF1A0)
#define FACMJBCOHBP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2EF5A0)
#define FACMJBCOHBP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2EF600)

inline static constexpr unsigned int FACMJBCOHBP_TypeDefinitionIndex = 33004;

	class FACMJBCOHBP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::ACMKPNMKOKH*>* EGJAJMGMJLO; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::MAOKMPOELCO*>* PLBGCPABAKK; // 0x20
		::System::UInt32 KBMIHNFPECP; // 0x28
		::DICEONDKEFF HDKGAMNJCID; // 0x2C
		static ::Google::Protobuf::FieldCodec_1<::MAOKMPOELCO*>** StaticGet_CJLDLEDIDAC()
		{
			return (::Google::Protobuf::FieldCodec_1<::MAOKMPOELCO*>**)UnitySDK::FromName("", "FACMJBCOHBP")->GetStaticField(0x4AF40);
		}

		static ::Google::Protobuf::FieldCodec_1<::ACMKPNMKOKH*>** StaticGet_FBBDKMDFHOK()
		{
			return (::Google::Protobuf::FieldCodec_1<::ACMKPNMKOKH*>**)UnitySDK::FromName("", "FACMJBCOHBP")->GetStaticField(0x4AF48);
		}

		static ::Google::Protobuf::MessageParser_1<::FACMJBCOHBP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FACMJBCOHBP*>**)UnitySDK::FromName("", "FACMJBCOHBP")->GetStaticField(0x4AF50);
		}

		// static const ::System::Object IGHHCDMAHLB; // 0x0
		// static const ::System::Object OMFKBGJDLJM; // 0x0
		// static const ::System::Object PCDOHBPOLOF; // 0x0
		// static const ::System::Object DMIILHALCHB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FACMJBCOHBP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FACMJBCOHBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FACMJBCOHBP*))((::PBYTE)hIl2Cpp + FACMJBCOHBP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FACMJBCOHBP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FACMJBCOHBP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FACMJBCOHBP*>*(*)())((::PBYTE)hIl2Cpp + FACMJBCOHBP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FACMJBCOHBP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FACMJBCOHBP* Clone()
		{
			return ((::FACMJBCOHBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FACMJBCOHBP_CLONE_OFFSET))(this);
		}

		::System::UInt32 BPMILDIFLDA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FACMJBCOHBP_BPMILDIFLDA_OFFSET))(this);
		}

		::System::Void DLACEPMINJE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FACMJBCOHBP_DLACEPMINJE_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::ACMKPNMKOKH*>* JJBOMOAIIDJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::ACMKPNMKOKH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FACMJBCOHBP_JJBOMOAIIDJ_OFFSET))(this);
		}

		::DICEONDKEFF HOMAOOLGBFD()
		{
			return ((::DICEONDKEFF(*)(::PVOID))((::PBYTE)hIl2Cpp + FACMJBCOHBP_HOMAOOLGBFD_OFFSET))(this);
		}

		::System::Void IPIPMPFIAJN(::DICEONDKEFF a1)
		{
			return ((::System::Void(*)(::PVOID, ::DICEONDKEFF))((::PBYTE)hIl2Cpp + FACMJBCOHBP_IPIPMPFIAJN_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::MAOKMPOELCO*>* MMLCKIGKLDB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::MAOKMPOELCO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FACMJBCOHBP_MMLCKIGKLDB_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FACMJBCOHBP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FACMJBCOHBP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FACMJBCOHBP*))((::PBYTE)hIl2Cpp + FACMJBCOHBP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FACMJBCOHBP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FACMJBCOHBP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FACMJBCOHBP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FACMJBCOHBP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FACMJBCOHBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FACMJBCOHBP*))((::PBYTE)hIl2Cpp + FACMJBCOHBP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FACMJBCOHBP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
