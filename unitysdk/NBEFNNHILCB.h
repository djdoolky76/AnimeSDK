#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NBEFNNHILCB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NBEFNNHILCB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EACF630)
#define NBEFNNHILCB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EACF850)
#define NBEFNNHILCB_CLONE_OFFSET UNITYSDK_OFFSET(0x1EACF100)
#define NBEFNNHILCB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EACF010)
#define NBEFNNHILCB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EACEF80)
#define NBEFNNHILCB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EACF260)
#define NBEFNNHILCB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EACF150)
#define NBEFNNHILCB_GBGCLLGFBJH_OFFSET UNITYSDK_OFFSET(0x1EACF130)
#define NBEFNNHILCB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EACF370)
#define NBEFNNHILCB_IHCODKJBJKF_OFFSET UNITYSDK_OFFSET(0x1EACF140)
#define NBEFNNHILCB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EACEF40)
#define NBEFNNHILCB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EACF720)
#define NBEFNNHILCB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EACF6C0)
#define NBEFNNHILCB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EACEF70)
#define NBEFNNHILCB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EACF530)
#define NBEFNNHILCB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EACF590)

inline static constexpr unsigned int NBEFNNHILCB_TypeDefinitionIndex = 30693;

	class NBEFNNHILCB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KBLOODMFGLP; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DFEJKCAOFAK; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_LHKFIPDOCGC()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "NBEFNNHILCB")->GetStaticField(0x5CE20);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_AGGLBPILBLH()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "NBEFNNHILCB")->GetStaticField(0x5CE28);
		}

		static ::Google::Protobuf::MessageParser_1<::NBEFNNHILCB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NBEFNNHILCB*>**)UnitySDK::FromName("", "NBEFNNHILCB")->GetStaticField(0x5CE30);
		}

		// static const ::System::Object LDEFCLLIGPH; // 0x0
		// static const ::System::Object JGDHPIFOFBP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBEFNNHILCB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NBEFNNHILCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBEFNNHILCB*))((::PBYTE)hIl2Cpp + NBEFNNHILCB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBEFNNHILCB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NBEFNNHILCB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NBEFNNHILCB*>*(*)())((::PBYTE)hIl2Cpp + NBEFNNHILCB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBEFNNHILCB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NBEFNNHILCB* Clone()
		{
			return ((::NBEFNNHILCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBEFNNHILCB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GBGCLLGFBJH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBEFNNHILCB_GBGCLLGFBJH_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IHCODKJBJKF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBEFNNHILCB_IHCODKJBJKF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NBEFNNHILCB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NBEFNNHILCB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NBEFNNHILCB*))((::PBYTE)hIl2Cpp + NBEFNNHILCB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBEFNNHILCB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBEFNNHILCB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NBEFNNHILCB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBEFNNHILCB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NBEFNNHILCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBEFNNHILCB*))((::PBYTE)hIl2Cpp + NBEFNNHILCB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NBEFNNHILCB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
