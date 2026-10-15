#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJJPDJAEJHC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FJJPDJAEJHC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E377750)
#define FJJPDJAEJHC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E377A10)
#define FJJPDJAEJHC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3772D0)
#define FJJPDJAEJHC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E377240)
#define FJJPDJAEJHC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3771F0)
#define FJJPDJAEJHC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E377450)
#define FJJPDJAEJHC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E377330)
#define FJJPDJAEJHC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E377540)
#define FJJPDJAEJHC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E377180)
#define FJJPDJAEJHC_KCPKDDMHLEE_OFFSET UNITYSDK_OFFSET(0x1E377320)
#define FJJPDJAEJHC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E377840)
#define FJJPDJAEJHC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3777F0)
#define FJJPDJAEJHC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3771E0)
#define FJJPDJAEJHC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E377640)
#define FJJPDJAEJHC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3776A0)

inline static constexpr unsigned int FJJPDJAEJHC_TypeDefinitionIndex = 27188;

	class FJJPDJAEJHC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BEAEFOFBGGC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FJJPDJAEJHC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FJJPDJAEJHC*>**)UnitySDK::FromName("", "FJJPDJAEJHC")->GetStaticField(0x59EA0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_BNDEKJJNCFO()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "FJJPDJAEJHC")->GetStaticField(0x59EA8);
		}

		// static const ::System::Object JJAOPKFLHBC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJJPDJAEJHC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FJJPDJAEJHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJJPDJAEJHC*))((::PBYTE)hIl2Cpp + FJJPDJAEJHC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJJPDJAEJHC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FJJPDJAEJHC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FJJPDJAEJHC*>*(*)())((::PBYTE)hIl2Cpp + FJJPDJAEJHC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJJPDJAEJHC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FJJPDJAEJHC* Clone()
		{
			return ((::FJJPDJAEJHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJJPDJAEJHC_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KCPKDDMHLEE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJJPDJAEJHC_KCPKDDMHLEE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJJPDJAEJHC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FJJPDJAEJHC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FJJPDJAEJHC*))((::PBYTE)hIl2Cpp + FJJPDJAEJHC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJJPDJAEJHC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJJPDJAEJHC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FJJPDJAEJHC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJJPDJAEJHC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FJJPDJAEJHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJJPDJAEJHC*))((::PBYTE)hIl2Cpp + FJJPDJAEJHC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FJJPDJAEJHC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
