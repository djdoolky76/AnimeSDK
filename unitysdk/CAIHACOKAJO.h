#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAIHACOKAJO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define CAIHACOKAJO_BMKFMNDCFKN_OFFSET UNITYSDK_OFFSET(0x2034E250)
#define CAIHACOKAJO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x2034E8E0)
#define CAIHACOKAJO_CCTOR_OFFSET UNITYSDK_OFFSET(0x2034EC10)
#define CAIHACOKAJO_CLONE_OFFSET UNITYSDK_OFFSET(0x2034E200)
#define CAIHACOKAJO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2034E130)
#define CAIHACOKAJO_CTOR_OFFSET UNITYSDK_OFFSET(0x2034E0E0)
#define CAIHACOKAJO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2034E3F0)
#define CAIHACOKAJO_EQUALS_OFFSET UNITYSDK_OFFSET(0x2034E2A0)
#define CAIHACOKAJO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2034E5A0)
#define CAIHACOKAJO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x2034E070)
#define CAIHACOKAJO_LKDNMOMJGJF_OFFSET UNITYSDK_OFFSET(0x2034E270)
#define CAIHACOKAJO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2034EAD0)
#define CAIHACOKAJO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x2034EA20)
#define CAIHACOKAJO_NPAGNFGGFJI_OFFSET UNITYSDK_OFFSET(0x2034E280)
#define CAIHACOKAJO_OOBAKJLOBOK_OFFSET UNITYSDK_OFFSET(0x2034E290)
#define CAIHACOKAJO_OPENEBEILPP_OFFSET UNITYSDK_OFFSET(0x2034E260)
#define CAIHACOKAJO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2034E0D0)
#define CAIHACOKAJO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2034E710)
#define CAIHACOKAJO_WRITETO_OFFSET UNITYSDK_OFFSET(0x2034E770)

inline static constexpr unsigned int CAIHACOKAJO_TypeDefinitionIndex = 35742;

	class CAIHACOKAJO : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JKAOEMAOEFF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Proto::ItemList* IKEMMKIOPNB; // 0x20
		::System::UInt32 OPECOOMANEP; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_NADIODHGBKM()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "CAIHACOKAJO")->GetStaticField(0x5F990);
		}

		static ::Google::Protobuf::MessageParser_1<::CAIHACOKAJO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CAIHACOKAJO*>**)UnitySDK::FromName("", "CAIHACOKAJO")->GetStaticField(0x5F998);
		}

		// static const ::System::Object BKANHJENIKE; // 0x0
		// static const ::System::Object BENPEMPKEOA; // 0x0
		// static const ::System::Object HGMMNNBJNKA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIHACOKAJO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CAIHACOKAJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAIHACOKAJO*))((::PBYTE)hIl2Cpp + CAIHACOKAJO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAIHACOKAJO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CAIHACOKAJO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CAIHACOKAJO*>*(*)())((::PBYTE)hIl2Cpp + CAIHACOKAJO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIHACOKAJO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CAIHACOKAJO* Clone()
		{
			return ((::CAIHACOKAJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIHACOKAJO_CLONE_OFFSET))(this);
		}

		::System::UInt32 BMKFMNDCFKN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIHACOKAJO_BMKFMNDCFKN_OFFSET))(this);
		}

		::System::Void OPENEBEILPP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CAIHACOKAJO_OPENEBEILPP_OFFSET))(this, a1);
		}

		::Proto::ItemList* LKDNMOMJGJF()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIHACOKAJO_LKDNMOMJGJF_OFFSET))(this);
		}

		::System::Void NPAGNFGGFJI(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CAIHACOKAJO_NPAGNFGGFJI_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OOBAKJLOBOK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIHACOKAJO_OOBAKJLOBOK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CAIHACOKAJO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CAIHACOKAJO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CAIHACOKAJO*))((::PBYTE)hIl2Cpp + CAIHACOKAJO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIHACOKAJO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIHACOKAJO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CAIHACOKAJO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIHACOKAJO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CAIHACOKAJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAIHACOKAJO*))((::PBYTE)hIl2Cpp + CAIHACOKAJO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CAIHACOKAJO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
