#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OHHHCKCFPIG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OHHHCKCFPIG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE5F970)
#define OHHHCKCFPIG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE5FC30)
#define OHHHCKCFPIG_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE5F4F0)
#define OHHHCKCFPIG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE5F460)
#define OHHHCKCFPIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE5F410)
#define OHHHCKCFPIG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE5F670)
#define OHHHCKCFPIG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE5F550)
#define OHHHCKCFPIG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE5F760)
#define OHHHCKCFPIG_HHLEGOGLHIC_OFFSET UNITYSDK_OFFSET(0x1DE5F540)
#define OHHHCKCFPIG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE5F3A0)
#define OHHHCKCFPIG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE5FA60)
#define OHHHCKCFPIG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE5FA10)
#define OHHHCKCFPIG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE5F400)
#define OHHHCKCFPIG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE5F860)
#define OHHHCKCFPIG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE5F8C0)

inline static constexpr unsigned int OHHHCKCFPIG_TypeDefinitionIndex = 29861;

	class OHHHCKCFPIG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NNEAIKFMOIC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::OHHHCKCFPIG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OHHHCKCFPIG*>**)UnitySDK::FromName("", "OHHHCKCFPIG")->GetStaticField(0x1A780);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_PIDHOBCDPOP()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "OHHHCKCFPIG")->GetStaticField(0x1A788);
		}

		// static const ::System::Object GLMGKCABCNJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHHCKCFPIG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OHHHCKCFPIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHHHCKCFPIG*))((::PBYTE)hIl2Cpp + OHHHCKCFPIG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHHHCKCFPIG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OHHHCKCFPIG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OHHHCKCFPIG*>*(*)())((::PBYTE)hIl2Cpp + OHHHCKCFPIG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHHCKCFPIG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OHHHCKCFPIG* Clone()
		{
			return ((::OHHHCKCFPIG*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHHCKCFPIG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HHLEGOGLHIC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHHCKCFPIG_HHLEGOGLHIC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OHHHCKCFPIG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OHHHCKCFPIG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OHHHCKCFPIG*))((::PBYTE)hIl2Cpp + OHHHCKCFPIG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHHCKCFPIG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHHCKCFPIG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OHHHCKCFPIG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHHCKCFPIG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OHHHCKCFPIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHHHCKCFPIG*))((::PBYTE)hIl2Cpp + OHHHCKCFPIG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OHHHCKCFPIG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
