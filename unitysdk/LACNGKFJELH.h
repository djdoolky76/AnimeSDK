#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LACNGKFJELH;
class PFMGFPOKINH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LACNGKFJELH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E89BFE0)
#define LACNGKFJELH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E89C490)
#define LACNGKFJELH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E89BAD0)
#define LACNGKFJELH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E89B9D0)
#define LACNGKFJELH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E89B950)
#define LACNGKFJELH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E89BBB0)
#define LACNGKFJELH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E89BB80)
#define LACNGKFJELH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E89BC70)
#define LACNGKFJELH_HBGGIJICLGF_OFFSET UNITYSDK_OFFSET(0x1E89BB40)
#define LACNGKFJELH_HLHJBEPAFFM_OFFSET UNITYSDK_OFFSET(0x1E89BB30)
#define LACNGKFJELH_HNFHOJAECPK_OFFSET UNITYSDK_OFFSET(0x1E89BB70)
#define LACNGKFJELH_IFGMGBAAKBM_OFFSET UNITYSDK_OFFSET(0x1E89BB10)
#define LACNGKFJELH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E89B910)
#define LACNGKFJELH_KEEHIMOCBNK_OFFSET UNITYSDK_OFFSET(0x1E89BB60)
#define LACNGKFJELH_KNGJFHKOLEO_OFFSET UNITYSDK_OFFSET(0x1E89BB20)
#define LACNGKFJELH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E89C310)
#define LACNGKFJELH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E89C230)
#define LACNGKFJELH_MLMMBFLDIGB_OFFSET UNITYSDK_OFFSET(0x1E89BB50)
#define LACNGKFJELH_OPDMPOKGBCA_OFFSET UNITYSDK_OFFSET(0x1E89BB00)
#define LACNGKFJELH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E89B940)
#define LACNGKFJELH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E89BDC0)
#define LACNGKFJELH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E89BE20)

inline static constexpr unsigned int LACNGKFJELH_TypeDefinitionIndex = 26083;

	class LACNGKFJELH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MOCFIAEMBFL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::PFMGFPOKINH*>* PCPNJJDJEJL; // 0x20
		::System::UInt32 HHKEHNKMILI; // 0x28
		::System::UInt32 CHMFPHPJAIA; // 0x2C
		::System::UInt32 KHMPKKJMHNM; // 0x30
		static ::Google::Protobuf::FieldCodec_1<::PFMGFPOKINH*>** StaticGet_OCILIBJONGM()
		{
			return (::Google::Protobuf::FieldCodec_1<::PFMGFPOKINH*>**)UnitySDK::FromName("", "LACNGKFJELH")->GetStaticField(0x246E0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_HPMBHPJILKK()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "LACNGKFJELH")->GetStaticField(0x246E8);
		}

		static ::Google::Protobuf::MessageParser_1<::LACNGKFJELH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LACNGKFJELH*>**)UnitySDK::FromName("", "LACNGKFJELH")->GetStaticField(0x246F0);
		}

		// static const ::System::Object NKLILADIPNI; // 0x0
		// static const ::System::Object HCNNIHOAGEM; // 0x0
		// static const ::System::Object DDMCEKKKDHB; // 0x0
		// static const ::System::Object EBOOHBBAGIC; // 0x0
		// static const ::System::Object IGIGANJLNPM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LACNGKFJELH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LACNGKFJELH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LACNGKFJELH*))((::PBYTE)hIl2Cpp + LACNGKFJELH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LACNGKFJELH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LACNGKFJELH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LACNGKFJELH*>*(*)())((::PBYTE)hIl2Cpp + LACNGKFJELH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LACNGKFJELH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LACNGKFJELH* Clone()
		{
			return ((::LACNGKFJELH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LACNGKFJELH_CLONE_OFFSET))(this);
		}

		::System::UInt32 OPDMPOKGBCA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LACNGKFJELH_OPDMPOKGBCA_OFFSET))(this);
		}

		::System::Void IFGMGBAAKBM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LACNGKFJELH_IFGMGBAAKBM_OFFSET))(this, a1);
		}

		::System::UInt32 KNGJFHKOLEO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LACNGKFJELH_KNGJFHKOLEO_OFFSET))(this);
		}

		::System::Void HLHJBEPAFFM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LACNGKFJELH_HLHJBEPAFFM_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HBGGIJICLGF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LACNGKFJELH_HBGGIJICLGF_OFFSET))(this);
		}

		::System::UInt32 MLMMBFLDIGB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LACNGKFJELH_MLMMBFLDIGB_OFFSET))(this);
		}

		::System::Void KEEHIMOCBNK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LACNGKFJELH_KEEHIMOCBNK_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PFMGFPOKINH*>* HNFHOJAECPK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PFMGFPOKINH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LACNGKFJELH_HNFHOJAECPK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LACNGKFJELH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LACNGKFJELH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LACNGKFJELH*))((::PBYTE)hIl2Cpp + LACNGKFJELH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LACNGKFJELH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LACNGKFJELH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LACNGKFJELH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LACNGKFJELH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LACNGKFJELH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LACNGKFJELH*))((::PBYTE)hIl2Cpp + LACNGKFJELH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LACNGKFJELH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
