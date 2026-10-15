#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFOCLBEMIEM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LFOCLBEMIEM_ADMMNBGCEIP_OFFSET UNITYSDK_OFFSET(0x1E918EC0)
#define LFOCLBEMIEM_AENILPKCOAO_OFFSET UNITYSDK_OFFSET(0x1E918ED0)
#define LFOCLBEMIEM_AMEFBODJIHJ_OFFSET UNITYSDK_OFFSET(0x1E918EF0)
#define LFOCLBEMIEM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9192B0)
#define LFOCLBEMIEM_CBKAEJJLNNH_OFFSET UNITYSDK_OFFSET(0x1E918EE0)
#define LFOCLBEMIEM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9195B0)
#define LFOCLBEMIEM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E918E20)
#define LFOCLBEMIEM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E918DF0)
#define LFOCLBEMIEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E918DE0)
#define LFOCLBEMIEM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E918FA0)
#define LFOCLBEMIEM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E918F10)
#define LFOCLBEMIEM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E919080)
#define LFOCLBEMIEM_GPJEMEIKEPC_OFFSET UNITYSDK_OFFSET(0x1E918EB0)
#define LFOCLBEMIEM_IIALFJFKJLL_OFFSET UNITYSDK_OFFSET(0x1E918EA0)
#define LFOCLBEMIEM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E918D70)
#define LFOCLBEMIEM_KAPACICPONO_OFFSET UNITYSDK_OFFSET(0x1E918E90)
#define LFOCLBEMIEM_KMANAJJOLLP_OFFSET UNITYSDK_OFFSET(0x1E918F00)
#define LFOCLBEMIEM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E919510)
#define LFOCLBEMIEM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9194C0)
#define LFOCLBEMIEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E918DD0)
#define LFOCLBEMIEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9190C0)
#define LFOCLBEMIEM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E919120)

inline static constexpr unsigned int LFOCLBEMIEM_TypeDefinitionIndex = 29256;

	class LFOCLBEMIEM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CECNGGFFPKC; // 0x18
		::System::UInt32 GIDNCELDEIH; // 0x1C
		::System::UInt32 AAGAKAIKGCM; // 0x20
		::System::UInt32 CKEEENCFNLE; // 0x24
		static ::Google::Protobuf::MessageParser_1<::LFOCLBEMIEM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LFOCLBEMIEM*>**)UnitySDK::FromName("", "LFOCLBEMIEM")->GetStaticField(0x34270);
		}

		// static const ::System::Object ICAICNAIECI; // 0x0
		// static const ::System::Object MCFNCEOEEJD; // 0x0
		// static const ::System::Object GOGOMALLEOM; // 0x0
		// static const ::System::Object MGPGDLIJKLM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFOCLBEMIEM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LFOCLBEMIEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFOCLBEMIEM*))((::PBYTE)hIl2Cpp + LFOCLBEMIEM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFOCLBEMIEM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LFOCLBEMIEM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LFOCLBEMIEM*>*(*)())((::PBYTE)hIl2Cpp + LFOCLBEMIEM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFOCLBEMIEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LFOCLBEMIEM* Clone()
		{
			return ((::LFOCLBEMIEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFOCLBEMIEM_CLONE_OFFSET))(this);
		}

		::System::UInt32 KAPACICPONO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFOCLBEMIEM_KAPACICPONO_OFFSET))(this);
		}

		::System::Void IIALFJFKJLL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LFOCLBEMIEM_IIALFJFKJLL_OFFSET))(this, a1);
		}

		::System::UInt32 GPJEMEIKEPC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFOCLBEMIEM_GPJEMEIKEPC_OFFSET))(this);
		}

		::System::Void ADMMNBGCEIP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LFOCLBEMIEM_ADMMNBGCEIP_OFFSET))(this, a1);
		}

		::System::UInt32 AENILPKCOAO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFOCLBEMIEM_AENILPKCOAO_OFFSET))(this);
		}

		::System::Void CBKAEJJLNNH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LFOCLBEMIEM_CBKAEJJLNNH_OFFSET))(this, a1);
		}

		::System::UInt32 AMEFBODJIHJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFOCLBEMIEM_AMEFBODJIHJ_OFFSET))(this);
		}

		::System::Void KMANAJJOLLP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LFOCLBEMIEM_KMANAJJOLLP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LFOCLBEMIEM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LFOCLBEMIEM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LFOCLBEMIEM*))((::PBYTE)hIl2Cpp + LFOCLBEMIEM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFOCLBEMIEM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFOCLBEMIEM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LFOCLBEMIEM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFOCLBEMIEM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LFOCLBEMIEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFOCLBEMIEM*))((::PBYTE)hIl2Cpp + LFOCLBEMIEM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LFOCLBEMIEM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
