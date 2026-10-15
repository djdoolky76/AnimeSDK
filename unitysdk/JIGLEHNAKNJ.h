#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JIGLEHNAKNJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JIGLEHNAKNJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E71F020)
#define JIGLEHNAKNJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E71F310)
#define JIGLEHNAKNJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E71EB90)
#define JIGLEHNAKNJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E71EB00)
#define JIGLEHNAKNJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E71EAB0)
#define JIGLEHNAKNJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E71ECF0)
#define JIGLEHNAKNJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E71EBF0)
#define JIGLEHNAKNJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E71EDE0)
#define JIGLEHNAKNJ_GOLPFFCDICE_OFFSET UNITYSDK_OFFSET(0x1E71EBD0)
#define JIGLEHNAKNJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E71EA70)
#define JIGLEHNAKNJ_LBACCNBLJBC_OFFSET UNITYSDK_OFFSET(0x1E71EBE0)
#define JIGLEHNAKNJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E71F150)
#define JIGLEHNAKNJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E71F100)
#define JIGLEHNAKNJ_OGMHHLBHKOF_OFFSET UNITYSDK_OFFSET(0x1E71EBC0)
#define JIGLEHNAKNJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E71EAA0)
#define JIGLEHNAKNJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E71EEE0)
#define JIGLEHNAKNJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E71EF40)

inline static constexpr unsigned int JIGLEHNAKNJ_TypeDefinitionIndex = 33055;

	class JIGLEHNAKNJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MOMHMNADIMD; // 0x18
		::System::UInt32 JCGMPJONLCA; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_HJGFCDAECGD()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "JIGLEHNAKNJ")->GetStaticField(0x5F950);
		}

		static ::Google::Protobuf::MessageParser_1<::JIGLEHNAKNJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JIGLEHNAKNJ*>**)UnitySDK::FromName("", "JIGLEHNAKNJ")->GetStaticField(0x5F958);
		}

		// static const ::System::Object GAHLJEECCFB; // 0x0
		// static const ::System::Object MMJGLBOIJIE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGLEHNAKNJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JIGLEHNAKNJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JIGLEHNAKNJ*))((::PBYTE)hIl2Cpp + JIGLEHNAKNJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIGLEHNAKNJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JIGLEHNAKNJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JIGLEHNAKNJ*>*(*)())((::PBYTE)hIl2Cpp + JIGLEHNAKNJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGLEHNAKNJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JIGLEHNAKNJ* Clone()
		{
			return ((::JIGLEHNAKNJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGLEHNAKNJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 OGMHHLBHKOF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGLEHNAKNJ_OGMHHLBHKOF_OFFSET))(this);
		}

		::System::Void GOLPFFCDICE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JIGLEHNAKNJ_GOLPFFCDICE_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LBACCNBLJBC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGLEHNAKNJ_LBACCNBLJBC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JIGLEHNAKNJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JIGLEHNAKNJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JIGLEHNAKNJ*))((::PBYTE)hIl2Cpp + JIGLEHNAKNJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGLEHNAKNJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGLEHNAKNJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JIGLEHNAKNJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGLEHNAKNJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JIGLEHNAKNJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JIGLEHNAKNJ*))((::PBYTE)hIl2Cpp + JIGLEHNAKNJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JIGLEHNAKNJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
