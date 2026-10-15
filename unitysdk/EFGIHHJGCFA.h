#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOMPFHOMMBH;
class EFGIHHJGCFA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EFGIHHJGCFA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E261210)
#define EFGIHHJGCFA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E261590)
#define EFGIHHJGCFA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E260D60)
#define EFGIHHJGCFA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E260CA0)
#define EFGIHHJGCFA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E260C50)
#define EFGIHHJGCFA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E260F10)
#define EFGIHHJGCFA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E260DC0)
#define EFGIHHJGCFA_FDPMDCOAEIL_OFFSET UNITYSDK_OFFSET(0x1E260DA0)
#define EFGIHHJGCFA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E261040)
#define EFGIHHJGCFA_ILAOHBLALMJ_OFFSET UNITYSDK_OFFSET(0x1E260DB0)
#define EFGIHHJGCFA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E260C10)
#define EFGIHHJGCFA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2613C0)
#define EFGIHHJGCFA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E261320)
#define EFGIHHJGCFA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E260C40)
#define EFGIHHJGCFA_PCMFGAPBPGK_OFFSET UNITYSDK_OFFSET(0x1E260D90)
#define EFGIHHJGCFA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2610B0)
#define EFGIHHJGCFA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E261110)

inline static constexpr unsigned int EFGIHHJGCFA_TypeDefinitionIndex = 26030;

	class EFGIHHJGCFA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::BOMPFHOMMBH*>* CHDFOGBCGJA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 DBHLHPDBNFD; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::BOMPFHOMMBH*>** StaticGet_LCBOMNGKJJC()
		{
			return (::Google::Protobuf::FieldCodec_1<::BOMPFHOMMBH*>**)UnitySDK::FromName("", "EFGIHHJGCFA")->GetStaticField(0x46CC0);
		}

		static ::Google::Protobuf::MessageParser_1<::EFGIHHJGCFA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EFGIHHJGCFA*>**)UnitySDK::FromName("", "EFGIHHJGCFA")->GetStaticField(0x46CC8);
		}

		// static const ::System::Object HHAPFDHANFC; // 0x0
		// static const ::System::Object CGFGMCJLJNA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFGIHHJGCFA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EFGIHHJGCFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EFGIHHJGCFA*))((::PBYTE)hIl2Cpp + EFGIHHJGCFA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFGIHHJGCFA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EFGIHHJGCFA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EFGIHHJGCFA*>*(*)())((::PBYTE)hIl2Cpp + EFGIHHJGCFA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFGIHHJGCFA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EFGIHHJGCFA* Clone()
		{
			return ((::EFGIHHJGCFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFGIHHJGCFA_CLONE_OFFSET))(this);
		}

		::System::UInt32 PCMFGAPBPGK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFGIHHJGCFA_PCMFGAPBPGK_OFFSET))(this);
		}

		::System::Void FDPMDCOAEIL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EFGIHHJGCFA_FDPMDCOAEIL_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BOMPFHOMMBH*>* ILAOHBLALMJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BOMPFHOMMBH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFGIHHJGCFA_ILAOHBLALMJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EFGIHHJGCFA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EFGIHHJGCFA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EFGIHHJGCFA*))((::PBYTE)hIl2Cpp + EFGIHHJGCFA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFGIHHJGCFA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFGIHHJGCFA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EFGIHHJGCFA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFGIHHJGCFA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EFGIHHJGCFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EFGIHHJGCFA*))((::PBYTE)hIl2Cpp + EFGIHHJGCFA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EFGIHHJGCFA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
