#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMODJEECPPJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GMODJEECPPJ_BODAIMFOLJE_OFFSET UNITYSDK_OFFSET(0x1E4A9860)
#define GMODJEECPPJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4A9D90)
#define GMODJEECPPJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4AA170)
#define GMODJEECPPJ_CFFDFLGECPG_OFFSET UNITYSDK_OFFSET(0x1E4A9850)
#define GMODJEECPPJ_CJNPMPBNAKL_OFFSET UNITYSDK_OFFSET(0x1E4A9830)
#define GMODJEECPPJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4A97E0)
#define GMODJEECPPJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4A9740)
#define GMODJEECPPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4A96F0)
#define GMODJEECPPJ_DBMEJEFLNAE_OFFSET UNITYSDK_OFFSET(0x1E4A9880)
#define GMODJEECPPJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4A9950)
#define GMODJEECPPJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4A98A0)
#define GMODJEECPPJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4A9A60)
#define GMODJEECPPJ_GIIPBMIDGMG_OFFSET UNITYSDK_OFFSET(0x1E4A9890)
#define GMODJEECPPJ_HEJNCIECNNA_OFFSET UNITYSDK_OFFSET(0x1E4A9870)
#define GMODJEECPPJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4A9680)
#define GMODJEECPPJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4AA060)
#define GMODJEECPPJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4A9FF0)
#define GMODJEECPPJ_NLDDGCKOBIO_OFFSET UNITYSDK_OFFSET(0x1E4A9840)
#define GMODJEECPPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4A96E0)
#define GMODJEECPPJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4A9B70)
#define GMODJEECPPJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4A9BD0)

inline static constexpr unsigned int GMODJEECPPJ_TypeDefinitionIndex = 31960;

	class GMODJEECPPJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ELMCGNEAAHF; // 0x18
		::System::Int64 GBLNAJJGPBM; // 0x20
		::System::UInt32 IPJPKJHBHAG; // 0x28
		::System::UInt32 IEFKLOKPHIM; // 0x2C
		static ::Google::Protobuf::MessageParser_1<::GMODJEECPPJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GMODJEECPPJ*>**)UnitySDK::FromName("", "GMODJEECPPJ")->GetStaticField(0x1F2B0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_LAFIEPLAPED()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GMODJEECPPJ")->GetStaticField(0x1F2B8);
		}

		// static const ::System::Object ODLGJOLIOKD; // 0x0
		// static const ::System::Object AAALJMDAKBI; // 0x0
		// static const ::System::Object MKMALJAAEDK; // 0x0
		// static const ::System::Object KEBONEOKEPI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMODJEECPPJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GMODJEECPPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMODJEECPPJ*))((::PBYTE)hIl2Cpp + GMODJEECPPJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMODJEECPPJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GMODJEECPPJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GMODJEECPPJ*>*(*)())((::PBYTE)hIl2Cpp + GMODJEECPPJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMODJEECPPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GMODJEECPPJ* Clone()
		{
			return ((::GMODJEECPPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMODJEECPPJ_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CJNPMPBNAKL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMODJEECPPJ_CJNPMPBNAKL_OFFSET))(this);
		}

		::System::Int64 NLDDGCKOBIO()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + GMODJEECPPJ_NLDDGCKOBIO_OFFSET))(this);
		}

		::System::Void CFFDFLGECPG(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + GMODJEECPPJ_CFFDFLGECPG_OFFSET))(this, a1);
		}

		::System::UInt32 BODAIMFOLJE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMODJEECPPJ_BODAIMFOLJE_OFFSET))(this);
		}

		::System::Void HEJNCIECNNA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GMODJEECPPJ_HEJNCIECNNA_OFFSET))(this, a1);
		}

		::System::UInt32 DBMEJEFLNAE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMODJEECPPJ_DBMEJEFLNAE_OFFSET))(this);
		}

		::System::Void GIIPBMIDGMG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GMODJEECPPJ_GIIPBMIDGMG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GMODJEECPPJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GMODJEECPPJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GMODJEECPPJ*))((::PBYTE)hIl2Cpp + GMODJEECPPJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMODJEECPPJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMODJEECPPJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GMODJEECPPJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMODJEECPPJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GMODJEECPPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMODJEECPPJ*))((::PBYTE)hIl2Cpp + GMODJEECPPJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GMODJEECPPJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
