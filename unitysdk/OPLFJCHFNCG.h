#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIJBCJPELBG;
class OPLFJCHFNCG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OPLFJCHFNCG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x2036C350)
#define OPLFJCHFNCG_CCTOR_OFFSET UNITYSDK_OFFSET(0x2036C650)
#define OPLFJCHFNCG_CLONE_OFFSET UNITYSDK_OFFSET(0x2036BED0)
#define OPLFJCHFNCG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2036BE20)
#define OPLFJCHFNCG_CTOR_OFFSET UNITYSDK_OFFSET(0x2036BDD0)
#define OPLFJCHFNCG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2036C0B0)
#define OPLFJCHFNCG_EQUALS_OFFSET UNITYSDK_OFFSET(0x2036BF30)
#define OPLFJCHFNCG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2036C1D0)
#define OPLFJCHFNCG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x2036BD60)
#define OPLFJCHFNCG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2036C490)
#define OPLFJCHFNCG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x2036C3F0)
#define OPLFJCHFNCG_MMLCKIGKLDB_OFFSET UNITYSDK_OFFSET(0x2036BF20)
#define OPLFJCHFNCG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2036BDC0)
#define OPLFJCHFNCG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2036C240)
#define OPLFJCHFNCG_WRITETO_OFFSET UNITYSDK_OFFSET(0x2036C2A0)

inline static constexpr unsigned int OPLFJCHFNCG_TypeDefinitionIndex = 29271;

	class OPLFJCHFNCG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::GIJBCJPELBG*>* PLBGCPABAKK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::OPLFJCHFNCG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OPLFJCHFNCG*>**)UnitySDK::FromName("", "OPLFJCHFNCG")->GetStaticField(0x2B5C0);
		}

		static ::Google::Protobuf::FieldCodec_1<::GIJBCJPELBG*>** StaticGet_CJLDLEDIDAC()
		{
			return (::Google::Protobuf::FieldCodec_1<::GIJBCJPELBG*>**)UnitySDK::FromName("", "OPLFJCHFNCG")->GetStaticField(0x2B5C8);
		}

		// static const ::System::Object DMIILHALCHB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPLFJCHFNCG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OPLFJCHFNCG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OPLFJCHFNCG*))((::PBYTE)hIl2Cpp + OPLFJCHFNCG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPLFJCHFNCG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OPLFJCHFNCG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OPLFJCHFNCG*>*(*)())((::PBYTE)hIl2Cpp + OPLFJCHFNCG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPLFJCHFNCG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OPLFJCHFNCG* Clone()
		{
			return ((::OPLFJCHFNCG*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPLFJCHFNCG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::GIJBCJPELBG*>* MMLCKIGKLDB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::GIJBCJPELBG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPLFJCHFNCG_MMLCKIGKLDB_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OPLFJCHFNCG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OPLFJCHFNCG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OPLFJCHFNCG*))((::PBYTE)hIl2Cpp + OPLFJCHFNCG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPLFJCHFNCG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPLFJCHFNCG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OPLFJCHFNCG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPLFJCHFNCG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OPLFJCHFNCG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OPLFJCHFNCG*))((::PBYTE)hIl2Cpp + OPLFJCHFNCG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OPLFJCHFNCG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
