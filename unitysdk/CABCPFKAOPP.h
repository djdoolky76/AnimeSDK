#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CABCPFKAOPP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CABCPFKAOPP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E026BB0)
#define CABCPFKAOPP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E026F40)
#define CABCPFKAOPP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E026580)
#define CABCPFKAOPP_CMHKCCNHCMC_OFFSET UNITYSDK_OFFSET(0x1E0265E0)
#define CABCPFKAOPP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E026490)
#define CABCPFKAOPP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E026400)
#define CABCPFKAOPP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E026690)
#define CABCPFKAOPP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E026630)
#define CABCPFKAOPP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0267C0)
#define CABCPFKAOPP_IAIDMIHMLAM_OFFSET UNITYSDK_OFFSET(0x1E0265D0)
#define CABCPFKAOPP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E026390)
#define CABCPFKAOPP_LOHIPNPGOLI_OFFSET UNITYSDK_OFFSET(0x1E026610)
#define CABCPFKAOPP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E026DF0)
#define CABCPFKAOPP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E026D80)
#define CABCPFKAOPP_NKNEBECLBOF_OFFSET UNITYSDK_OFFSET(0x1E026600)
#define CABCPFKAOPP_OGFEKBBBEMA_OFFSET UNITYSDK_OFFSET(0x1E0265F0)
#define CABCPFKAOPP_OKLGLJNNCMH_OFFSET UNITYSDK_OFFSET(0x1E026620)
#define CABCPFKAOPP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0263F0)
#define CABCPFKAOPP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E026990)
#define CABCPFKAOPP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0269F0)

inline static constexpr unsigned int CABCPFKAOPP_TypeDefinitionIndex = 27057;

	class CABCPFKAOPP : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GNOBPDFMNBL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DHJBNEGIBLK; // 0x20
		::System::UInt32 OJGKLENJPDA; // 0x28
		::System::UInt32 IONKIKDOMLM; // 0x2C
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_LLFMJBMCIHI()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "CABCPFKAOPP")->GetStaticField(0x5FEA0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KKMJBLDGJCP()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "CABCPFKAOPP")->GetStaticField(0x5FEA8);
		}

		static ::Google::Protobuf::MessageParser_1<::CABCPFKAOPP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CABCPFKAOPP*>**)UnitySDK::FromName("", "CABCPFKAOPP")->GetStaticField(0x5FEB0);
		}

		// static const ::System::Object OGKEGBEIFFP; // 0x0
		// static const ::System::Object NADNNEHBDJB; // 0x0
		// static const ::System::Object EEMPBGGOLOO; // 0x0
		// static const ::System::Object NFDOHEBLPGO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CABCPFKAOPP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CABCPFKAOPP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CABCPFKAOPP*))((::PBYTE)hIl2Cpp + CABCPFKAOPP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CABCPFKAOPP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CABCPFKAOPP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CABCPFKAOPP*>*(*)())((::PBYTE)hIl2Cpp + CABCPFKAOPP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CABCPFKAOPP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CABCPFKAOPP* Clone()
		{
			return ((::CABCPFKAOPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CABCPFKAOPP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IAIDMIHMLAM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CABCPFKAOPP_IAIDMIHMLAM_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CMHKCCNHCMC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CABCPFKAOPP_CMHKCCNHCMC_OFFSET))(this);
		}

		::System::UInt32 OGFEKBBBEMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CABCPFKAOPP_OGFEKBBBEMA_OFFSET))(this);
		}

		::System::Void NKNEBECLBOF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CABCPFKAOPP_NKNEBECLBOF_OFFSET))(this, a1);
		}

		::System::UInt32 LOHIPNPGOLI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CABCPFKAOPP_LOHIPNPGOLI_OFFSET))(this);
		}

		::System::Void OKLGLJNNCMH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CABCPFKAOPP_OKLGLJNNCMH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CABCPFKAOPP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CABCPFKAOPP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CABCPFKAOPP*))((::PBYTE)hIl2Cpp + CABCPFKAOPP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CABCPFKAOPP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CABCPFKAOPP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CABCPFKAOPP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CABCPFKAOPP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CABCPFKAOPP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CABCPFKAOPP*))((::PBYTE)hIl2Cpp + CABCPFKAOPP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CABCPFKAOPP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
