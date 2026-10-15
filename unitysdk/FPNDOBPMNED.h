#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPNDOBPMNED;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FPNDOBPMNED_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3E1AF0)
#define FPNDOBPMNED_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3E1DB0)
#define FPNDOBPMNED_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3E1670)
#define FPNDOBPMNED_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3E15E0)
#define FPNDOBPMNED_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3E1590)
#define FPNDOBPMNED_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3E17F0)
#define FPNDOBPMNED_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3E16D0)
#define FPNDOBPMNED_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3E18E0)
#define FPNDOBPMNED_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3E1520)
#define FPNDOBPMNED_JNPLBLHMIPP_OFFSET UNITYSDK_OFFSET(0x1E3E16C0)
#define FPNDOBPMNED_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3E1BE0)
#define FPNDOBPMNED_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3E1B90)
#define FPNDOBPMNED_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3E1580)
#define FPNDOBPMNED_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3E19E0)
#define FPNDOBPMNED_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3E1A40)

inline static constexpr unsigned int FPNDOBPMNED_TypeDefinitionIndex = 33489;

	class FPNDOBPMNED : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BBCCLPMCMKP; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_LIFAFKEPHIB()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "FPNDOBPMNED")->GetStaticField(0x5FD10);
		}

		static ::Google::Protobuf::MessageParser_1<::FPNDOBPMNED*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FPNDOBPMNED*>**)UnitySDK::FromName("", "FPNDOBPMNED")->GetStaticField(0x5FD18);
		}

		// static const ::System::Object PBEGNMKHBOA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPNDOBPMNED_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FPNDOBPMNED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPNDOBPMNED*))((::PBYTE)hIl2Cpp + FPNDOBPMNED_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPNDOBPMNED_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FPNDOBPMNED*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FPNDOBPMNED*>*(*)())((::PBYTE)hIl2Cpp + FPNDOBPMNED_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPNDOBPMNED_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FPNDOBPMNED* Clone()
		{
			return ((::FPNDOBPMNED*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPNDOBPMNED_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JNPLBLHMIPP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPNDOBPMNED_JNPLBLHMIPP_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FPNDOBPMNED_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FPNDOBPMNED* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FPNDOBPMNED*))((::PBYTE)hIl2Cpp + FPNDOBPMNED_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPNDOBPMNED_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPNDOBPMNED_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FPNDOBPMNED_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPNDOBPMNED_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FPNDOBPMNED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPNDOBPMNED*))((::PBYTE)hIl2Cpp + FPNDOBPMNED_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FPNDOBPMNED_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
