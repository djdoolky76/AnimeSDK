#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDNLGOOMBAG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CDNLGOOMBAG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F3503D0)
#define CDNLGOOMBAG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F350720)
#define CDNLGOOMBAG_CLONE_OFFSET UNITYSDK_OFFSET(0x1F34FF30)
#define CDNLGOOMBAG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F34FEA0)
#define CDNLGOOMBAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F34FE50)
#define CDNLGOOMBAG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F350090)
#define CDNLGOOMBAG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F34FF90)
#define CDNLGOOMBAG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F350180)
#define CDNLGOOMBAG_GPAFPIFJEAF_OFFSET UNITYSDK_OFFSET(0x1F34FF80)
#define CDNLGOOMBAG_HLACEGGLEGF_OFFSET UNITYSDK_OFFSET(0x1F34FF70)
#define CDNLGOOMBAG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F34FE10)
#define CDNLGOOMBAG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F350560)
#define CDNLGOOMBAG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F350510)
#define CDNLGOOMBAG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F34FE40)
#define CDNLGOOMBAG_PJCGNIDNIID_OFFSET UNITYSDK_OFFSET(0x1F34FF60)
#define CDNLGOOMBAG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F350290)
#define CDNLGOOMBAG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F3502F0)

inline static constexpr unsigned int CDNLGOOMBAG_TypeDefinitionIndex = 35050;

	class CDNLGOOMBAG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IHKEOJHJHCK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt64 JEHBHEOHGLN; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_HOEKGEEKEHI()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "CDNLGOOMBAG")->GetStaticField(0x5D110);
		}

		static ::Google::Protobuf::MessageParser_1<::CDNLGOOMBAG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CDNLGOOMBAG*>**)UnitySDK::FromName("", "CDNLGOOMBAG")->GetStaticField(0x5D118);
		}

		// static const ::System::Object IPAMJEJOGBG; // 0x0
		// static const ::System::Object GEMDHFJFBHD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNLGOOMBAG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CDNLGOOMBAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDNLGOOMBAG*))((::PBYTE)hIl2Cpp + CDNLGOOMBAG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDNLGOOMBAG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CDNLGOOMBAG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CDNLGOOMBAG*>*(*)())((::PBYTE)hIl2Cpp + CDNLGOOMBAG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNLGOOMBAG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CDNLGOOMBAG* Clone()
		{
			return ((::CDNLGOOMBAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNLGOOMBAG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PJCGNIDNIID()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNLGOOMBAG_PJCGNIDNIID_OFFSET))(this);
		}

		::System::UInt64 HLACEGGLEGF()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNLGOOMBAG_HLACEGGLEGF_OFFSET))(this);
		}

		::System::Void GPAFPIFJEAF(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CDNLGOOMBAG_GPAFPIFJEAF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CDNLGOOMBAG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CDNLGOOMBAG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CDNLGOOMBAG*))((::PBYTE)hIl2Cpp + CDNLGOOMBAG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNLGOOMBAG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNLGOOMBAG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CDNLGOOMBAG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNLGOOMBAG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CDNLGOOMBAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDNLGOOMBAG*))((::PBYTE)hIl2Cpp + CDNLGOOMBAG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CDNLGOOMBAG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
