#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IAKFBFJCHFB;
class IEDLKIGJLEM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IEDLKIGJLEM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E636770)
#define IEDLKIGJLEM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E636A70)
#define IEDLKIGJLEM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6362F0)
#define IEDLKIGJLEM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E636240)
#define IEDLKIGJLEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6361F0)
#define IEDLKIGJLEM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6364D0)
#define IEDLKIGJLEM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E636350)
#define IEDLKIGJLEM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6365F0)
#define IEDLKIGJLEM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E636180)
#define IEDLKIGJLEM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6368B0)
#define IEDLKIGJLEM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E636810)
#define IEDLKIGJLEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6361E0)
#define IEDLKIGJLEM_PCEFJAAMPNO_OFFSET UNITYSDK_OFFSET(0x1E636340)
#define IEDLKIGJLEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E636660)
#define IEDLKIGJLEM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6366C0)

inline static constexpr unsigned int IEDLKIGJLEM_TypeDefinitionIndex = 34704;

	class IEDLKIGJLEM : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::IAKFBFJCHFB*>* JMAKOGFJONL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::IEDLKIGJLEM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IEDLKIGJLEM*>**)UnitySDK::FromName("", "IEDLKIGJLEM")->GetStaticField(0x47BE0);
		}

		static ::Google::Protobuf::FieldCodec_1<::IAKFBFJCHFB*>** StaticGet_MGLPOKJOOMC()
		{
			return (::Google::Protobuf::FieldCodec_1<::IAKFBFJCHFB*>**)UnitySDK::FromName("", "IEDLKIGJLEM")->GetStaticField(0x47BE8);
		}

		// static const ::System::Object HDFDJHCLAHG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDLKIGJLEM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IEDLKIGJLEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IEDLKIGJLEM*))((::PBYTE)hIl2Cpp + IEDLKIGJLEM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEDLKIGJLEM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IEDLKIGJLEM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IEDLKIGJLEM*>*(*)())((::PBYTE)hIl2Cpp + IEDLKIGJLEM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDLKIGJLEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IEDLKIGJLEM* Clone()
		{
			return ((::IEDLKIGJLEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDLKIGJLEM_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::IAKFBFJCHFB*>* PCEFJAAMPNO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::IAKFBFJCHFB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDLKIGJLEM_PCEFJAAMPNO_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IEDLKIGJLEM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IEDLKIGJLEM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IEDLKIGJLEM*))((::PBYTE)hIl2Cpp + IEDLKIGJLEM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDLKIGJLEM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDLKIGJLEM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IEDLKIGJLEM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDLKIGJLEM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IEDLKIGJLEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IEDLKIGJLEM*))((::PBYTE)hIl2Cpp + IEDLKIGJLEM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IEDLKIGJLEM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
