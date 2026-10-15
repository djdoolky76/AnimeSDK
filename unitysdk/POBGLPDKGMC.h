#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class POBGLPDKGMC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define POBGLPDKGMC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFC2F20)
#define POBGLPDKGMC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFC3180)
#define POBGLPDKGMC_CELHBGJBNJJ_OFFSET UNITYSDK_OFFSET(0x1DFC2B50)
#define POBGLPDKGMC_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFC2B20)
#define POBGLPDKGMC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFC2A90)
#define POBGLPDKGMC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFC2A40)
#define POBGLPDKGMC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFC2C50)
#define POBGLPDKGMC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFC2B60)
#define POBGLPDKGMC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFC2D40)
#define POBGLPDKGMC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFC2A00)
#define POBGLPDKGMC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFC2FE0)
#define POBGLPDKGMC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFC2F90)
#define POBGLPDKGMC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFC2A30)
#define POBGLPDKGMC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFC2E40)
#define POBGLPDKGMC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFC2EA0)

inline static constexpr unsigned int POBGLPDKGMC_TypeDefinitionIndex = 26468;

	class POBGLPDKGMC : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MPICOJNJOFP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_NFHMNLHELGG()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "POBGLPDKGMC")->GetStaticField(0x52740);
		}

		static ::Google::Protobuf::MessageParser_1<::POBGLPDKGMC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::POBGLPDKGMC*>**)UnitySDK::FromName("", "POBGLPDKGMC")->GetStaticField(0x52748);
		}

		// static const ::System::Object NLCNKPGNAGB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POBGLPDKGMC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::POBGLPDKGMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POBGLPDKGMC*))((::PBYTE)hIl2Cpp + POBGLPDKGMC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POBGLPDKGMC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::POBGLPDKGMC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::POBGLPDKGMC*>*(*)())((::PBYTE)hIl2Cpp + POBGLPDKGMC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + POBGLPDKGMC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::POBGLPDKGMC* Clone()
		{
			return ((::POBGLPDKGMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + POBGLPDKGMC_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CELHBGJBNJJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + POBGLPDKGMC_CELHBGJBNJJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + POBGLPDKGMC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::POBGLPDKGMC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::POBGLPDKGMC*))((::PBYTE)hIl2Cpp + POBGLPDKGMC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POBGLPDKGMC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + POBGLPDKGMC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + POBGLPDKGMC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POBGLPDKGMC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::POBGLPDKGMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POBGLPDKGMC*))((::PBYTE)hIl2Cpp + POBGLPDKGMC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + POBGLPDKGMC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
