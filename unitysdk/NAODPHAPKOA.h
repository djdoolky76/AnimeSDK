#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DFNHMOGNJGJ.h"
#include "unitysdk/System/Object.h"
class NAODPHAPKOA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NAODPHAPKOA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20151DE0)
#define NAODPHAPKOA_CCTOR_OFFSET UNITYSDK_OFFSET(0x20152150)
#define NAODPHAPKOA_CLONE_OFFSET UNITYSDK_OFFSET(0x201518D0)
#define NAODPHAPKOA_CODMCAGAOPE_OFFSET UNITYSDK_OFFSET(0x20151940)
#define NAODPHAPKOA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20151840)
#define NAODPHAPKOA_CTOR_OFFSET UNITYSDK_OFFSET(0x201517F0)
#define NAODPHAPKOA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20151A80)
#define NAODPHAPKOA_EQUALS_OFFSET UNITYSDK_OFFSET(0x20151950)
#define NAODPHAPKOA_FHGAPGHAPFH_OFFSET UNITYSDK_OFFSET(0x20151930)
#define NAODPHAPKOA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20151B70)
#define NAODPHAPKOA_IOIFPHAMFDF_OFFSET UNITYSDK_OFFSET(0x20151920)
#define NAODPHAPKOA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20151780)
#define NAODPHAPKOA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20151F80)
#define NAODPHAPKOA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20151F30)
#define NAODPHAPKOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x201517E0)
#define NAODPHAPKOA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20151C70)
#define NAODPHAPKOA_WRITETO_OFFSET UNITYSDK_OFFSET(0x20151CD0)

inline static constexpr unsigned int NAODPHAPKOA_TypeDefinitionIndex = 30564;

	class NAODPHAPKOA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DPGDDBEACAJ; // 0x18
		::DFNHMOGNJGJ HDAIPLJBGAB; // 0x20
		static ::Google::Protobuf::MessageParser_1<::NAODPHAPKOA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NAODPHAPKOA*>**)UnitySDK::FromName("", "NAODPHAPKOA")->GetStaticField(0x15920);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FCBOAFAEBLJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "NAODPHAPKOA")->GetStaticField(0x15928);
		}

		// static const ::System::Object CGMFPGNNGEK; // 0x0
		// static const ::System::Object GHPKDDCCIID; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAODPHAPKOA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NAODPHAPKOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAODPHAPKOA*))((::PBYTE)hIl2Cpp + NAODPHAPKOA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAODPHAPKOA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NAODPHAPKOA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NAODPHAPKOA*>*(*)())((::PBYTE)hIl2Cpp + NAODPHAPKOA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAODPHAPKOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NAODPHAPKOA* Clone()
		{
			return ((::NAODPHAPKOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAODPHAPKOA_CLONE_OFFSET))(this);
		}

		::DFNHMOGNJGJ IOIFPHAMFDF()
		{
			return ((::DFNHMOGNJGJ(*)(::PVOID))((::PBYTE)hIl2Cpp + NAODPHAPKOA_IOIFPHAMFDF_OFFSET))(this);
		}

		::System::Void FHGAPGHAPFH(::DFNHMOGNJGJ a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFNHMOGNJGJ))((::PBYTE)hIl2Cpp + NAODPHAPKOA_FHGAPGHAPFH_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CODMCAGAOPE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAODPHAPKOA_CODMCAGAOPE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NAODPHAPKOA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NAODPHAPKOA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NAODPHAPKOA*))((::PBYTE)hIl2Cpp + NAODPHAPKOA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAODPHAPKOA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAODPHAPKOA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NAODPHAPKOA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAODPHAPKOA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NAODPHAPKOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAODPHAPKOA*))((::PBYTE)hIl2Cpp + NAODPHAPKOA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NAODPHAPKOA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
