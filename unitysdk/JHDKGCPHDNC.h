#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DKFJLHHDFKO;
class JHDKGCPHDNC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JHDKGCPHDNC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E715840)
#define JHDKGCPHDNC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E715BE0)
#define JHDKGCPHDNC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7153C0)
#define JHDKGCPHDNC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E715330)
#define JHDKGCPHDNC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7152F0)
#define JHDKGCPHDNC_EILPOOIECLM_OFFSET UNITYSDK_OFFSET(0x1E715400)
#define JHDKGCPHDNC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E715570)
#define JHDKGCPHDNC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E715420)
#define JHDKGCPHDNC_FCCBPNELKAN_OFFSET UNITYSDK_OFFSET(0x1E715410)
#define JHDKGCPHDNC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E715690)
#define JHDKGCPHDNC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7152B0)
#define JHDKGCPHDNC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E715A10)
#define JHDKGCPHDNC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E715970)
#define JHDKGCPHDNC_MJOEMBBMBON_OFFSET UNITYSDK_OFFSET(0x1E7153F0)
#define JHDKGCPHDNC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7152E0)
#define JHDKGCPHDNC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E715700)
#define JHDKGCPHDNC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E715760)

inline static constexpr unsigned int JHDKGCPHDNC_TypeDefinitionIndex = 33840;

	class JHDKGCPHDNC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::DKFJLHHDFKO*>* CBFGBDBJHID; // 0x18
		::System::UInt32 NIAOPCJHKCG; // 0x20
		static ::Google::Protobuf::MessageParser_1<::JHDKGCPHDNC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JHDKGCPHDNC*>**)UnitySDK::FromName("", "JHDKGCPHDNC")->GetStaticField(0x5EDD0);
		}

		static ::Google::Protobuf::FieldCodec_1<::DKFJLHHDFKO*>** StaticGet_DDFODHOFBIP()
		{
			return (::Google::Protobuf::FieldCodec_1<::DKFJLHHDFKO*>**)UnitySDK::FromName("", "JHDKGCPHDNC")->GetStaticField(0x5EDD8);
		}

		// static const ::System::Object IMGDAOEBONP; // 0x0
		// static const ::System::Object FDDDLMBHDMC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDKGCPHDNC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JHDKGCPHDNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JHDKGCPHDNC*))((::PBYTE)hIl2Cpp + JHDKGCPHDNC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHDKGCPHDNC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JHDKGCPHDNC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JHDKGCPHDNC*>*(*)())((::PBYTE)hIl2Cpp + JHDKGCPHDNC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDKGCPHDNC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JHDKGCPHDNC* Clone()
		{
			return ((::JHDKGCPHDNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDKGCPHDNC_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::DKFJLHHDFKO*>* MJOEMBBMBON()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::DKFJLHHDFKO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDKGCPHDNC_MJOEMBBMBON_OFFSET))(this);
		}

		::System::UInt32 EILPOOIECLM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDKGCPHDNC_EILPOOIECLM_OFFSET))(this);
		}

		::System::Void FCCBPNELKAN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JHDKGCPHDNC_FCCBPNELKAN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JHDKGCPHDNC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JHDKGCPHDNC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JHDKGCPHDNC*))((::PBYTE)hIl2Cpp + JHDKGCPHDNC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDKGCPHDNC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDKGCPHDNC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JHDKGCPHDNC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDKGCPHDNC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JHDKGCPHDNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JHDKGCPHDNC*))((::PBYTE)hIl2Cpp + JHDKGCPHDNC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JHDKGCPHDNC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
