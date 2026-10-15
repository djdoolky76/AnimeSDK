#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHOMAAHPCIG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AHOMAAHPCIG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E277610)
#define AHOMAAHPCIG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E277880)
#define AHOMAAHPCIG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E277040)
#define AHOMAAHPCIG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E276F50)
#define AHOMAAHPCIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E276EC0)
#define AHOMAAHPCIG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E277200)
#define AHOMAAHPCIG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2770B0)
#define AHOMAAHPCIG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E277310)
#define AHOMAAHPCIG_GGADEMDJIHJ_OFFSET UNITYSDK_OFFSET(0x1E2770A0)
#define AHOMAAHPCIG_HFJGGDCIOEO_OFFSET UNITYSDK_OFFSET(0x1E277090)
#define AHOMAAHPCIG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E276E50)
#define AHOMAAHPCIG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E277740)
#define AHOMAAHPCIG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2776E0)
#define AHOMAAHPCIG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E276EB0)
#define AHOMAAHPCIG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2774D0)
#define AHOMAAHPCIG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E277530)

	class AHOMAAHPCIG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AIHAIHJMCJL; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LCOIIPFJNLM; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_KPJDDBDMBIL()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "AHOMAAHPCIG")->GetStaticField(0x326D0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_PBANNCIILOJ()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "AHOMAAHPCIG")->GetStaticField(0x326D8);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AHOMAAHPCIG")->GetStaticField(0x326E0);
		}

		// static const ::System::Object OPHCEINIDBH; // 0x0
		// static const ::System::Object NANCKOCJGNC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHOMAAHPCIG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AHOMAAHPCIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHOMAAHPCIG*))((::PBYTE)hIl2Cpp + AHOMAAHPCIG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHOMAAHPCIG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AHOMAAHPCIG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHOMAAHPCIG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AHOMAAHPCIG* Clone()
		{
			return ((::AHOMAAHPCIG*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHOMAAHPCIG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HFJGGDCIOEO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHOMAAHPCIG_HFJGGDCIOEO_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GGADEMDJIHJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHOMAAHPCIG_GGADEMDJIHJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AHOMAAHPCIG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AHOMAAHPCIG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AHOMAAHPCIG*))((::PBYTE)hIl2Cpp + AHOMAAHPCIG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHOMAAHPCIG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHOMAAHPCIG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AHOMAAHPCIG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHOMAAHPCIG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AHOMAAHPCIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHOMAAHPCIG*))((::PBYTE)hIl2Cpp + AHOMAAHPCIG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AHOMAAHPCIG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
