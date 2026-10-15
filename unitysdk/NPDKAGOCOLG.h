#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NPDKAGOCOLG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NPDKAGOCOLG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB67790)
#define NPDKAGOCOLG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB67A50)
#define NPDKAGOCOLG_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB67310)
#define NPDKAGOCOLG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB67280)
#define NPDKAGOCOLG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB67230)
#define NPDKAGOCOLG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB67490)
#define NPDKAGOCOLG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB67370)
#define NPDKAGOCOLG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB67580)
#define NPDKAGOCOLG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB671C0)
#define NPDKAGOCOLG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB67880)
#define NPDKAGOCOLG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB67830)
#define NPDKAGOCOLG_NEEOIEDAOJO_OFFSET UNITYSDK_OFFSET(0x1EB67360)
#define NPDKAGOCOLG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB67220)
#define NPDKAGOCOLG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB67680)
#define NPDKAGOCOLG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB676E0)

inline static constexpr unsigned int NPDKAGOCOLG_TypeDefinitionIndex = 27500;

	class NPDKAGOCOLG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KEIFLLJDAOH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_BAKOLFINKIN()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "NPDKAGOCOLG")->GetStaticField(0xC8B0);
		}

		static ::Google::Protobuf::MessageParser_1<::NPDKAGOCOLG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NPDKAGOCOLG*>**)UnitySDK::FromName("", "NPDKAGOCOLG")->GetStaticField(0xC8B8);
		}

		// static const ::System::Object APCIMHDNEJF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPDKAGOCOLG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NPDKAGOCOLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPDKAGOCOLG*))((::PBYTE)hIl2Cpp + NPDKAGOCOLG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPDKAGOCOLG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NPDKAGOCOLG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NPDKAGOCOLG*>*(*)())((::PBYTE)hIl2Cpp + NPDKAGOCOLG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPDKAGOCOLG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NPDKAGOCOLG* Clone()
		{
			return ((::NPDKAGOCOLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPDKAGOCOLG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NEEOIEDAOJO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPDKAGOCOLG_NEEOIEDAOJO_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPDKAGOCOLG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NPDKAGOCOLG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPDKAGOCOLG*))((::PBYTE)hIl2Cpp + NPDKAGOCOLG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPDKAGOCOLG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPDKAGOCOLG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NPDKAGOCOLG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPDKAGOCOLG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NPDKAGOCOLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPDKAGOCOLG*))((::PBYTE)hIl2Cpp + NPDKAGOCOLG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NPDKAGOCOLG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
