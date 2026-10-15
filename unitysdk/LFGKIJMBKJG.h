#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFGKIJMBKJG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LFGKIJMBKJG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E90F5D0)
#define LFGKIJMBKJG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E90F830)
#define LFGKIJMBKJG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E90F1E0)
#define LFGKIJMBKJG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E90F1A0)
#define LFGKIJMBKJG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E90F190)
#define LFGKIJMBKJG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E90F350)
#define LFGKIJMBKJG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E90F270)
#define LFGKIJMBKJG_FLABFFODLAN_OFFSET UNITYSDK_OFFSET(0x1E90F240)
#define LFGKIJMBKJG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E90F430)
#define LFGKIJMBKJG_HPGLDOOFONJ_OFFSET UNITYSDK_OFFSET(0x1E90F250)
#define LFGKIJMBKJG_JFPFGJGFCGE_OFFSET UNITYSDK_OFFSET(0x1E90F230)
#define LFGKIJMBKJG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E90F150)
#define LFGKIJMBKJG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E90F6B0)
#define LFGKIJMBKJG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E90F670)
#define LFGKIJMBKJG_PAJHAHFHLEI_OFFSET UNITYSDK_OFFSET(0x1E90F260)
#define LFGKIJMBKJG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E90F180)
#define LFGKIJMBKJG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E90F460)
#define LFGKIJMBKJG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E90F4C0)

inline static constexpr unsigned int LFGKIJMBKJG_TypeDefinitionIndex = 30336;

	class LFGKIJMBKJG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean JNDBHPPKILC; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 IOJPFPKAAOP; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::LFGKIJMBKJG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LFGKIJMBKJG*>**)UnitySDK::FromName("", "LFGKIJMBKJG")->GetStaticField(0x32B00);
		}

		// static const ::System::Object ABJLJCFPJJL; // 0x0
		// static const ::System::Object EBNBMOHHABN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGKIJMBKJG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LFGKIJMBKJG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFGKIJMBKJG*))((::PBYTE)hIl2Cpp + LFGKIJMBKJG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFGKIJMBKJG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LFGKIJMBKJG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LFGKIJMBKJG*>*(*)())((::PBYTE)hIl2Cpp + LFGKIJMBKJG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGKIJMBKJG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LFGKIJMBKJG* Clone()
		{
			return ((::LFGKIJMBKJG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGKIJMBKJG_CLONE_OFFSET))(this);
		}

		::System::Boolean JFPFGJGFCGE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGKIJMBKJG_JFPFGJGFCGE_OFFSET))(this);
		}

		::System::Void FLABFFODLAN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LFGKIJMBKJG_FLABFFODLAN_OFFSET))(this, a1);
		}

		::System::UInt32 HPGLDOOFONJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGKIJMBKJG_HPGLDOOFONJ_OFFSET))(this);
		}

		::System::Void PAJHAHFHLEI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LFGKIJMBKJG_PAJHAHFHLEI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LFGKIJMBKJG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LFGKIJMBKJG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LFGKIJMBKJG*))((::PBYTE)hIl2Cpp + LFGKIJMBKJG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGKIJMBKJG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGKIJMBKJG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LFGKIJMBKJG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGKIJMBKJG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LFGKIJMBKJG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFGKIJMBKJG*))((::PBYTE)hIl2Cpp + LFGKIJMBKJG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LFGKIJMBKJG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
