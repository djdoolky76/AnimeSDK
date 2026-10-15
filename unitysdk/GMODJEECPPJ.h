#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMODJEECPPJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GMODJEECPPJ_BODAIMFOLJE_OFFSET UNITYSDK_OFFSET(0x1E4D6EE0)
#define GMODJEECPPJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4D7410)
#define GMODJEECPPJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4D77F0)
#define GMODJEECPPJ_CFFDFLGECPG_OFFSET UNITYSDK_OFFSET(0x1E4D6ED0)
#define GMODJEECPPJ_CJNPMPBNAKL_OFFSET UNITYSDK_OFFSET(0x1E4D6EB0)
#define GMODJEECPPJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4D6E60)
#define GMODJEECPPJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4D6DC0)
#define GMODJEECPPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4D6D70)
#define GMODJEECPPJ_DBMEJEFLNAE_OFFSET UNITYSDK_OFFSET(0x1E4D6F00)
#define GMODJEECPPJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4D6FD0)
#define GMODJEECPPJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4D6F20)
#define GMODJEECPPJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4D70E0)
#define GMODJEECPPJ_GIIPBMIDGMG_OFFSET UNITYSDK_OFFSET(0x1E4D6F10)
#define GMODJEECPPJ_HEJNCIECNNA_OFFSET UNITYSDK_OFFSET(0x1E4D6EF0)
#define GMODJEECPPJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4D6D00)
#define GMODJEECPPJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4D76E0)
#define GMODJEECPPJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4D7670)
#define GMODJEECPPJ_NLDDGCKOBIO_OFFSET UNITYSDK_OFFSET(0x1E4D6EC0)
#define GMODJEECPPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4D6D60)
#define GMODJEECPPJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4D71F0)
#define GMODJEECPPJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4D7250)

inline static constexpr unsigned int GMODJEECPPJ_TypeDefinitionIndex = 31960;

	class GMODJEECPPJ : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ELMCGNEAAHF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 IEFKLOKPHIM; // 0x20
		::System::UInt32 IPJPKJHBHAG; // 0x24
		::System::Int64 GBLNAJJGPBM; // 0x28
		static ::Google::Protobuf::FieldCodec** StaticGet_LAFIEPLAPED()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GMODJEECPPJ")->GetStaticField(0x227A0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GMODJEECPPJ")->GetStaticField(0x227A8);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GMODJEECPPJ_JJGHOBBFNJD_OFFSET))();
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
