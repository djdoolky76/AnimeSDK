#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFEPHMALKDK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DFEPHMALKDK_BODAIMFOLJE_OFFSET UNITYSDK_OFFSET(0x1E1A0670)
#define DFEPHMALKDK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1A0BC0)
#define DFEPHMALKDK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1A1050)
#define DFEPHMALKDK_CJNPMPBNAKL_OFFSET UNITYSDK_OFFSET(0x1E1A0660)
#define DFEPHMALKDK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1A05F0)
#define DFEPHMALKDK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1A0550)
#define DFEPHMALKDK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1A0500)
#define DFEPHMALKDK_DBMEJEFLNAE_OFFSET UNITYSDK_OFFSET(0x1E1A0690)
#define DFEPHMALKDK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1A0790)
#define DFEPHMALKDK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1A06D0)
#define DFEPHMALKDK_FHGAPGHAPFH_OFFSET UNITYSDK_OFFSET(0x1E1A0650)
#define DFEPHMALKDK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1A0810)
#define DFEPHMALKDK_GIIPBMIDGMG_OFFSET UNITYSDK_OFFSET(0x1E1A06A0)
#define DFEPHMALKDK_HEJNCIECNNA_OFFSET UNITYSDK_OFFSET(0x1E1A0680)
#define DFEPHMALKDK_IOIFPHAMFDF_OFFSET UNITYSDK_OFFSET(0x1E1A0640)
#define DFEPHMALKDK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1A0490)
#define DFEPHMALKDK_KFFMBNFGJOB_OFFSET UNITYSDK_OFFSET(0x1E1A06C0)
#define DFEPHMALKDK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1A0F20)
#define DFEPHMALKDK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1A0EB0)
#define DFEPHMALKDK_OLEJNDFFHPP_OFFSET UNITYSDK_OFFSET(0x1E1A06B0)
#define DFEPHMALKDK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1A04F0)
#define DFEPHMALKDK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1A0940)
#define DFEPHMALKDK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1A09A0)

inline static constexpr unsigned int DFEPHMALKDK_TypeDefinitionIndex = 31964;

	class DFEPHMALKDK : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ELMCGNEAAHF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 IPJPKJHBHAG; // 0x20
		::System::UInt32 HDAIPLJBGAB; // 0x24
		::System::Int64 HHCEMNIBHIE; // 0x28
		::System::UInt32 IEFKLOKPHIM; // 0x30
		static ::Google::Protobuf::FieldCodec** StaticGet_LAFIEPLAPED()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "DFEPHMALKDK")->GetStaticField(0x32650);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DFEPHMALKDK")->GetStaticField(0x32658);
		}

		// static const ::System::Object CGMFPGNNGEK; // 0x0
		// static const ::System::Object ODLGJOLIOKD; // 0x0
		// static const ::System::Object MKMALJAAEDK; // 0x0
		// static const ::System::Object KEBONEOKEPI; // 0x0
		// static const ::System::Object BDDGFOPHBML; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFEPHMALKDK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DFEPHMALKDK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFEPHMALKDK*))((::PBYTE)hIl2Cpp + DFEPHMALKDK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFEPHMALKDK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DFEPHMALKDK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFEPHMALKDK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DFEPHMALKDK* Clone()
		{
			return ((::DFEPHMALKDK*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFEPHMALKDK_CLONE_OFFSET))(this);
		}

		::System::UInt32 IOIFPHAMFDF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFEPHMALKDK_IOIFPHAMFDF_OFFSET))(this);
		}

		::System::Void FHGAPGHAPFH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DFEPHMALKDK_FHGAPGHAPFH_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CJNPMPBNAKL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFEPHMALKDK_CJNPMPBNAKL_OFFSET))(this);
		}

		::System::UInt32 BODAIMFOLJE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFEPHMALKDK_BODAIMFOLJE_OFFSET))(this);
		}

		::System::Void HEJNCIECNNA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DFEPHMALKDK_HEJNCIECNNA_OFFSET))(this, a1);
		}

		::System::UInt32 DBMEJEFLNAE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFEPHMALKDK_DBMEJEFLNAE_OFFSET))(this);
		}

		::System::Void GIIPBMIDGMG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DFEPHMALKDK_GIIPBMIDGMG_OFFSET))(this, a1);
		}

		::System::Int64 OLEJNDFFHPP()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + DFEPHMALKDK_OLEJNDFFHPP_OFFSET))(this);
		}

		::System::Void KFFMBNFGJOB(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + DFEPHMALKDK_KFFMBNFGJOB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DFEPHMALKDK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DFEPHMALKDK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DFEPHMALKDK*))((::PBYTE)hIl2Cpp + DFEPHMALKDK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFEPHMALKDK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFEPHMALKDK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DFEPHMALKDK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFEPHMALKDK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DFEPHMALKDK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFEPHMALKDK*))((::PBYTE)hIl2Cpp + DFEPHMALKDK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DFEPHMALKDK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
