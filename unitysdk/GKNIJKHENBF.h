#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKNIJKHENBF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GKNIJKHENBF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E48D890)
#define GKNIJKHENBF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E48DAB0)
#define GKNIJKHENBF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E48D360)
#define GKNIJKHENBF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E48D270)
#define GKNIJKHENBF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E48D1E0)
#define GKNIJKHENBF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E48D4C0)
#define GKNIJKHENBF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E48D3B0)
#define GKNIJKHENBF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E48D5D0)
#define GKNIJKHENBF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E48D1A0)
#define GKNIJKHENBF_JKGOHPNHLNP_OFFSET UNITYSDK_OFFSET(0x1E48D390)
#define GKNIJKHENBF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E48D980)
#define GKNIJKHENBF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E48D920)
#define GKNIJKHENBF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E48D1D0)
#define GKNIJKHENBF_PHIFJHBLBBP_OFFSET UNITYSDK_OFFSET(0x1E48D3A0)
#define GKNIJKHENBF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E48D790)
#define GKNIJKHENBF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E48D7F0)

inline static constexpr unsigned int GKNIJKHENBF_TypeDefinitionIndex = 29667;

	class GKNIJKHENBF : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DLCKIFFBHHH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KFHEIHFAOMD; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_GPLIBLDFPPN()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GKNIJKHENBF")->GetStaticField(0x1C270);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KIAHDMNKEIJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GKNIJKHENBF")->GetStaticField(0x1C278);
		}

		static ::Google::Protobuf::MessageParser_1<::GKNIJKHENBF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GKNIJKHENBF*>**)UnitySDK::FromName("", "GKNIJKHENBF")->GetStaticField(0x1C280);
		}

		// static const ::System::Object FMNJDNIBAPO; // 0x0
		// static const ::System::Object JOIBMLLAOKP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNIJKHENBF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GKNIJKHENBF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKNIJKHENBF*))((::PBYTE)hIl2Cpp + GKNIJKHENBF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKNIJKHENBF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GKNIJKHENBF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GKNIJKHENBF*>*(*)())((::PBYTE)hIl2Cpp + GKNIJKHENBF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNIJKHENBF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GKNIJKHENBF* Clone()
		{
			return ((::GKNIJKHENBF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNIJKHENBF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JKGOHPNHLNP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNIJKHENBF_JKGOHPNHLNP_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PHIFJHBLBBP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNIJKHENBF_PHIFJHBLBBP_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GKNIJKHENBF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GKNIJKHENBF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GKNIJKHENBF*))((::PBYTE)hIl2Cpp + GKNIJKHENBF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNIJKHENBF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNIJKHENBF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GKNIJKHENBF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNIJKHENBF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GKNIJKHENBF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKNIJKHENBF*))((::PBYTE)hIl2Cpp + GKNIJKHENBF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GKNIJKHENBF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
