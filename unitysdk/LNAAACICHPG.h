#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LNAAACICHPG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LNAAACICHPG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9AFB10)
#define LNAAACICHPG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9AFEE0)
#define LNAAACICHPG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9AF6F0)
#define LNAAACICHPG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9AF6B0)
#define LNAAACICHPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9AF6A0)
#define LNAAACICHPG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9AF850)
#define LNAAACICHPG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9AF7D0)
#define LNAAACICHPG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9AF930)
#define LNAAACICHPG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9AF630)
#define LNAAACICHPG_KAIAAEIBIOA_OFFSET UNITYSDK_OFFSET(0x1E9AF780)
#define LNAAACICHPG_KCFFENAPECL_OFFSET UNITYSDK_OFFSET(0x1E9AF7C0)
#define LNAAACICHPG_LEJJBLNFCPF_OFFSET UNITYSDK_OFFSET(0x1E9AF770)
#define LNAAACICHPG_MAGAPPDNDDK_OFFSET UNITYSDK_OFFSET(0x1E9AF7B0)
#define LNAAACICHPG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9AFD40)
#define LNAAACICHPG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9AFCF0)
#define LNAAACICHPG_OEINJEHEKJH_OFFSET UNITYSDK_OFFSET(0x1E9AF790)
#define LNAAACICHPG_PAGDMMPIBCI_OFFSET UNITYSDK_OFFSET(0x1E9AF7A0)
#define LNAAACICHPG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9AF690)
#define LNAAACICHPG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9AF970)
#define LNAAACICHPG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9AF9D0)

inline static constexpr unsigned int LNAAACICHPG_TypeDefinitionIndex = 26631;

	class LNAAACICHPG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt64 NNFGFBPNDKK; // 0x18
		::System::UInt32 JJCAKGCNINI; // 0x20
		::System::UInt32 EHPKCCHOLJO; // 0x24
		static ::Google::Protobuf::MessageParser_1<::LNAAACICHPG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LNAAACICHPG*>**)UnitySDK::FromName("", "LNAAACICHPG")->GetStaticField(0x4E500);
		}

		// static const ::System::Object MNPBLKFFANP; // 0x0
		// static const ::System::Object AJGBLDHFNMC; // 0x0
		// static const ::System::Object LNKFMPGAMAD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNAAACICHPG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LNAAACICHPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNAAACICHPG*))((::PBYTE)hIl2Cpp + LNAAACICHPG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNAAACICHPG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LNAAACICHPG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LNAAACICHPG*>*(*)())((::PBYTE)hIl2Cpp + LNAAACICHPG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNAAACICHPG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LNAAACICHPG* Clone()
		{
			return ((::LNAAACICHPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNAAACICHPG_CLONE_OFFSET))(this);
		}

		::System::UInt32 LEJJBLNFCPF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNAAACICHPG_LEJJBLNFCPF_OFFSET))(this);
		}

		::System::Void KAIAAEIBIOA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LNAAACICHPG_KAIAAEIBIOA_OFFSET))(this, a1);
		}

		::System::UInt64 OEINJEHEKJH()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + LNAAACICHPG_OEINJEHEKJH_OFFSET))(this);
		}

		::System::Void PAGDMMPIBCI(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + LNAAACICHPG_PAGDMMPIBCI_OFFSET))(this, a1);
		}

		::System::UInt32 MAGAPPDNDDK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNAAACICHPG_MAGAPPDNDDK_OFFSET))(this);
		}

		::System::Void KCFFENAPECL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LNAAACICHPG_KCFFENAPECL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LNAAACICHPG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LNAAACICHPG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LNAAACICHPG*))((::PBYTE)hIl2Cpp + LNAAACICHPG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNAAACICHPG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNAAACICHPG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LNAAACICHPG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNAAACICHPG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LNAAACICHPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNAAACICHPG*))((::PBYTE)hIl2Cpp + LNAAACICHPG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LNAAACICHPG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
