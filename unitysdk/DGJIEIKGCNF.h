#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DGJIEIKGCNF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DGJIEIKGCNF_BFAAODDPJLJ_OFFSET UNITYSDK_OFFSET(0x1E1AF460)
#define DGJIEIKGCNF_BODAIMFOLJE_OFFSET UNITYSDK_OFFSET(0x1E1AF470)
#define DGJIEIKGCNF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1AF970)
#define DGJIEIKGCNF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1AFC30)
#define DGJIEIKGCNF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1AF410)
#define DGJIEIKGCNF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1AF370)
#define DGJIEIKGCNF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1AF320)
#define DGJIEIKGCNF_DBMEJEFLNAE_OFFSET UNITYSDK_OFFSET(0x1E1AF440)
#define DGJIEIKGCNF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1AF540)
#define DGJIEIKGCNF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1AF4B0)
#define DGJIEIKGCNF_FGKFHBOHHAI_OFFSET UNITYSDK_OFFSET(0x1E1AF490)
#define DGJIEIKGCNF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1AF650)
#define DGJIEIKGCNF_GIADDHAOAAB_OFFSET UNITYSDK_OFFSET(0x1E1AF4A0)
#define DGJIEIKGCNF_GIIPBMIDGMG_OFFSET UNITYSDK_OFFSET(0x1E1AF450)
#define DGJIEIKGCNF_HEJNCIECNNA_OFFSET UNITYSDK_OFFSET(0x1E1AF480)
#define DGJIEIKGCNF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1AF2E0)
#define DGJIEIKGCNF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1AFB40)
#define DGJIEIKGCNF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1AFAE0)
#define DGJIEIKGCNF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1AF310)
#define DGJIEIKGCNF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1AF750)
#define DGJIEIKGCNF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1AF7B0)

	class DGJIEIKGCNF : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OGLBIHIJMNF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 IEFKLOKPHIM; // 0x20
		::System::Boolean JJFINGMBCEH; // 0x24
		::System::Byte _padding0[0x3];
		::System::UInt32 IPJPKJHBHAG; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DGJIEIKGCNF")->GetStaticField(0x347A0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_FELDAIBHJIH()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "DGJIEIKGCNF")->GetStaticField(0x347A8);
		}

		// static const ::System::Object KEBONEOKEPI; // 0x0
		// static const ::System::Object IPJLIBPNKHG; // 0x0
		// static const ::System::Object MKMALJAAEDK; // 0x0
		// static const ::System::Object NDOPHCFIGDM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGJIEIKGCNF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DGJIEIKGCNF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DGJIEIKGCNF*))((::PBYTE)hIl2Cpp + DGJIEIKGCNF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGJIEIKGCNF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DGJIEIKGCNF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGJIEIKGCNF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DGJIEIKGCNF* Clone()
		{
			return ((::DGJIEIKGCNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGJIEIKGCNF_CLONE_OFFSET))(this);
		}

		::System::UInt32 DBMEJEFLNAE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGJIEIKGCNF_DBMEJEFLNAE_OFFSET))(this);
		}

		::System::Void GIIPBMIDGMG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DGJIEIKGCNF_GIIPBMIDGMG_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BFAAODDPJLJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGJIEIKGCNF_BFAAODDPJLJ_OFFSET))(this);
		}

		::System::UInt32 BODAIMFOLJE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGJIEIKGCNF_BODAIMFOLJE_OFFSET))(this);
		}

		::System::Void HEJNCIECNNA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DGJIEIKGCNF_HEJNCIECNNA_OFFSET))(this, a1);
		}

		::System::Boolean FGKFHBOHHAI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGJIEIKGCNF_FGKFHBOHHAI_OFFSET))(this);
		}

		::System::Void GIADDHAOAAB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DGJIEIKGCNF_GIADDHAOAAB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DGJIEIKGCNF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DGJIEIKGCNF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DGJIEIKGCNF*))((::PBYTE)hIl2Cpp + DGJIEIKGCNF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGJIEIKGCNF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGJIEIKGCNF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DGJIEIKGCNF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGJIEIKGCNF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DGJIEIKGCNF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DGJIEIKGCNF*))((::PBYTE)hIl2Cpp + DGJIEIKGCNF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DGJIEIKGCNF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
