#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CABCPFKAOPP;
class GEEPIPMBGJD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GEEPIPMBGJD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E455DF0)
#define GEEPIPMBGJD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E456380)
#define GEEPIPMBGJD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4557A0)
#define GEEPIPMBGJD_CMHKCCNHCMC_OFFSET UNITYSDK_OFFSET(0x1E455800)
#define GEEPIPMBGJD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E455650)
#define GEEPIPMBGJD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4555C0)
#define GEEPIPMBGJD_DENONFMPGCP_OFFSET UNITYSDK_OFFSET(0x1E4557E0)
#define GEEPIPMBGJD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E455880)
#define GEEPIPMBGJD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E455850)
#define GEEPIPMBGJD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4559C0)
#define GEEPIPMBGJD_IAIDMIHMLAM_OFFSET UNITYSDK_OFFSET(0x1E4557D0)
#define GEEPIPMBGJD_JEEADKJKEFI_OFFSET UNITYSDK_OFFSET(0x1E4557F0)
#define GEEPIPMBGJD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E455580)
#define GEEPIPMBGJD_LOHIPNPGOLI_OFFSET UNITYSDK_OFFSET(0x1E455830)
#define GEEPIPMBGJD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E456150)
#define GEEPIPMBGJD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E455FE0)
#define GEEPIPMBGJD_NKNEBECLBOF_OFFSET UNITYSDK_OFFSET(0x1E455820)
#define GEEPIPMBGJD_OGFEKBBBEMA_OFFSET UNITYSDK_OFFSET(0x1E455810)
#define GEEPIPMBGJD_OKLGLJNNCMH_OFFSET UNITYSDK_OFFSET(0x1E455840)
#define GEEPIPMBGJD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4555B0)
#define GEEPIPMBGJD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E455BB0)
#define GEEPIPMBGJD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E455C10)

inline static constexpr unsigned int GEEPIPMBGJD_TypeDefinitionIndex = 27067;

	class GEEPIPMBGJD : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DHJBNEGIBLK; // 0x10
		::CABCPFKAOPP* DENODEMLGKN; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GNOBPDFMNBL; // 0x28
		::System::UInt32 OJGKLENJPDA; // 0x30
		::System::UInt32 IONKIKDOMLM; // 0x34
		static ::Google::Protobuf::FieldCodec** StaticGet_LLFMJBMCIHI()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GEEPIPMBGJD")->GetStaticField(0x12290);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GEEPIPMBGJD")->GetStaticField(0x12298);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_KKMJBLDGJCP()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GEEPIPMBGJD")->GetStaticField(0x122A0);
		}

		// static const ::System::Object OGKEGBEIFFP; // 0x0
		// static const ::System::Object HEGJOINAIFM; // 0x0
		// static const ::System::Object NADNNEHBDJB; // 0x0
		// static const ::System::Object EEMPBGGOLOO; // 0x0
		// static const ::System::Object NFDOHEBLPGO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEEPIPMBGJD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GEEPIPMBGJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEEPIPMBGJD*))((::PBYTE)hIl2Cpp + GEEPIPMBGJD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEEPIPMBGJD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GEEPIPMBGJD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEEPIPMBGJD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GEEPIPMBGJD* Clone()
		{
			return ((::GEEPIPMBGJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEEPIPMBGJD_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IAIDMIHMLAM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEEPIPMBGJD_IAIDMIHMLAM_OFFSET))(this);
		}

		::CABCPFKAOPP* DENONFMPGCP()
		{
			return ((::CABCPFKAOPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEEPIPMBGJD_DENONFMPGCP_OFFSET))(this);
		}

		::System::Void JEEADKJKEFI(::CABCPFKAOPP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CABCPFKAOPP*))((::PBYTE)hIl2Cpp + GEEPIPMBGJD_JEEADKJKEFI_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CMHKCCNHCMC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEEPIPMBGJD_CMHKCCNHCMC_OFFSET))(this);
		}

		::System::UInt32 OGFEKBBBEMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEEPIPMBGJD_OGFEKBBBEMA_OFFSET))(this);
		}

		::System::Void NKNEBECLBOF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GEEPIPMBGJD_NKNEBECLBOF_OFFSET))(this, a1);
		}

		::System::UInt32 LOHIPNPGOLI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEEPIPMBGJD_LOHIPNPGOLI_OFFSET))(this);
		}

		::System::Void OKLGLJNNCMH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GEEPIPMBGJD_OKLGLJNNCMH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GEEPIPMBGJD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GEEPIPMBGJD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GEEPIPMBGJD*))((::PBYTE)hIl2Cpp + GEEPIPMBGJD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEEPIPMBGJD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEEPIPMBGJD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GEEPIPMBGJD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEEPIPMBGJD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GEEPIPMBGJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEEPIPMBGJD*))((::PBYTE)hIl2Cpp + GEEPIPMBGJD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GEEPIPMBGJD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
