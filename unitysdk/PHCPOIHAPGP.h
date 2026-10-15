#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPHOIPHAPDJ;
class PHCPOIHAPGP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PHCPOIHAPGP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF09EA0)
#define PHCPOIHAPGP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF0A1A0)
#define PHCPOIHAPGP_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF09A20)
#define PHCPOIHAPGP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF09970)
#define PHCPOIHAPGP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF09920)
#define PHCPOIHAPGP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF09C00)
#define PHCPOIHAPGP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF09A80)
#define PHCPOIHAPGP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF09D20)
#define PHCPOIHAPGP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF098B0)
#define PHCPOIHAPGP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF09FE0)
#define PHCPOIHAPGP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF09F40)
#define PHCPOIHAPGP_MJOEMBBMBON_OFFSET UNITYSDK_OFFSET(0x1DF09A70)
#define PHCPOIHAPGP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF09910)
#define PHCPOIHAPGP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF09D90)
#define PHCPOIHAPGP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF09DF0)

inline static constexpr unsigned int PHCPOIHAPGP_TypeDefinitionIndex = 31751;

	class PHCPOIHAPGP : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::CPHOIPHAPDJ*>* CBFGBDBJHID; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::CPHOIPHAPDJ*>** StaticGet_DDFODHOFBIP()
		{
			return (::Google::Protobuf::FieldCodec_1<::CPHOIPHAPDJ*>**)UnitySDK::FromName("", "PHCPOIHAPGP")->GetStaticField(0x33480);
		}

		static ::Google::Protobuf::MessageParser_1<::PHCPOIHAPGP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PHCPOIHAPGP*>**)UnitySDK::FromName("", "PHCPOIHAPGP")->GetStaticField(0x33488);
		}

		// static const ::System::Object IMGDAOEBONP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCPOIHAPGP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PHCPOIHAPGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PHCPOIHAPGP*))((::PBYTE)hIl2Cpp + PHCPOIHAPGP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHCPOIHAPGP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PHCPOIHAPGP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PHCPOIHAPGP*>*(*)())((::PBYTE)hIl2Cpp + PHCPOIHAPGP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCPOIHAPGP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PHCPOIHAPGP* Clone()
		{
			return ((::PHCPOIHAPGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCPOIHAPGP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CPHOIPHAPDJ*>* MJOEMBBMBON()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CPHOIPHAPDJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCPOIHAPGP_MJOEMBBMBON_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PHCPOIHAPGP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PHCPOIHAPGP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PHCPOIHAPGP*))((::PBYTE)hIl2Cpp + PHCPOIHAPGP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCPOIHAPGP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCPOIHAPGP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PHCPOIHAPGP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCPOIHAPGP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PHCPOIHAPGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PHCPOIHAPGP*))((::PBYTE)hIl2Cpp + PHCPOIHAPGP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PHCPOIHAPGP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
