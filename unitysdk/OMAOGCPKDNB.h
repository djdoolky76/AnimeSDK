#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMAOGCPKDNB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OMAOGCPKDNB_BJMGFMBOCDF_OFFSET UNITYSDK_OFFSET(0x1DEAF300)
#define OMAOGCPKDNB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEAF740)
#define OMAOGCPKDNB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEAFA30)
#define OMAOGCPKDNB_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEAF2B0)
#define OMAOGCPKDNB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEAF220)
#define OMAOGCPKDNB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEAF1D0)
#define OMAOGCPKDNB_EILPOOIECLM_OFFSET UNITYSDK_OFFSET(0x1DEAF2E0)
#define OMAOGCPKDNB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEAF410)
#define OMAOGCPKDNB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEAF310)
#define OMAOGCPKDNB_FCCBPNELKAN_OFFSET UNITYSDK_OFFSET(0x1DEAF2F0)
#define OMAOGCPKDNB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEAF500)
#define OMAOGCPKDNB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEAF190)
#define OMAOGCPKDNB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEAF870)
#define OMAOGCPKDNB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEAF820)
#define OMAOGCPKDNB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEAF1C0)
#define OMAOGCPKDNB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEAF600)
#define OMAOGCPKDNB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEAF660)

inline static constexpr unsigned int OMAOGCPKDNB_TypeDefinitionIndex = 32988;

	class OMAOGCPKDNB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CGNCOPDOJAL; // 0x18
		::System::UInt32 NIAOPCJHKCG; // 0x20
		static ::Google::Protobuf::MessageParser_1<::OMAOGCPKDNB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OMAOGCPKDNB*>**)UnitySDK::FromName("", "OMAOGCPKDNB")->GetStaticField(0x24770);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FJMHKFLEKLD()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "OMAOGCPKDNB")->GetStaticField(0x24778);
		}

		// static const ::System::Object FDDDLMBHDMC; // 0x0
		// static const ::System::Object IBDPEAHADPF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMAOGCPKDNB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OMAOGCPKDNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMAOGCPKDNB*))((::PBYTE)hIl2Cpp + OMAOGCPKDNB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMAOGCPKDNB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OMAOGCPKDNB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OMAOGCPKDNB*>*(*)())((::PBYTE)hIl2Cpp + OMAOGCPKDNB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMAOGCPKDNB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OMAOGCPKDNB* Clone()
		{
			return ((::OMAOGCPKDNB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMAOGCPKDNB_CLONE_OFFSET))(this);
		}

		::System::UInt32 EILPOOIECLM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMAOGCPKDNB_EILPOOIECLM_OFFSET))(this);
		}

		::System::Void FCCBPNELKAN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OMAOGCPKDNB_FCCBPNELKAN_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BJMGFMBOCDF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMAOGCPKDNB_BJMGFMBOCDF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OMAOGCPKDNB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OMAOGCPKDNB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OMAOGCPKDNB*))((::PBYTE)hIl2Cpp + OMAOGCPKDNB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMAOGCPKDNB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMAOGCPKDNB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OMAOGCPKDNB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMAOGCPKDNB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OMAOGCPKDNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMAOGCPKDNB*))((::PBYTE)hIl2Cpp + OMAOGCPKDNB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OMAOGCPKDNB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
