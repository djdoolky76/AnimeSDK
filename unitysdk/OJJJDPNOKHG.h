#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOCIBBFJPMP;
class OJJJDPNOKHG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OJJJDPNOKHG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE5A180)
#define OJJJDPNOKHG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE5A4E0)
#define OJJJDPNOKHG_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE59BC0)
#define OJJJDPNOKHG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE59B10)
#define OJJJDPNOKHG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE59A30)
#define OJJJDPNOKHG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE59CA0)
#define OJJJDPNOKHG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE59C40)
#define OJJJDPNOKHG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE59E10)
#define OJJJDPNOKHG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE599C0)
#define OJJJDPNOKHG_KHINOGAEHBI_OFFSET UNITYSDK_OFFSET(0x1DE59C20)
#define OJJJDPNOKHG_LCKKGPFEKHM_OFFSET UNITYSDK_OFFSET(0x1DE59C30)
#define OJJJDPNOKHG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE5A360)
#define OJJJDPNOKHG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE5A290)
#define OJJJDPNOKHG_MKPCJENPBJN_OFFSET UNITYSDK_OFFSET(0x1DE59C10)
#define OJJJDPNOKHG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE59A20)
#define OJJJDPNOKHG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE5A010)
#define OJJJDPNOKHG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE5A070)

inline static constexpr unsigned int OJJJDPNOKHG_TypeDefinitionIndex = 29051;

	class OJJJDPNOKHG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::JOCIBBFJPMP*>* MDELKGNPIOF; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PLLAEOCEDML; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FLHOIFJLDCM; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_JNLOIKKDOFA()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "OJJJDPNOKHG")->GetStaticField(0x1C950);
		}

		static ::Google::Protobuf::FieldCodec_1<::JOCIBBFJPMP*>** StaticGet_GAINFCCDPFB()
		{
			return (::Google::Protobuf::FieldCodec_1<::JOCIBBFJPMP*>**)UnitySDK::FromName("", "OJJJDPNOKHG")->GetStaticField(0x1C958);
		}

		static ::Google::Protobuf::MessageParser_1<::OJJJDPNOKHG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OJJJDPNOKHG*>**)UnitySDK::FromName("", "OJJJDPNOKHG")->GetStaticField(0x1C960);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_EHFDAHIEHIN()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "OJJJDPNOKHG")->GetStaticField(0x1C968);
		}

		// static const ::System::Object AJEKOJPPGEK; // 0x0
		// static const ::System::Object PMGMOKACFAP; // 0x0
		// static const ::System::Object EFEMONKDOCM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJJJDPNOKHG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OJJJDPNOKHG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OJJJDPNOKHG*))((::PBYTE)hIl2Cpp + OJJJDPNOKHG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJJJDPNOKHG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OJJJDPNOKHG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OJJJDPNOKHG*>*(*)())((::PBYTE)hIl2Cpp + OJJJDPNOKHG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJJJDPNOKHG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OJJJDPNOKHG* Clone()
		{
			return ((::OJJJDPNOKHG*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJJJDPNOKHG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MKPCJENPBJN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJJJDPNOKHG_MKPCJENPBJN_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KHINOGAEHBI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJJJDPNOKHG_KHINOGAEHBI_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JOCIBBFJPMP*>* LCKKGPFEKHM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JOCIBBFJPMP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJJJDPNOKHG_LCKKGPFEKHM_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OJJJDPNOKHG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OJJJDPNOKHG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OJJJDPNOKHG*))((::PBYTE)hIl2Cpp + OJJJDPNOKHG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJJJDPNOKHG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJJJDPNOKHG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OJJJDPNOKHG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJJJDPNOKHG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OJJJDPNOKHG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OJJJDPNOKHG*))((::PBYTE)hIl2Cpp + OJJJDPNOKHG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OJJJDPNOKHG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
