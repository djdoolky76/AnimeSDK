#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABFLKIBIFDM;
class HFFAFBIGNKP;
class HPHJPOIBGLC;
class JPKJNNKMIGJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HPHJPOIBGLC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5F7400)
#define HPHJPOIBGLC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5F7960)
#define HPHJPOIBGLC_CJFDIDEFAIA_OFFSET UNITYSDK_OFFSET(0x1E5F6FE0)
#define HPHJPOIBGLC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5F6F80)
#define HPHJPOIBGLC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5F6EC0)
#define HPHJPOIBGLC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5F6E20)
#define HPHJPOIBGLC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5F7060)
#define HPHJPOIBGLC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5F7000)
#define HPHJPOIBGLC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5F71D0)
#define HPHJPOIBGLC_HFJMHNFJEGN_OFFSET UNITYSDK_OFFSET(0x1E5F6FD0)
#define HPHJPOIBGLC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5F6DB0)
#define HPHJPOIBGLC_LLMHILPKIMA_OFFSET UNITYSDK_OFFSET(0x1E5F6FF0)
#define HPHJPOIBGLC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5F7660)
#define HPHJPOIBGLC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5F7510)
#define HPHJPOIBGLC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5F6E10)
#define HPHJPOIBGLC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5F7280)
#define HPHJPOIBGLC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5F72E0)

inline static constexpr unsigned int HPHJPOIBGLC_TypeDefinitionIndex = 25594;

	class HPHJPOIBGLC : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::JPKJNNKMIGJ*>* EALDHHCKJKJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::HFFAFBIGNKP*>* IELNCMEOFDN; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::ABFLKIBIFDM*>* PEINDFOIPEF; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::ABFLKIBIFDM*>** StaticGet_KMBEIDKADBO()
		{
			return (::Google::Protobuf::FieldCodec_1<::ABFLKIBIFDM*>**)UnitySDK::FromName("", "HPHJPOIBGLC")->GetStaticField(0x50D30);
		}

		static ::Google::Protobuf::FieldCodec_1<::HFFAFBIGNKP*>** StaticGet_MGENHEBJFMN()
		{
			return (::Google::Protobuf::FieldCodec_1<::HFFAFBIGNKP*>**)UnitySDK::FromName("", "HPHJPOIBGLC")->GetStaticField(0x50D38);
		}

		static ::Google::Protobuf::MessageParser_1<::HPHJPOIBGLC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HPHJPOIBGLC*>**)UnitySDK::FromName("", "HPHJPOIBGLC")->GetStaticField(0x50D40);
		}

		static ::Google::Protobuf::FieldCodec_1<::JPKJNNKMIGJ*>** StaticGet_DKFBPNOKJDD()
		{
			return (::Google::Protobuf::FieldCodec_1<::JPKJNNKMIGJ*>**)UnitySDK::FromName("", "HPHJPOIBGLC")->GetStaticField(0x50D48);
		}

		// static const ::System::Object IFNIOECONED; // 0x0
		// static const ::System::Object BDEPANLNMBB; // 0x0
		// static const ::System::Object KBBMLPNFEKP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHJPOIBGLC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HPHJPOIBGLC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPHJPOIBGLC*))((::PBYTE)hIl2Cpp + HPHJPOIBGLC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPHJPOIBGLC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HPHJPOIBGLC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HPHJPOIBGLC*>*(*)())((::PBYTE)hIl2Cpp + HPHJPOIBGLC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHJPOIBGLC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HPHJPOIBGLC* Clone()
		{
			return ((::HPHJPOIBGLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHJPOIBGLC_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HFFAFBIGNKP*>* HFJMHNFJEGN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HFFAFBIGNKP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHJPOIBGLC_HFJMHNFJEGN_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::ABFLKIBIFDM*>* CJFDIDEFAIA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::ABFLKIBIFDM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHJPOIBGLC_CJFDIDEFAIA_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JPKJNNKMIGJ*>* LLMHILPKIMA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JPKJNNKMIGJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHJPOIBGLC_LLMHILPKIMA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HPHJPOIBGLC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HPHJPOIBGLC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HPHJPOIBGLC*))((::PBYTE)hIl2Cpp + HPHJPOIBGLC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHJPOIBGLC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHJPOIBGLC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HPHJPOIBGLC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHJPOIBGLC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HPHJPOIBGLC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPHJPOIBGLC*))((::PBYTE)hIl2Cpp + HPHJPOIBGLC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HPHJPOIBGLC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
