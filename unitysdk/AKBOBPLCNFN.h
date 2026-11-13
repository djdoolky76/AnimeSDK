#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AKBOBPLCNFN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AKBOBPLCNFN_CABNIPPLDOI_OFFSET UNITYSDK_OFFSET(0x206376C0)
#define AKBOBPLCNFN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20637A90)
#define AKBOBPLCNFN_CCTOR_OFFSET UNITYSDK_OFFSET(0x20637CF0)
#define AKBOBPLCNFN_CLONE_OFFSET UNITYSDK_OFFSET(0x20637690)
#define AKBOBPLCNFN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20637600)
#define AKBOBPLCNFN_CTOR_OFFSET UNITYSDK_OFFSET(0x206375B0)
#define AKBOBPLCNFN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x206377C0)
#define AKBOBPLCNFN_EQUALS_OFFSET UNITYSDK_OFFSET(0x206376D0)
#define AKBOBPLCNFN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x206378B0)
#define AKBOBPLCNFN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20637570)
#define AKBOBPLCNFN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20637B50)
#define AKBOBPLCNFN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20637B00)
#define AKBOBPLCNFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x206375A0)
#define AKBOBPLCNFN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x206379B0)
#define AKBOBPLCNFN_WRITETO_OFFSET UNITYSDK_OFFSET(0x20637A10)

inline static constexpr unsigned int AKBOBPLCNFN_TypeDefinitionIndex = 35554;

	class AKBOBPLCNFN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BAFCDDLPJDA; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_LEFBBKKFLKN()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "AKBOBPLCNFN")->GetStaticField(0x32350);
		}

		static ::Google::Protobuf::MessageParser_1<::AKBOBPLCNFN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AKBOBPLCNFN*>**)UnitySDK::FromName("", "AKBOBPLCNFN")->GetStaticField(0x32358);
		}

		// static const ::System::Object NKNFFPBDPJP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBOBPLCNFN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AKBOBPLCNFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AKBOBPLCNFN*))((::PBYTE)hIl2Cpp + AKBOBPLCNFN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKBOBPLCNFN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AKBOBPLCNFN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AKBOBPLCNFN*>*(*)())((::PBYTE)hIl2Cpp + AKBOBPLCNFN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBOBPLCNFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AKBOBPLCNFN* Clone()
		{
			return ((::AKBOBPLCNFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBOBPLCNFN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CABNIPPLDOI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBOBPLCNFN_CABNIPPLDOI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AKBOBPLCNFN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AKBOBPLCNFN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AKBOBPLCNFN*))((::PBYTE)hIl2Cpp + AKBOBPLCNFN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBOBPLCNFN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBOBPLCNFN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AKBOBPLCNFN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBOBPLCNFN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AKBOBPLCNFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AKBOBPLCNFN*))((::PBYTE)hIl2Cpp + AKBOBPLCNFN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AKBOBPLCNFN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
