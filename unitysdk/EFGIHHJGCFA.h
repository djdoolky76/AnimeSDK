#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOMPFHOMMBH;
class EFGIHHJGCFA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EFGIHHJGCFA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E28E890)
#define EFGIHHJGCFA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E28EC10)
#define EFGIHHJGCFA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E28E3E0)
#define EFGIHHJGCFA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E28E320)
#define EFGIHHJGCFA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E28E2D0)
#define EFGIHHJGCFA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E28E590)
#define EFGIHHJGCFA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E28E440)
#define EFGIHHJGCFA_FDPMDCOAEIL_OFFSET UNITYSDK_OFFSET(0x1E28E420)
#define EFGIHHJGCFA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E28E6C0)
#define EFGIHHJGCFA_ILAOHBLALMJ_OFFSET UNITYSDK_OFFSET(0x1E28E430)
#define EFGIHHJGCFA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E28E290)
#define EFGIHHJGCFA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E28EA40)
#define EFGIHHJGCFA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E28E9A0)
#define EFGIHHJGCFA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E28E2C0)
#define EFGIHHJGCFA_PCMFGAPBPGK_OFFSET UNITYSDK_OFFSET(0x1E28E410)
#define EFGIHHJGCFA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E28E730)
#define EFGIHHJGCFA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E28E790)

	class EFGIHHJGCFA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::BOMPFHOMMBH*>* CHDFOGBCGJA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 DBHLHPDBNFD; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EFGIHHJGCFA")->GetStaticField(0x45090);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_LCBOMNGKJJC()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "EFGIHHJGCFA")->GetStaticField(0x45098);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EFGIHHJGCFA_JJGHOBBFNJD_OFFSET))();
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
