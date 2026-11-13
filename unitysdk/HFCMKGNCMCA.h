#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBHJJCBDJHA;
class HFCMKGNCMCA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HFCMKGNCMCA_BEMEFIJPBKC_OFFSET UNITYSDK_OFFSET(0x1FAE5020)
#define HFCMKGNCMCA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FAE5410)
#define HFCMKGNCMCA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAE5710)
#define HFCMKGNCMCA_CLONE_OFFSET UNITYSDK_OFFSET(0x1FAE4FF0)
#define HFCMKGNCMCA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FAE4F40)
#define HFCMKGNCMCA_CTOR_OFFSET UNITYSDK_OFFSET(0x1FAE4EF0)
#define HFCMKGNCMCA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FAE5170)
#define HFCMKGNCMCA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FAE5030)
#define HFCMKGNCMCA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FAE5290)
#define HFCMKGNCMCA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FAE4EB0)
#define HFCMKGNCMCA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FAE5550)
#define HFCMKGNCMCA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FAE54B0)
#define HFCMKGNCMCA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FAE4EE0)
#define HFCMKGNCMCA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FAE5300)
#define HFCMKGNCMCA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FAE5360)

inline static constexpr unsigned int HFCMKGNCMCA_TypeDefinitionIndex = 32455;

	class HFCMKGNCMCA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::CBHJJCBDJHA*>* BPJNCMFCKBJ; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HFCMKGNCMCA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HFCMKGNCMCA*>**)UnitySDK::FromName("", "HFCMKGNCMCA")->GetStaticField(0x2A870);
		}

		static ::Google::Protobuf::FieldCodec_1<::CBHJJCBDJHA*>** StaticGet_JFCIBIJLOCN()
		{
			return (::Google::Protobuf::FieldCodec_1<::CBHJJCBDJHA*>**)UnitySDK::FromName("", "HFCMKGNCMCA")->GetStaticField(0x2A878);
		}

		// static const ::System::Object GNPGDFMNEDM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCMKGNCMCA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HFCMKGNCMCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCMKGNCMCA*))((::PBYTE)hIl2Cpp + HFCMKGNCMCA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFCMKGNCMCA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HFCMKGNCMCA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HFCMKGNCMCA*>*(*)())((::PBYTE)hIl2Cpp + HFCMKGNCMCA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCMKGNCMCA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HFCMKGNCMCA* Clone()
		{
			return ((::HFCMKGNCMCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCMKGNCMCA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CBHJJCBDJHA*>* BEMEFIJPBKC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CBHJJCBDJHA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCMKGNCMCA_BEMEFIJPBKC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HFCMKGNCMCA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HFCMKGNCMCA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HFCMKGNCMCA*))((::PBYTE)hIl2Cpp + HFCMKGNCMCA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCMKGNCMCA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCMKGNCMCA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HFCMKGNCMCA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCMKGNCMCA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HFCMKGNCMCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCMKGNCMCA*))((::PBYTE)hIl2Cpp + HFCMKGNCMCA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HFCMKGNCMCA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
