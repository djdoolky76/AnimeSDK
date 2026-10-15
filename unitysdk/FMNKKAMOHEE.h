#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMNKKAMOHEE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FMNKKAMOHEE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3E9970)
#define FMNKKAMOHEE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3E9BD0)
#define FMNKKAMOHEE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3E9570)
#define FMNKKAMOHEE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3E94E0)
#define FMNKKAMOHEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3E9490)
#define FMNKKAMOHEE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3E96A0)
#define FMNKKAMOHEE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3E95B0)
#define FMNKKAMOHEE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3E9790)
#define FMNKKAMOHEE_HPOBPDNKDHO_OFFSET UNITYSDK_OFFSET(0x1E3E95A0)
#define FMNKKAMOHEE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3E9450)
#define FMNKKAMOHEE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3E9A30)
#define FMNKKAMOHEE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3E99E0)
#define FMNKKAMOHEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3E9480)
#define FMNKKAMOHEE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3E9890)
#define FMNKKAMOHEE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3E98F0)

inline static constexpr unsigned int FMNKKAMOHEE_TypeDefinitionIndex = 29633;

	class FMNKKAMOHEE : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OKKIHMJKDMK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_GFBHBNILMEF()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "FMNKKAMOHEE")->GetStaticField(0x64EA0);
		}

		static ::Google::Protobuf::MessageParser_1<::FMNKKAMOHEE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FMNKKAMOHEE*>**)UnitySDK::FromName("", "FMNKKAMOHEE")->GetStaticField(0x64EA8);
		}

		// static const ::System::Object CNAEAKHGFLN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMNKKAMOHEE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FMNKKAMOHEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMNKKAMOHEE*))((::PBYTE)hIl2Cpp + FMNKKAMOHEE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMNKKAMOHEE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FMNKKAMOHEE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FMNKKAMOHEE*>*(*)())((::PBYTE)hIl2Cpp + FMNKKAMOHEE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMNKKAMOHEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FMNKKAMOHEE* Clone()
		{
			return ((::FMNKKAMOHEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMNKKAMOHEE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HPOBPDNKDHO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMNKKAMOHEE_HPOBPDNKDHO_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FMNKKAMOHEE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FMNKKAMOHEE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FMNKKAMOHEE*))((::PBYTE)hIl2Cpp + FMNKKAMOHEE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMNKKAMOHEE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMNKKAMOHEE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FMNKKAMOHEE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMNKKAMOHEE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FMNKKAMOHEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMNKKAMOHEE*))((::PBYTE)hIl2Cpp + FMNKKAMOHEE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FMNKKAMOHEE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
