#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDPHJAEBKAD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class RogueAdventureRoomGameplayWolfGunTarget; }
namespace System { class Object; }
namespace System { class String; }

#define BDPHJAEBKAD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E920100)
#define BDPHJAEBKAD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E920480)
#define BDPHJAEBKAD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E91FBF0)
#define BDPHJAEBKAD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E91FB30)
#define BDPHJAEBKAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E91FAE0)
#define BDPHJAEBKAD_DCPFMFMADOH_OFFSET UNITYSDK_OFFSET(0x1E91FC40)
#define BDPHJAEBKAD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E91FE00)
#define BDPHJAEBKAD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E91FC70)
#define BDPHJAEBKAD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E91FF30)
#define BDPHJAEBKAD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E91FA70)
#define BDPHJAEBKAD_KJBDBPBIIBF_OFFSET UNITYSDK_OFFSET(0x1E91FC60)
#define BDPHJAEBKAD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9202B0)
#define BDPHJAEBKAD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E920210)
#define BDPHJAEBKAD_OANCIJELGCL_OFFSET UNITYSDK_OFFSET(0x1E91FC50)
#define BDPHJAEBKAD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E91FAD0)
#define BDPHJAEBKAD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E91FFA0)
#define BDPHJAEBKAD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E920000)

	class BDPHJAEBKAD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::RogueAdventureRoomGameplayWolfGunTarget*>* NKAGCEJIBEN; // 0x18
		::System::UInt32 AFDGLKJENFI; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BDPHJAEBKAD")->GetStaticField(0x3F2C0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_MNCHCOFMDMM()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "BDPHJAEBKAD")->GetStaticField(0x3F2C8);
		}

		// static const ::System::Object GFHDHLMBGAJ; // 0x0
		// static const ::System::Object AIICFPIDLIB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPHJAEBKAD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BDPHJAEBKAD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BDPHJAEBKAD*))((::PBYTE)hIl2Cpp + BDPHJAEBKAD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDPHJAEBKAD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BDPHJAEBKAD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPHJAEBKAD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BDPHJAEBKAD* Clone()
		{
			return ((::BDPHJAEBKAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPHJAEBKAD_CLONE_OFFSET))(this);
		}

		::System::UInt32 DCPFMFMADOH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPHJAEBKAD_DCPFMFMADOH_OFFSET))(this);
		}

		::System::Void OANCIJELGCL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDPHJAEBKAD_OANCIJELGCL_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::RogueAdventureRoomGameplayWolfGunTarget*>* KJBDBPBIIBF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::RogueAdventureRoomGameplayWolfGunTarget*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPHJAEBKAD_KJBDBPBIIBF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BDPHJAEBKAD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BDPHJAEBKAD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BDPHJAEBKAD*))((::PBYTE)hIl2Cpp + BDPHJAEBKAD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPHJAEBKAD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPHJAEBKAD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BDPHJAEBKAD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPHJAEBKAD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BDPHJAEBKAD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BDPHJAEBKAD*))((::PBYTE)hIl2Cpp + BDPHJAEBKAD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BDPHJAEBKAD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
