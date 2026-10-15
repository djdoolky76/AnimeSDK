#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CELLCCKJIGL;
class EACCOJLOPJL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EACCOJLOPJL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E222B90)
#define EACCOJLOPJL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E222E90)
#define EACCOJLOPJL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E222710)
#define EACCOJLOPJL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E222660)
#define EACCOJLOPJL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E222610)
#define EACCOJLOPJL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2228F0)
#define EACCOJLOPJL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E222770)
#define EACCOJLOPJL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E222A10)
#define EACCOJLOPJL_GNDBDDFMHJL_OFFSET UNITYSDK_OFFSET(0x1E222760)
#define EACCOJLOPJL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2225A0)
#define EACCOJLOPJL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E222CD0)
#define EACCOJLOPJL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E222C30)
#define EACCOJLOPJL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E222600)
#define EACCOJLOPJL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E222A80)
#define EACCOJLOPJL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E222AE0)

inline static constexpr unsigned int EACCOJLOPJL_TypeDefinitionIndex = 28696;

	class EACCOJLOPJL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::CELLCCKJIGL*>* OIKIOKFCGOE; // 0x18
		static ::Google::Protobuf::MessageParser_1<::EACCOJLOPJL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EACCOJLOPJL*>**)UnitySDK::FromName("", "EACCOJLOPJL")->GetStaticField(0x34A30);
		}

		static ::Google::Protobuf::FieldCodec_1<::CELLCCKJIGL*>** StaticGet_MDFFKGEHGHN()
		{
			return (::Google::Protobuf::FieldCodec_1<::CELLCCKJIGL*>**)UnitySDK::FromName("", "EACCOJLOPJL")->GetStaticField(0x34A38);
		}

		// static const ::System::Object CEMLGOIGOLD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EACCOJLOPJL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EACCOJLOPJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EACCOJLOPJL*))((::PBYTE)hIl2Cpp + EACCOJLOPJL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EACCOJLOPJL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EACCOJLOPJL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EACCOJLOPJL*>*(*)())((::PBYTE)hIl2Cpp + EACCOJLOPJL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EACCOJLOPJL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EACCOJLOPJL* Clone()
		{
			return ((::EACCOJLOPJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + EACCOJLOPJL_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CELLCCKJIGL*>* GNDBDDFMHJL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CELLCCKJIGL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EACCOJLOPJL_GNDBDDFMHJL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EACCOJLOPJL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EACCOJLOPJL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EACCOJLOPJL*))((::PBYTE)hIl2Cpp + EACCOJLOPJL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EACCOJLOPJL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EACCOJLOPJL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EACCOJLOPJL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EACCOJLOPJL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EACCOJLOPJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EACCOJLOPJL*))((::PBYTE)hIl2Cpp + EACCOJLOPJL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EACCOJLOPJL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
