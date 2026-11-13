#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJEMMEGKKHE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FJEMMEGKKHE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x206A6DA0)
#define FJEMMEGKKHE_CCTOR_OFFSET UNITYSDK_OFFSET(0x206A7060)
#define FJEMMEGKKHE_CLONE_OFFSET UNITYSDK_OFFSET(0x206A6920)
#define FJEMMEGKKHE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x206A6890)
#define FJEMMEGKKHE_CTOR_OFFSET UNITYSDK_OFFSET(0x206A6840)
#define FJEMMEGKKHE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x206A6AA0)
#define FJEMMEGKKHE_EQUALS_OFFSET UNITYSDK_OFFSET(0x206A6980)
#define FJEMMEGKKHE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x206A6B90)
#define FJEMMEGKKHE_HJEEPKPKFBJ_OFFSET UNITYSDK_OFFSET(0x206A6970)
#define FJEMMEGKKHE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x206A67D0)
#define FJEMMEGKKHE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x206A6E90)
#define FJEMMEGKKHE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x206A6E40)
#define FJEMMEGKKHE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x206A6830)
#define FJEMMEGKKHE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x206A6C90)
#define FJEMMEGKKHE_WRITETO_OFFSET UNITYSDK_OFFSET(0x206A6CF0)

inline static constexpr unsigned int FJEMMEGKKHE_TypeDefinitionIndex = 31626;

	class FJEMMEGKKHE : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LOHADPOLAPA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FJEMMEGKKHE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FJEMMEGKKHE*>**)UnitySDK::FromName("", "FJEMMEGKKHE")->GetStaticField(0x446B0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_DJINLPOAHKD()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "FJEMMEGKKHE")->GetStaticField(0x446B8);
		}

		// static const ::System::Object BBPBPCEKLAF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEMMEGKKHE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FJEMMEGKKHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJEMMEGKKHE*))((::PBYTE)hIl2Cpp + FJEMMEGKKHE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJEMMEGKKHE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FJEMMEGKKHE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FJEMMEGKKHE*>*(*)())((::PBYTE)hIl2Cpp + FJEMMEGKKHE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEMMEGKKHE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FJEMMEGKKHE* Clone()
		{
			return ((::FJEMMEGKKHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEMMEGKKHE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HJEEPKPKFBJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEMMEGKKHE_HJEEPKPKFBJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJEMMEGKKHE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FJEMMEGKKHE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FJEMMEGKKHE*))((::PBYTE)hIl2Cpp + FJEMMEGKKHE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEMMEGKKHE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEMMEGKKHE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FJEMMEGKKHE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEMMEGKKHE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FJEMMEGKKHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJEMMEGKKHE*))((::PBYTE)hIl2Cpp + FJEMMEGKKHE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FJEMMEGKKHE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
