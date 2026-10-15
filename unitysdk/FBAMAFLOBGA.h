#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBAMAFLOBGA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FBAMAFLOBGA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E300410)
#define FBAMAFLOBGA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E300740)
#define FBAMAFLOBGA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2FFF10)
#define FBAMAFLOBGA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2FFE80)
#define FBAMAFLOBGA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2FFE30)
#define FBAMAFLOBGA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3000C0)
#define FBAMAFLOBGA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2FFF90)
#define FBAMAFLOBGA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3001B0)
#define FBAMAFLOBGA_HKEOLEMDKKL_OFFSET UNITYSDK_OFFSET(0x1E2FFF80)
#define FBAMAFLOBGA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2FFDC0)
#define FBAMAFLOBGA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E300570)
#define FBAMAFLOBGA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E300520)
#define FBAMAFLOBGA_MFDGNAJMGLB_OFFSET UNITYSDK_OFFSET(0x1E2FFF70)
#define FBAMAFLOBGA_NOHEIINLGMA_OFFSET UNITYSDK_OFFSET(0x1E2FFF60)
#define FBAMAFLOBGA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2FFE20)
#define FBAMAFLOBGA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3002B0)
#define FBAMAFLOBGA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E300310)

inline static constexpr unsigned int FBAMAFLOBGA_TypeDefinitionIndex = 26957;

	class FBAMAFLOBGA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KAFIFNEDHFF; // 0x18
		::System::UInt32 ABPDPMHFFNN; // 0x20
		static ::Google::Protobuf::MessageParser_1<::FBAMAFLOBGA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FBAMAFLOBGA*>**)UnitySDK::FromName("", "FBAMAFLOBGA")->GetStaticField(0x4DA90);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_OMODMLGBAPL()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "FBAMAFLOBGA")->GetStaticField(0x4DA98);
		}

		// static const ::System::Object EDGGGCNOFHI; // 0x0
		// static const ::System::Object DLKCAAKGAJG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMAFLOBGA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FBAMAFLOBGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBAMAFLOBGA*))((::PBYTE)hIl2Cpp + FBAMAFLOBGA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBAMAFLOBGA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FBAMAFLOBGA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FBAMAFLOBGA*>*(*)())((::PBYTE)hIl2Cpp + FBAMAFLOBGA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMAFLOBGA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FBAMAFLOBGA* Clone()
		{
			return ((::FBAMAFLOBGA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMAFLOBGA_CLONE_OFFSET))(this);
		}

		::System::UInt32 NOHEIINLGMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMAFLOBGA_NOHEIINLGMA_OFFSET))(this);
		}

		::System::Void MFDGNAJMGLB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FBAMAFLOBGA_MFDGNAJMGLB_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HKEOLEMDKKL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMAFLOBGA_HKEOLEMDKKL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBAMAFLOBGA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FBAMAFLOBGA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FBAMAFLOBGA*))((::PBYTE)hIl2Cpp + FBAMAFLOBGA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMAFLOBGA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMAFLOBGA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FBAMAFLOBGA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMAFLOBGA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FBAMAFLOBGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBAMAFLOBGA*))((::PBYTE)hIl2Cpp + FBAMAFLOBGA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FBAMAFLOBGA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
