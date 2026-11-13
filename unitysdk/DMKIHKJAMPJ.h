#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMKIHKJAMPJ;
class JOFHMCJPBCE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DMKIHKJAMPJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x201DFF40)
#define DMKIHKJAMPJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x201E02D0)
#define DMKIHKJAMPJ_CLONE_OFFSET UNITYSDK_OFFSET(0x201DFAE0)
#define DMKIHKJAMPJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x201DF9F0)
#define DMKIHKJAMPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x201DF970)
#define DMKIHKJAMPJ_DPKFIAFCMIK_OFFSET UNITYSDK_OFFSET(0x201DFB10)
#define DMKIHKJAMPJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x201DFB60)
#define DMKIHKJAMPJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x201DFB30)
#define DMKIHKJAMPJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x201DFCB0)
#define DMKIHKJAMPJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x201DF930)
#define DMKIHKJAMPJ_LLBEGICOGAP_OFFSET UNITYSDK_OFFSET(0x201DFB20)
#define DMKIHKJAMPJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x201E00D0)
#define DMKIHKJAMPJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x201E0020)
#define DMKIHKJAMPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x201DF960)
#define DMKIHKJAMPJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x201DFE00)
#define DMKIHKJAMPJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x201DFE60)

inline static constexpr unsigned int DMKIHKJAMPJ_TypeDefinitionIndex = 35614;

	class DMKIHKJAMPJ : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::JOFHMCJPBCE*>* OFALGJGEJNG; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FMJNIEBEGBK; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_DKPBLBKFDIF()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "DMKIHKJAMPJ")->GetStaticField(0x34980);
		}

		static ::Google::Protobuf::FieldCodec_1<::JOFHMCJPBCE*>** StaticGet_PBACLJHECAB()
		{
			return (::Google::Protobuf::FieldCodec_1<::JOFHMCJPBCE*>**)UnitySDK::FromName("", "DMKIHKJAMPJ")->GetStaticField(0x34988);
		}

		static ::Google::Protobuf::MessageParser_1<::DMKIHKJAMPJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DMKIHKJAMPJ*>**)UnitySDK::FromName("", "DMKIHKJAMPJ")->GetStaticField(0x34990);
		}

		// static const ::System::Object HGGGPJMBHAH; // 0x0
		// static const ::System::Object HJCIAKPLNPB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMKIHKJAMPJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DMKIHKJAMPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMKIHKJAMPJ*))((::PBYTE)hIl2Cpp + DMKIHKJAMPJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMKIHKJAMPJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DMKIHKJAMPJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DMKIHKJAMPJ*>*(*)())((::PBYTE)hIl2Cpp + DMKIHKJAMPJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMKIHKJAMPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DMKIHKJAMPJ* Clone()
		{
			return ((::DMKIHKJAMPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMKIHKJAMPJ_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JOFHMCJPBCE*>* DPKFIAFCMIK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JOFHMCJPBCE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMKIHKJAMPJ_DPKFIAFCMIK_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LLBEGICOGAP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMKIHKJAMPJ_LLBEGICOGAP_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DMKIHKJAMPJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DMKIHKJAMPJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DMKIHKJAMPJ*))((::PBYTE)hIl2Cpp + DMKIHKJAMPJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMKIHKJAMPJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMKIHKJAMPJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DMKIHKJAMPJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMKIHKJAMPJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DMKIHKJAMPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMKIHKJAMPJ*))((::PBYTE)hIl2Cpp + DMKIHKJAMPJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DMKIHKJAMPJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
