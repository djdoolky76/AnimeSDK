#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLHCGOFNPLA;
class NNPGLCGNICI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FLHCGOFNPLA_BLBBMAGLFDL_OFFSET UNITYSDK_OFFSET(0x1F6C2330)
#define FLHCGOFNPLA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F6C2850)
#define FLHCGOFNPLA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6C2BE0)
#define FLHCGOFNPLA_CLONE_OFFSET UNITYSDK_OFFSET(0x1F6C2270)
#define FLHCGOFNPLA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F6C2200)
#define FLHCGOFNPLA_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6C21F0)
#define FLHCGOFNPLA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F6C24E0)
#define FLHCGOFNPLA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F6C2350)
#define FLHCGOFNPLA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F6C2320)
#define FLHCGOFNPLA_FFPAHEBJIKK_OFFSET UNITYSDK_OFFSET(0x1F6C22F0)
#define FLHCGOFNPLA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F6C2670)
#define FLHCGOFNPLA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F6C21B0)
#define FLHCGOFNPLA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F6C2A20)
#define FLHCGOFNPLA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F6C2990)
#define FLHCGOFNPLA_MGBKGAPDHLG_OFFSET UNITYSDK_OFFSET(0x1F6C2340)
#define FLHCGOFNPLA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F6C2310)
#define FLHCGOFNPLA_OHEBFCPLMGF_OFFSET UNITYSDK_OFFSET(0x1F6C2300)
#define FLHCGOFNPLA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F6C21E0)
#define FLHCGOFNPLA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F6C26B0)
#define FLHCGOFNPLA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F6C2710)

inline static constexpr unsigned int FLHCGOFNPLA_TypeDefinitionIndex = 29415;

	class FLHCGOFNPLA : public ::System::Object
	{
	public:
		::NNPGLCGNICI* LKDEFKKLEDJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 OPPNMFMNMGC; // 0x24
		static ::Google::Protobuf::MessageParser_1<::FLHCGOFNPLA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FLHCGOFNPLA*>**)UnitySDK::FromName("", "FLHCGOFNPLA")->GetStaticField(0x4A830);
		}

		// static const ::System::Object BOIGPPCIPFF; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HNBHJOFPFLM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLHCGOFNPLA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FLHCGOFNPLA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FLHCGOFNPLA*))((::PBYTE)hIl2Cpp + FLHCGOFNPLA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLHCGOFNPLA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FLHCGOFNPLA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FLHCGOFNPLA*>*(*)())((::PBYTE)hIl2Cpp + FLHCGOFNPLA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLHCGOFNPLA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FLHCGOFNPLA* Clone()
		{
			return ((::FLHCGOFNPLA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLHCGOFNPLA_CLONE_OFFSET))(this);
		}

		::System::UInt32 FFPAHEBJIKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLHCGOFNPLA_FFPAHEBJIKK_OFFSET))(this);
		}

		::System::Void OHEBFCPLMGF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FLHCGOFNPLA_OHEBFCPLMGF_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLHCGOFNPLA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FLHCGOFNPLA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::NNPGLCGNICI* BLBBMAGLFDL()
		{
			return ((::NNPGLCGNICI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLHCGOFNPLA_BLBBMAGLFDL_OFFSET))(this);
		}

		::System::Void MGBKGAPDHLG(::NNPGLCGNICI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNPGLCGNICI*))((::PBYTE)hIl2Cpp + FLHCGOFNPLA_MGBKGAPDHLG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLHCGOFNPLA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FLHCGOFNPLA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FLHCGOFNPLA*))((::PBYTE)hIl2Cpp + FLHCGOFNPLA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLHCGOFNPLA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLHCGOFNPLA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FLHCGOFNPLA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLHCGOFNPLA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FLHCGOFNPLA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FLHCGOFNPLA*))((::PBYTE)hIl2Cpp + FLHCGOFNPLA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FLHCGOFNPLA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
