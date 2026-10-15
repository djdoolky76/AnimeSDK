#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BIDBPLDFGNK;
class NLNKIGMDODK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BIDBPLDFGNK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE00B00)
#define BIDBPLDFGNK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE00E00)
#define BIDBPLDFGNK_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE006E0)
#define BIDBPLDFGNK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE00630)
#define BIDBPLDFGNK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE005E0)
#define BIDBPLDFGNK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE00860)
#define BIDBPLDFGNK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE00720)
#define BIDBPLDFGNK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE00980)
#define BIDBPLDFGNK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE005A0)
#define BIDBPLDFGNK_KOEGKBKIMPK_OFFSET UNITYSDK_OFFSET(0x1DE00710)
#define BIDBPLDFGNK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE00C40)
#define BIDBPLDFGNK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE00BA0)
#define BIDBPLDFGNK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE005D0)
#define BIDBPLDFGNK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE009F0)
#define BIDBPLDFGNK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE00A50)

inline static constexpr unsigned int BIDBPLDFGNK_TypeDefinitionIndex = 32070;

	class BIDBPLDFGNK : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::NLNKIGMDODK*>* HEOONNDABJI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::BIDBPLDFGNK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BIDBPLDFGNK*>**)UnitySDK::FromName("", "BIDBPLDFGNK")->GetStaticField(0x47F80);
		}

		static ::Google::Protobuf::FieldCodec_1<::NLNKIGMDODK*>** StaticGet_DLEENKPIHDK()
		{
			return (::Google::Protobuf::FieldCodec_1<::NLNKIGMDODK*>**)UnitySDK::FromName("", "BIDBPLDFGNK")->GetStaticField(0x47F88);
		}

		// static const ::System::Object BBDEHGCEJOO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDBPLDFGNK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BIDBPLDFGNK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIDBPLDFGNK*))((::PBYTE)hIl2Cpp + BIDBPLDFGNK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BIDBPLDFGNK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BIDBPLDFGNK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BIDBPLDFGNK*>*(*)())((::PBYTE)hIl2Cpp + BIDBPLDFGNK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDBPLDFGNK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BIDBPLDFGNK* Clone()
		{
			return ((::BIDBPLDFGNK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDBPLDFGNK_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NLNKIGMDODK*>* KOEGKBKIMPK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NLNKIGMDODK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDBPLDFGNK_KOEGKBKIMPK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BIDBPLDFGNK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BIDBPLDFGNK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BIDBPLDFGNK*))((::PBYTE)hIl2Cpp + BIDBPLDFGNK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDBPLDFGNK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDBPLDFGNK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BIDBPLDFGNK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDBPLDFGNK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BIDBPLDFGNK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIDBPLDFGNK*))((::PBYTE)hIl2Cpp + BIDBPLDFGNK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BIDBPLDFGNK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
