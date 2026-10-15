#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MEJFIDEOLBN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MEJFIDEOLBN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9E0390)
#define MEJFIDEOLBN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9E05F0)
#define MEJFIDEOLBN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9DFF90)
#define MEJFIDEOLBN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9DFF00)
#define MEJFIDEOLBN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9DFEB0)
#define MEJFIDEOLBN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9E00C0)
#define MEJFIDEOLBN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9DFFD0)
#define MEJFIDEOLBN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9E01B0)
#define MEJFIDEOLBN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9DFE70)
#define MEJFIDEOLBN_LLBEGICOGAP_OFFSET UNITYSDK_OFFSET(0x1E9DFFC0)
#define MEJFIDEOLBN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9E0450)
#define MEJFIDEOLBN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9E0400)
#define MEJFIDEOLBN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9DFEA0)
#define MEJFIDEOLBN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9E02B0)
#define MEJFIDEOLBN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9E0310)

inline static constexpr unsigned int MEJFIDEOLBN_TypeDefinitionIndex = 34537;

	class MEJFIDEOLBN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FMJNIEBEGBK; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_DKPBLBKFDIF()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "MEJFIDEOLBN")->GetStaticField(0x4D7F0);
		}

		static ::Google::Protobuf::MessageParser_1<::MEJFIDEOLBN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MEJFIDEOLBN*>**)UnitySDK::FromName("", "MEJFIDEOLBN")->GetStaticField(0x4D7F8);
		}

		// static const ::System::Object HJCIAKPLNPB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJFIDEOLBN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MEJFIDEOLBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEJFIDEOLBN*))((::PBYTE)hIl2Cpp + MEJFIDEOLBN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEJFIDEOLBN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MEJFIDEOLBN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MEJFIDEOLBN*>*(*)())((::PBYTE)hIl2Cpp + MEJFIDEOLBN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJFIDEOLBN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MEJFIDEOLBN* Clone()
		{
			return ((::MEJFIDEOLBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJFIDEOLBN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LLBEGICOGAP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJFIDEOLBN_LLBEGICOGAP_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MEJFIDEOLBN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MEJFIDEOLBN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MEJFIDEOLBN*))((::PBYTE)hIl2Cpp + MEJFIDEOLBN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJFIDEOLBN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJFIDEOLBN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MEJFIDEOLBN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJFIDEOLBN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MEJFIDEOLBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEJFIDEOLBN*))((::PBYTE)hIl2Cpp + MEJFIDEOLBN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MEJFIDEOLBN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
