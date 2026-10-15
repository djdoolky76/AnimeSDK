#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDPHJAEBKAD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class RogueAdventureRoomGameplayWolfGunTarget; }
namespace System { class Object; }
namespace System { class String; }

#define BDPHJAEBKAD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8F2AF0)
#define BDPHJAEBKAD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8F2E70)
#define BDPHJAEBKAD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8F25E0)
#define BDPHJAEBKAD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8F2520)
#define BDPHJAEBKAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8F24D0)
#define BDPHJAEBKAD_DCPFMFMADOH_OFFSET UNITYSDK_OFFSET(0x1E8F2630)
#define BDPHJAEBKAD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8F27F0)
#define BDPHJAEBKAD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8F2660)
#define BDPHJAEBKAD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8F2920)
#define BDPHJAEBKAD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8F2460)
#define BDPHJAEBKAD_KJBDBPBIIBF_OFFSET UNITYSDK_OFFSET(0x1E8F2650)
#define BDPHJAEBKAD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8F2CA0)
#define BDPHJAEBKAD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8F2C00)
#define BDPHJAEBKAD_OANCIJELGCL_OFFSET UNITYSDK_OFFSET(0x1E8F2640)
#define BDPHJAEBKAD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8F24C0)
#define BDPHJAEBKAD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8F2990)
#define BDPHJAEBKAD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8F29F0)

inline static constexpr unsigned int BDPHJAEBKAD_TypeDefinitionIndex = 32935;

	class BDPHJAEBKAD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::RogueAdventureRoomGameplayWolfGunTarget*>* NKAGCEJIBEN; // 0x18
		::System::UInt32 AFDGLKJENFI; // 0x20
		static ::Google::Protobuf::MessageParser_1<::BDPHJAEBKAD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BDPHJAEBKAD*>**)UnitySDK::FromName("", "BDPHJAEBKAD")->GetStaticField(0x52C20);
		}

		static ::Google::Protobuf::FieldCodec_1<::Proto::RogueAdventureRoomGameplayWolfGunTarget*>** StaticGet_MNCHCOFMDMM()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::RogueAdventureRoomGameplayWolfGunTarget*>**)UnitySDK::FromName("", "BDPHJAEBKAD")->GetStaticField(0x52C28);
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

		static ::Google::Protobuf::MessageParser_1<::BDPHJAEBKAD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BDPHJAEBKAD*>*(*)())((::PBYTE)hIl2Cpp + BDPHJAEBKAD_JJGHOBBFNJD_OFFSET))();
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
