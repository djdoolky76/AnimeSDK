#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCGDLIAMDLA;
class MBMAGILKFGP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MBMAGILKFGP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9EA1B0)
#define MBMAGILKFGP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9EA4B0)
#define MBMAGILKFGP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9E9D30)
#define MBMAGILKFGP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9E9C80)
#define MBMAGILKFGP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9E9C30)
#define MBMAGILKFGP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9E9F10)
#define MBMAGILKFGP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9E9D90)
#define MBMAGILKFGP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9EA030)
#define MBMAGILKFGP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9E9BC0)
#define MBMAGILKFGP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9EA2F0)
#define MBMAGILKFGP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9EA250)
#define MBMAGILKFGP_OAHNAKPBCJB_OFFSET UNITYSDK_OFFSET(0x1E9E9D80)
#define MBMAGILKFGP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9E9C20)
#define MBMAGILKFGP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9EA0A0)
#define MBMAGILKFGP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9EA100)

inline static constexpr unsigned int MBMAGILKFGP_TypeDefinitionIndex = 31867;

	class MBMAGILKFGP : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::HCGDLIAMDLA*>* OEDKLLLGDOB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_AMDAGLAFDHE()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "MBMAGILKFGP")->GetStaticField(0x45220);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MBMAGILKFGP")->GetStaticField(0x45228);
		}

		// static const ::System::Object OBEKLIBEEJM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMAGILKFGP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MBMAGILKFGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBMAGILKFGP*))((::PBYTE)hIl2Cpp + MBMAGILKFGP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBMAGILKFGP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MBMAGILKFGP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMAGILKFGP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MBMAGILKFGP* Clone()
		{
			return ((::MBMAGILKFGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMAGILKFGP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HCGDLIAMDLA*>* OAHNAKPBCJB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HCGDLIAMDLA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMAGILKFGP_OAHNAKPBCJB_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MBMAGILKFGP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MBMAGILKFGP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MBMAGILKFGP*))((::PBYTE)hIl2Cpp + MBMAGILKFGP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMAGILKFGP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMAGILKFGP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MBMAGILKFGP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMAGILKFGP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MBMAGILKFGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBMAGILKFGP*))((::PBYTE)hIl2Cpp + MBMAGILKFGP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MBMAGILKFGP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
